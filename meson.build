project('modern-cpp-gtk-quickstart', 'cpp',
    version : '0.1.0',
    default_options : [
        'warning_level=3',
        'cpp_std=c++17',
    ]
)

gtkmmdep = dependency('gtkmm-3.0')

sources = [
    'src/main.cpp',
    'src/MainWindow.cpp'
]
exe = executable('modern-cpp-gtk-quickstart', sources,
    dependencies : [
        gtkmmdep,
    ],
    install : true
)

test('unittest', exe)
