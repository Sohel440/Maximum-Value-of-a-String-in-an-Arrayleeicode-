    int ans = INT_MIN;

    for (int i = 0; i < strs.size(); i++) {
        unordered_map<char, int> mp;
        string a = strs[i];

        for (int j = 0; j < a.size(); j++) {
            mp[a[j]]++;
        }

        bool flag = false;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (mp.find(ch) != mp.end()) {
                flag = true;
            }
        }
        int len = a.length();

        if (flag == true) {
            ans = max(ans,len );
        } else {
            int num = stoi(a);
            ans = max(ans, num);
        }
    }

    return ans;
