//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
#include <algorithm>

struct Workshop{
  public:
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops{
  public:
    int n;
    vector<Workshop> *arr = new vector<Workshop>(n);
};

Available_Workshops* initialize(int start_time[], int duration[], int n){
    Available_Workshops* obj = new Available_Workshops;

    obj->n=n;
    for(int i=0; i<n; i++){
        Workshop ws;
        ws.start_time = start_time[i];
        ws.duration = duration[i];
        ws.end_time = ws.start_time + ws.duration;
        obj->arr->push_back(ws);
    }
    return obj;
}

int CalculateMaxWorkshops(Available_Workshops* ptr){
    int counter=0, f=0;
    sort(ptr->arr->begin(), ptr->arr->end(), [](Workshop& ws1, Workshop& ws2){return ws1.end_time < ws2.end_time;}); // use lambda function here
    for(int i=0; i<ptr->n; i++){
        if(ptr->arr->at(i).start_time >= f){
            f = ptr->arr->at(i).end_time;
            counter++;
        }
    }
    return counter;
}

