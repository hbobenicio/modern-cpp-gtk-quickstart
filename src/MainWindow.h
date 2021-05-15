#ifndef APP_MAIN_WINDOW_H
#define APP_MAIN_WINDOW_H

#include <gtkmm/window.h>
#include <gtkmm/toolbar.h>
#include <gtkmm/box.h>
#include <gtkmm/treeview.h>

namespace app {

    class MainWindow : public Gtk::Window {
    private:
        Gtk::VBox main_vbox;
        Gtk::Toolbar toolbar;
        Gtk::ToolButton import_tool_button;
        Gtk::TreeView certificates_tree_view;

    public:
        MainWindow();
    };
}

#endif
