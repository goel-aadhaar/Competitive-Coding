int maxSatisfaction(vector<int>& satisfaction) {
        int size=satisfaction.size();
        vector<int>v(size);
        for(int i=0;i<size;i++)v[i]=satisfaction[i];
        int count=0,i=0,sum=0,diff=0;
        sort(v.begin(),v.end());
        while(i<size){
            if(v[i]>=0){
                i++;
            }
            else{
                diff=(v[size-1]*(size-count))-((v[size-1]*(size-count-1)));
                cout<<i<<" "<<diff<<endl;
                if((-v[i]*(i+1-count))>diff){
                    v[i]=-1001;
                    count++;
                    i++;
                }
                else {
                    i++;
                }
            }
        }
        
        int x=1,pt=0;
        while(pt<size){
            if(v[pt]==-1001){
                pt++;
            }
            else {
                sum+=x*v[pt];
                x++;
                pt++;
            }
        }
        // for(int i=0;i<size;i++){
        //     cout<<v[i];
        // }
        return sum;
    }