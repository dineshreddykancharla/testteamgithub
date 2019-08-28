<?php
  function plants_preprocess_page(&$vars) {
    // To display sublinks.
	
    $main_menu_tree = menu_tree(variable_get('menu_main_links_source', 'main-menu'));
    $vars['main_menu'] =  $main_menu_tree;
	
  }

function plants_menu_tree__main_menu(&$vars) {
  // To add CSS class to the main menu ul
  return '<li>' . $vars['tree'] . '</li>';
}
?>