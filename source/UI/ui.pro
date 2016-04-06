TEMPLATE    = subdirs
SUBDIRS     = MainForm/MainForm \
    PlugIns/DutViewPlugin \
    PlugIns/FctViewPlugin \
    PlugIns/LoopTestViewPlugin \
    PlugIns/progressCircle


!static:SUBDIRS +=  PlugIns/DetailViewPlugin \
                    PlugIns/ScopeViewPlugin \
                    PlugIns/InteractionViewPlugin\
                    PlugIns/BarcodeViewPlugin


