typedef struct {
  std::string name;
  std::string svg;
} child;

typedef struct {
  std::vector<child> children;
} block;
