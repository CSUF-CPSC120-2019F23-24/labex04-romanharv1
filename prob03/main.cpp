// Sales prediction
#include <iostream>

int main()
{

  const int SALES_YEAR1 = 2103419277; //sales last year
  const int PERC_INCREASE_X100 = 18; //integer value for increase
  long salesnew;
  salesnew =  double(SALES_YEAR1) * double(PERC_INCREASE_X100) / 100 + SALES_YEAR1;

  std::cout << "Last year's sales were $" << SALES_YEAR1 << std::endl;
  std::cout << "This year's sales prediction: $" << salesnew;

return 0;
}
