class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //using pefix and suffix product
        vector<int> products;
        vector<int> prefix_product;
        vector<int> suffix_product;
        int product;
        int pre_product = 1;
        int suf_product = 1;

        for (int i = 0; i < nums.size(); i++) {
            pre_product = pre_product * nums[i];
            prefix_product.push_back(pre_product);
        }

        for (int j = nums.size() - 1; j >= 0 ; j--) {
            suf_product = suf_product * nums[j];
            suffix_product.push_back(suf_product);
        }
        reverse(suffix_product.begin(), suffix_product.end());

        for (int k = 0; k < nums.size(); k++) {
            if (k == 0) {
                product = suffix_product[k+1];
                products.push_back(product);
            } else if (k == nums.size() - 1) {
                product = prefix_product[k-1];
                products.push_back(product);
            } else {
                product = prefix_product[k-1] * suffix_product[k+1];
                products.push_back(product);
            }
        }

        return products;
    }
};
