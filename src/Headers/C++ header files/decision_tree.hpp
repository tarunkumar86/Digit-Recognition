#ifndef decision_tree_HPP
#define decision_tree_HPP

struct node{
    string label;
    node *previous;
    node *left;
    node *right;
    vector<node*> edges;
};

class decision_forest{
public:
    mathematics m;
    node *instantiate_root (string label)
    node *insert_root (node* current_node, string label, long number_of_spikes, long radius_of_curve)
    node* edit_node (node *current_node, long index_to_edit, string label_to_edit)
    int* convert_vector_into_array(vector<long> vector_to_turn)
    vector<double> calculate_splitting_criteria_and_add_to_vector (vector<long> spike_dataset, vector<long> radius_dataset, long X)

};
#endif
