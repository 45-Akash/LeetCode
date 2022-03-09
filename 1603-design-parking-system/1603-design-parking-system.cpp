class ParkingSystem {
public:
    vector<int>arr;
    ParkingSystem(int big, int medium, int small) {
        arr.resize(4);
        arr[1]=big;
        arr[2]=medium;
        arr[3]=small;
    }
    
    bool addCar(int carType)
    {
        cout<<carType<<" "<<arr[carType]<<endl;
        if(arr[carType]==0)       return false;
        arr[carType]--;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */