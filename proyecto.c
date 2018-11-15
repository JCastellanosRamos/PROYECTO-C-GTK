#include <stdio.h>
#include <gtk/gtk.h>

void regresar(GtkWidget *widget, gpointer info);
void mostrar(GtkWidget *widget, gpointer info);
/*
 * CloseAppWindow
 *
 * Close down the application.
 */
gint CloseAppWindow (GtkWidget *widget, gpointer *data)
{
    gtk_main_quit ();
    
    return (FALSE);
}

void scroll(GtkWidget *widget, gpointer info);

/*
 * CheckEvent
 *
 * Handle a checkbox signal
 */
void CheckEvent (GtkWidget *widget, gpointer *data)
{
    
    g_print("checkbox event: %s\n", data);
}


/*
 * CreateCheckBox
 *
 *
 * Add a checkbox to the packing widget.
 */
GtkWidget *CreateCheckBox (GtkWidget *box, char *szLabel)
{
    GtkWidget *check;
    
    /* --- Get the check button --- */
    check = gtk_check_button_new_with_label (szLabel);
    
    /* --- Pack the checkbox into the vertical box (box). --- */
    gtk_box_pack_start (GTK_BOX (box), check, FALSE, FALSE, 10);
    
    /* --- Show the widget --- */
    gtk_widget_show (check);
    
    return (check);
}

enum
{
    COLUMN = 0,
    NUM_COLS
} ;

void  on_changed(GtkWidget *widget, gpointer statusbar)
{
    GtkTreeIter iter;
    GtkTreeModel *model;
    char *value;
    
    
    if (gtk_tree_selection_get_selected(
                                        GTK_TREE_SELECTION(widget), &model, &iter)) {
        
        gtk_tree_model_get(model, &iter, COLUMN, &value,  -1);
        gtk_statusbar_push(GTK_STATUSBAR(statusbar), gtk_statusbar_get_context_id(GTK_STATUSBAR(statusbar), value), value);
        g_free(value);
    }
}


static GtkTreeModel *
create_and_fill_model (void)
{
    GtkTreeStore *treestore;
    GtkTreeIter toplevel, child;
    
    treestore = gtk_tree_store_new(NUM_COLS,
                                   G_TYPE_STRING);
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Educacion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Rezago Educativo", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Tipo de Institucion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Calidad de la educacion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Importancia de la educacion en la vida", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Trabajo e ingresos", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Actividad laboral principal", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Actividad laboral secundaria", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Trabajo y condiciones de vida", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Prestaciones y condiciones laborales", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Desempleo", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Trabajo y gastos del hogar", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Ayuda de personas y/o instituciones", -1);
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Seguridad Social y Salud", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Auto-percepcion de salud", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Lugar de atencion y servicio medico con el que cuenta", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Calidad medica", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Accesibilidad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Causas por las que no acude al medico y alternativas", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Vulnerabilidad por falta de seguridad social", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Seguridad social/Capital Social", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Envejecimiento", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Pensiones", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Seguridad Alimentaria", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Calidad y cantidad de los alimentos", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Percepcion sobre la alimentacion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Preocupacion por la falta de alimentos", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Accesibilidad", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Caracteristicas de la vivienda", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Tipo de vivienda", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Comodidad y seguridad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Hacinamiento", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Servicios basicos", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Vulnerabilidad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Programas del gobierno", -1);
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Calidad del entorno fisico", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Alumbrado publico", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Banquetas y calles", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Movilidad urbana", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Areas verdes y esparcimiento", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Calidad del transporte publico", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Estacionamiento", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Accesibilidad", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Inseguridad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Victimas de delitos", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Percepcion de inseguridad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Prevencion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Delitos en la colonia y localidad", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Capital Social", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Redes sociales de pertenecia", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Redes de apoyo", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Reciprocidad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Cohesion", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Confianza en lideres comunitarios", -1);
    
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Bienestar subjetivo", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Satisfaccion con la vida", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Felicidad", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Intranquilidad, nerviosismo, depresion o tristeza", -1);
    
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Uso de la tecnologia", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Uso y acceso a las TIC", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Importancia de las TIC en la vida", -1);
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Acceso a la cultura y esparcimiento", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Tiempo libre", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Acceso a la cultura", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Cultura comunitaria", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Otros intereses culturales", -1);
    
    gtk_tree_store_append(treestore, &toplevel, NULL);
    gtk_tree_store_set(treestore, &toplevel, COLUMN, "Para terminar", -1);
    
    gtk_tree_store_append(treestore, &child, &toplevel);
    gtk_tree_store_set(treestore, &child, COLUMN, "Percepcion de las condiciones de vida", -1);
    
    return GTK_TREE_MODEL(treestore);
}


static GtkWidget *create_view_and_model (void)
{
    GtkTreeViewColumn *col;
    GtkCellRenderer *renderer;
    GtkWidget *view;
    GtkTreeModel *model;
    
    view = gtk_tree_view_new();
    
    col = gtk_tree_view_column_new();
    gtk_tree_view_column_set_title(col, "Topics");
    gtk_tree_view_append_column(GTK_TREE_VIEW(view), col);
    
    renderer = gtk_cell_renderer_text_new();
    gtk_tree_view_column_pack_start(col, renderer, TRUE);
    gtk_tree_view_column_add_attribute(col, renderer, "text", COLUMN);
    
    model = create_and_fill_model();
    gtk_tree_view_set_model(GTK_TREE_VIEW(view), model);
    g_object_unref(model);
    return view;
}


void CloseTheApp (GtkWidget *window, gpointer data)
{
    gtk_main_quit();
}

void ToggleVisibility(GtkButton *button, gpointer data){
    
    static gboolean VisibleState=TRUE;
    VisibleState =! VisibleState;
    
    gtk_entry_set_visibility(GTK_ENTRY(data),VisibleState);
}

void PrependText(GtkButton *button, gpointer data){
    
    gtk_entry_prepend_text(GTK_ENTRY(data),"prepend");
}

void AppendText(GtkButton *button, gpointer data){
    gtk_entry_append_text(GTK_ENTRY(data),"append");
}

void MakeButton(GtkWidget *box, GtkWidget *EntryBox, gpointer CallbackFunction, gchar *SignalName, gchar *ButtonText){
    
    GtkWidget *button;
    
    button=gtk_button_new_with_label(ButtonText);
    gtk_signal_connect(GTK_OBJECT(button),
                       SignalName,
                       GTK_SIGNAL_FUNC(CallbackFunction),
                       EntryBox);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 2);
    gtk_widget_show(button);
}


GtkWidget *BuildButtonBox(GtkWidget *EntryBox){
    GtkWidget *box;
    box=gtk_hbox_new(TRUE,5);
    MakeButton(box,EntryBox, ToggleVisibility, "clicked", "Visibility");
    MakeButton(box,EntryBox, PrependText, "clicked", "Prepend");
    MakeButton(box,EntryBox, AppendText, "clicked", "Append");
    
    return box;
}

int main(int argc, char *argv[]) {
    
    GtkWidget *window;
    GtkWidget *table;
    // GtkWidget *label;
    GtkWidget *btn;
    
    GtkWidget *frame1;
    GtkWidget *frame2;
    GtkWidget *frame3;
    GtkWidget *frame4;
    
    gtk_init(&argc, &argv);
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_default_size(GTK_WINDOW(window), 450, 450);
    gtk_window_set_title(GTK_WINDOW(window), "Ciencias Politicas");
    
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    
    table = gtk_table_new(2, 2, TRUE);
    gtk_table_set_row_spacings(GTK_TABLE(table), 10);
    gtk_table_set_col_spacings(GTK_TABLE(table), 10);
    gtk_container_add(GTK_CONTAINER(window), table);
    
    frame1 = gtk_frame_new("Selecciona el Estado que deseas:");
    gtk_frame_set_shadow_type(GTK_FRAME(frame1), GTK_SHADOW_IN);
    btn = gtk_button_new_with_label("Quit");
    gtk_widget_set_size_request(btn,70,30);
    
    frame2 = gtk_frame_new("Selecciona el Tema que deseas:");
    gtk_frame_set_shadow_type(GTK_FRAME(frame2), GTK_SHADOW_OUT);
    
    frame3 = gtk_frame_new("Ingresa el nombre del archivo de salida:");
    gtk_frame_set_shadow_type(GTK_FRAME(frame3), GTK_SHADOW_ETCHED_IN);
    
    frame4 = gtk_frame_new("Status");
    gtk_frame_set_shadow_type(GTK_FRAME(frame4), GTK_SHADOW_ETCHED_OUT);
    
    gtk_table_attach_defaults(GTK_TABLE(table), frame1, 0, 1, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(table), frame2, 0, 1, 1, 2);
    gtk_table_attach_defaults(GTK_TABLE(table), frame3, 1, 2, 0, 1);
    gtk_table_attach_defaults(GTK_TABLE(table), frame4, 1, 2, 1, 2);
    
    g_signal_connect(G_OBJECT(btn),"clicked",
                     G_CALLBACK(gtk_main_quit), G_OBJECT(window));
    
    g_signal_connect(G_OBJECT(window), "destroy",
                     G_CALLBACK(gtk_main_quit), G_OBJECT(window));
    
    /*>>>>>>>>>>>>>>primer frame<<<<<<<<<<*/
    
    GList *cbitems = NULL;
    //  GtkWidget *window;
    GtkWidget *vbox;
    GtkWidget *check1,*check2,*check3,*check4;
    
    /* --- GTK initialization --- */
    
    /* --- Create the top level window --- */
    // window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
    
    /* --- You should always remember to connect the delete_event
     *     to the main window.
     */
    // gtk_signal_connect (GTK_OBJECT (window), "delete_event",
    //GTK_SIGNAL_FUNC (CloseAppWindow), NULL);
    
    /* --- Give the window a border --- */
    // gtk_container_border_width (GTK_CONTAINER (window), 50);
    
    /*
     * --- We create a vertical box (vbox) to pack the horizontal boxes into.
     */
    vbox = gtk_vbox_new (FALSE, 0);
    
    /*
     * --- Create check buttons
     */
    check1 = CreateCheckBox (vbox, "Oaxaca");
    gtk_toggle_button_set_state (GTK_TOGGLE_BUTTON (check1), TRUE);
    gtk_signal_connect (GTK_OBJECT (check1), "clicked",
                        GTK_SIGNAL_FUNC (CheckEvent), "check 1 clicked");
    
    
    check2 = CreateCheckBox (vbox, "Ciudad de Mexico");
    gtk_signal_connect (GTK_OBJECT (check2), "clicked",
                        GTK_SIGNAL_FUNC (CheckEvent), "check 2 clicked");
    
    check3 = CreateCheckBox (vbox, "Tamaulipas");
    gtk_signal_connect (GTK_OBJECT (check3), "clicked",
                        GTK_SIGNAL_FUNC (CheckEvent), "check 3 clicked");
    
    check4 = CreateCheckBox (vbox, "Estado de Mexico");
    gtk_signal_connect (GTK_OBJECT (check4), "clicked",
                        GTK_SIGNAL_FUNC (CheckEvent), "check 4 clicked");
    
    /*
     * --- Make the main window visible
     */
    gtk_container_add (GTK_CONTAINER (frame1), vbox);
    // gtk_widget_show (vbox);
    // gtk_widget_show (window);
    
    /*>>>>>>>>>>>>segundo frame<<<<<<<<<<<<<<*/
    GtkWidget *Elboton;
    
    Elboton=gtk_button_new_with_label("Ir al scroll");
    //gtk_container_set_border_width(GTK_CONTAINER(frame2),30);
    g_signal_connect(G_OBJECT(Elboton),"clicked",G_CALLBACK(scroll),NULL);
    gtk_container_add(GTK_CONTAINER(frame2),Elboton);
    
    /*>>>>>>>>>>Tercer frame<<<<<<<<<<<<<<<<<*/
    
    //GtkWidget *window;
    GtkWidget *entrybox;
    GtkWidget *mainbox;
    GtkWidget *buttonbox;
    GtkWidget *botonm;
    
    /*window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
     gtk_window_set_default_size(GTK_WINDOW(window),320,200);
     gtk_window_set_title(GTK_WINDOW(window),"PRUEBA");
     gtk_container_set_border_width(GTK_CONTAINER(window),5);
     gtk_signal_connect(GTK_OBJECT(window),"destroy",
     GTK_SIGNAL_FUNC(CloseTheApp),NULL);*/
    
    mainbox = gtk_vbox_new(TRUE,5);
    
    entrybox=gtk_entry_new();
    gtk_entry_set_text(GTK_ENTRY(entrybox),"TESTING");
    gtk_box_pack_start(GTK_BOX(mainbox),entrybox,TRUE,TRUE,5);
    gtk_widget_show(entrybox);
    
    buttonbox = BuildButtonBox(entrybox);
    gtk_box_pack_end(GTK_BOX(mainbox),buttonbox,TRUE,TRUE,5);
    gtk_widget_show(buttonbox);
    
    gtk_container_add(GTK_CONTAINER(frame3),mainbox);
    botonm=gtk_button_new_with_label("Crear archivo");
    g_signal_connect(G_OBJECT(botonm),"clicked",G_CALLBACK(mostrar),frame4);
    gtk_box_pack_end(GTK_BOX(mainbox),botonm,TRUE,TRUE,5);
    
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}

void scroll(GtkWidget *widget, gpointer info)
{
    GtkWidget *window;
    GtkWidget *view;
    GtkTreeSelection *selection;
    GtkWidget *vbox2;
    GtkWidget *statusbar;
    GtkWidget *Elboton2;//la venganza
    
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
    gtk_window_set_title(GTK_WINDOW(window), "Tree View");
    gtk_widget_set_size_request (window, 350, 400);
    Elboton2=gtk_button_new_with_label("regresar");
    vbox2 = gtk_vbox_new(FALSE, 2);
    gtk_container_add(GTK_CONTAINER(window), vbox2);
    
    view = create_view_and_model();
    selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(view));
    
    gtk_box_pack_start(GTK_BOX(vbox2), view, TRUE, TRUE, 1);
    
    statusbar = gtk_statusbar_new();
    gtk_box_pack_start(GTK_BOX(vbox2), statusbar, FALSE, TRUE, 1);
    
    g_signal_connect(selection, "changed", G_CALLBACK(on_changed), statusbar);
    g_signal_connect (G_OBJECT (window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(G_OBJECT(Elboton2),"clicked",G_CALLBACK(regresar),window);
    gtk_box_pack_start_defaults(GTK_BOX(vbox2),Elboton2);
    
    gtk_widget_show_all(window);
}

void regresar(GtkWidget *widget, gpointer info)
{
    //WIDGETS *window=(WIDGETS*)info;
    gtk_widget_hide_all(info);
}

void mostrar(GtkWidget *widget, gpointer info)
{
    GtkWidget *label;
    label=gtk_label_new("Archivo creado");
    gtk_label_set_justify( GTK_LABEL(label), GTK_JUSTIFY_CENTER);   
    gtk_container_add(GTK_CONTAINER(info),label);
    gtk_widget_show_all(info);
}
/*para correrlo gcc -Wall -o proyecto Proyecto.c `pkg-config --cflags --libs gtk+-2.0`*/
