#include <User.h>\

User::User(string server_address, string server_port, string input_data_file, string output_data_file, string aut_data_file) {
    server_address_ = server_address;
    server_port_ = server_port;
    input_data_file_ = input_data_file;
    output_data_file_ = output_data_file;
    aut_data_file_ = aut_data_file;
}


string User::GetInputFile() { return input_data_file_; }
string User::GetOutputFile() { return output_data_file_; }
string User::GetAutFile() { return aut_data_file_; }
string User::GetServerAddress() { return server_address_; }
string User::GetServerPort() { return server_port_; }
string User::GetId() { return user_id_; }
string User::GetPassword() { return user_password_; }
string User::GetSALT() { return user_SALT_; }
string User::GetHASH() { return user_HASH_; }
string User::GetVectorNumberB() { return vector_number_b_; }
string User::GetVectorSizeB() { return vector_size_b_; }
vector<double> User::GetVectorB() { return vector_b_; }
string User::GetCalcNumberB() { return calculation_number_b_; }
string User::GetCalcResultB() { return calculation_result_b_; }



int User::SetIdPassword(vector<string> aut_data) {
    user_id_ = aut_data[0];
    user_password_ = aut_data[1];
    return 0;
}

int User::SetSALT(string SALT){
    user_SALT_ = SALT;
    return 0;
}

int User::SetHASH(string HASH) {
    user_HASH_ = HASH;
    return 0;
}

int User::SetVectorNumberB(string vector_number_b) {
    vector_number_b_ = vector_number_b;
    return 0;
}

int User::SetVectorB(vector<double> vector_b) {
    int tmp_int = (int)vector_b[0]; // Блок для инициализации размера вектора( первый элемент в векторе)
    vector_size_b_ = to_string(tmp_int); //
    vector_b.erase(vector_b.begin()); // Выбрасываем из вектора его размер
    vector_b_ = vector_b;
    return 0;
}

int User::SetCalcNumberB(string calculation_number_b) {
    calculation_number_b_ = calculation_number_b;
    return 0;
}

int User::SetCalcResultB(string calculation_result_b) {
    calculation_result_b_ = calculation_result_b;
    return 0;
}

int User::NapisatVector() { // // ВНИМАНИЕ!!! Тестовый метод
    cout << "\tSize in bin: " << vector_size_b_ << "\tElements in bin: ";
    for (auto& c : vector_b_)
        cout << setprecision(10) << c << " ";
    cout << endl;
    return 0;
}