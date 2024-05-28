double total_pressure(double molar_mass1, double molar_mass2, double given_mass1, double given_mass2, double v, double t) {

    double temperature_kelvin = t + 273.15;
    const double R = 0.082;
    double n1 = given_mass1 / molar_mass1;
    double n2 = given_mass2 / molar_mass2;
    
    double P_total = (n1 + n2) * R * temperature_kelvin / v;
    
    return P_total;
  }