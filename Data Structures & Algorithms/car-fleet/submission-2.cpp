class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<int> ind(1000,-1);
        //saving indexes for sorting later
        for(int i=0;i<n;i++){
            ind[position[i]]=i;
        }
        //calculating the time to be taken
        vector<float> time;
        for(int i=0;i<n;i++){
            time.push_back((float)(target-position[i])/speed[i]);
        }
        //sorting the time taken
        vector<float> sortedTime;
        for(int x:ind){
            if(x!=-1){
                sortedTime.push_back(time[x]);
            }
        }
        //now speed array is the sorted and perform further operations on it
        float fleetTime=sortedTime[n-1];
        int fleets=1;
        for(int i=n-1;i>=0;i--){
            if(sortedTime[i]>fleetTime){
                fleetTime=sortedTime[i];
                fleets++;
            }
        }
        return fleets;
    }
};
