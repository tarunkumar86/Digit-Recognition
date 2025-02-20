#ifndef mathematics_HPP
#define mathematics_HPP

class mathematics{
protected:
    double information_entropy = 0, P_X = 0, log10_P_X = 0, element_occurence = 0;
public:
    double sigmoid(double point)
    double sigmoid_gradient(double point)
    double probability(int P_Array[], long length_of_array, int X)
    double compute_log10(double X)
    double compute_information_entropy(double data_array[], double X)
};
#endif
