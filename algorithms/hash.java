import java.util.HashMap;

public class hash {
    
    int great(int a[],int key)
    {
        HashMap<Integer,Integer> mp;


        int n=a.length;
        int rs=0;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
      return rs;


    }
}
