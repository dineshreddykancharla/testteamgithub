<?php
/**
* @file
* Administration page callbacks for the Products module.
*/
/**
* Form builder. Configure annotations.
*
* @ingroup forms
* @see system_settings_form().
*/
function products_admin_settings()
{
	$types = node_type_get_types();
	foreach($types as $node_type) {
$options[$node_type->type] = $node_type->name;
}
$form['annotate_node_types'] = array(
'#type' => 'checkboxes',
'#title' => t('Users may annotate these content types'),
'#options' => $options,
'#default_value' => variable_get('annotate_node_types', array('page')),
'#description' => t('A text field will be available on these content types to
make user-specific notes.'),
);
$form['product_price'] = array(
'#type' => 'textfield',
'#title' => t('price'),
'#description' => t('A text field will be available on products to add price'),
);
$form['#submit'][] = 'products_admin_settings_submit';
return system_settings_form($form);
}