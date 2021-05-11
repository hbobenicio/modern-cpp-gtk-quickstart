#include <gtkmm.h>

#include "MainWindow.h"

int main(int argc, char **argv) {
    auto application = Gtk::Application::create(argc, argv, "br.com.hugobenicio.modern-cpp-gtk-quickstart");
    
    app::MainWindow main_window;

    return application->run(main_window);
}
