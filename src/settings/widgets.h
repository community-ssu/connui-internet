#ifndef WIDGETS_H
#define WIDGETS_H

void
iap_widgets_insert_only_ascii_text(GtkEditable *editable, gchar *new_text,
                                   gint new_text_length, gpointer position,
                                   gpointer user_data);

void
iap_widgets_insert_text_no_8bit_maxval_reach(GtkEditable *editable,
                                             gchar *new_text,
                                             gint new_text_length,
                                             gpointer position,
                                             gpointer user_data);

GtkWidget *
iap_widgets_create_static_picker_button(const gchar *title,
                                        const gchar *text1, ...);

GtkWidget *
iap_widgets_create_h22_entry(void);

const gchar *
iap_widgets_h22_entry_get_text(GtkWidget *entry);

void
iap_widgets_h22_entry_set_text(GtkWidget *entry, const gchar *text);

GtkWidget *
iap_widgets_create_static_combo_box(const gchar *text1, ...);

#endif // WIDGETS_H
