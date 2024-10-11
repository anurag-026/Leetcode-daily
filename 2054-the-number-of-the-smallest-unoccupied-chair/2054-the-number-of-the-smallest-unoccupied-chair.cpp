class Solution {
public:

    // int smallestChair(vector<vector<int>>& times, int targetFriend) {
    //     int n = times.size();
    //     vector<vector<int>> a(n);
    //     vector<vector<int>> l(n);
    //     int target = times[]
    //     int arr[n];
    //     for(int i=0; i<n; i++){
    //         arr[i] =-1;
    //     } 

    //     for(int i=0 ; i<n; i++){
    //         a.emplace_back(times[i][0] , i);
    //         l.emplace_back(times[i][1] , i);
    //     }

    //     sort(a.begin() , a.end());
    //     sort(l.begin() , l.end());

    //     int i=0, j=0;

    //     for(int t = a[0][0] ; t <= a[n-1][0] ; t++ ){
    //         int x;
    //         if(t >= a[i][0]){
    //             x=0;
    //             while(arr[x] != -1) x++;

    //             arr[x] = a[i++][1];
    //         }

    //         if(i == targetFriend ) return x;

    //         while( t >= l[j][0] ){
    //             int k=0;
    //             while(arr[k] != l[j][1] ){
    //                 k++;
    //             }
    //             arr[k] =-1;
    //             j++;
    //         }
    //     }
    //     return -1;

    // }

    int smallestChair(std::vector<std::vector<int>>& times, int targetFriend) {
        int n = times.size();
        
        std::vector<std::pair<int, int>> arrivals;
        for (int i = 0; i < n; ++i) {
            arrivals.push_back({times[i][0], i});
        }
        
        std::sort(arrivals.begin(), arrivals.end());
        
        std::priority_queue<int, std::vector<int>, std::greater<int>> availableChairs;
        for (int i = 0; i < n; ++i) {
            availableChairs.push(i); 
        }
 
        priority_queue< pair<int, int>, vector< pair<int, int>>, greater< pair<int, int>>> leavingQueue;
         
        for (auto& arrival : arrivals) {
            int arrivalTime = arrival.first;
            int friendIndex = arrival.second;
             
            while (!leavingQueue.empty() && leavingQueue.top().first <= arrivalTime) {
                availableChairs.push(leavingQueue.top().second);
                leavingQueue.pop();
            }
            
            int chair = availableChairs.top();
            availableChairs.pop();
             
            if (friendIndex == targetFriend) {
                return chair;
            }
             
            leavingQueue.push({times[friendIndex][1], chair});
        }
        
        return -1;  
    }
};