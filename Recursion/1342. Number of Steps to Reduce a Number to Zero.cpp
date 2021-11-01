class Solution {
public:
    int helper(int num,int count)
    {
        if(num==0)
            return count;
        if(num%2 == 0)
        {
            cout<<"IF "<<num<<endl;
            cout<<"count if "<<count<<endl;
            return helper(num/2,count+1);
        }
        else 
        {
            cout<<"else "<<num<<endl;
            cout<<"Count else "<<count<<endl;
            return helper(num-1,count+1);
        }
    }
    int numberOfSteps(int num) {
        cout<<<<endl;
        return helper(num,0);
    }
};
