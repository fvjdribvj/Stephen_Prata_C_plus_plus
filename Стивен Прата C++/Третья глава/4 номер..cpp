using namespace std;
const int hours_in_day = 24;
const int mins_in_hour = 60;
const int secs_to_min = 60;

long input_seconds;
cin >> input_seconds;

long seconds = input_seconds % secs_to_min;
long minutes = input_seconds / secs_to_min % mins_in_hour;
long days = input_seconds / secs_to_min / mins_in_hour / hours_in_day;

cout << input_seconds << " seconds = ";
     << days << " days: ";
     << minutes << " minutes: ";
     << seconds << " seconds: ";

return 0;