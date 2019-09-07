template <typename T>
class Blob{
    public:
    private:
        std::shared_ptr<std::vector<T>> data;
	void check(size_type i,const std::string &msg) const;
}
