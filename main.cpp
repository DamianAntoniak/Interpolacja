#include <iostream>
#include <algorithm>

int main()
{
	int l;
	std::cout << "Podaj liczbe wezlow: ";
	std::cin >> l;
	std::cout << std::endl;

	if(l <= 0) std::cout << "Podano niepoprawn¹ ilosc wezlow";
	else
	{
		float x[l], f[l], c_x, c_f;

		for(int i = 0; i < l; i++)
		{
			bool exist = false;
			do
			{
				std::cout << "Podaj x(" << i << "): ";
				std::cin >> c_x;

				std::cout << "Podaj f(" << i << "): ";
				std::cin >> c_f;

				for(int j = 0; j < i; j ++)
				{
					if(c_x == x[j] && c_f == f[j])
					{
						std::cout << "Wezly nie moga sie powtarzac!\n(x = " << c_x << " i f = " << c_f << " zostal juz podany.\n";
						exist = true;
						break;
					}
					else exist = false;
				}
				if(exist == false)
				{
					x[i] = c_x;
					f[i] = c_f;
				}
			} while(exist);
		}

		std::sort(x, x + l, std::less<float>());

		float p;
    	do
		{
        	std::cout << "Podaj punkt interpolacji w przedziale <" << x[0] << "," << x[l - 1] << ">: ";
        	std::cin >> p;

    	} while (p < x[0] || p > x[l - 1]);

    	float result = 0, y[l];
 
    	for(int i = 0; i < n; i++)
    	{
        	for(j=n; j > i; j--)
            	f[j] = (f[j] - f[j-1]) / (x[j] - x[j-i-1]);
    	}
    	float a;
    	for( i = n; i >= 0; i--)
    	{
        	a=1;
        
        	for(j=0; j < i; j++)
            	a = a * (p - x[j]);
            
        	a = a * f[j];
        	result = result + mnoznik;
    	}
    	
        std::cout << "Wynik: " << result;
	}
	return 0;
}
