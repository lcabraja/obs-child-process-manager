/*
Plugin Name
Copyright (C) 2024 Luka Čabraja luka@cabraja.eu

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#include <obs-module.h>
#include <plugin-support.h>
// 
OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE(PLUGIN_NAME, "en-US")

#define TEXT_PROMPT_DEFAULT "Enter your text here"

bool obs_module_load(void)
{
	obs_log(LOG_INFO, "plugin loaded successfully (version %s)",
		PLUGIN_VERSION);
	return true;
}

void obs_module_unload(void)
{
	obs_log(LOG_INFO, "plugin unloaded");
}



// Frontend Code...
// #include <obs-module.h>
// #include <obs-frontend-api.h>

// OBS_DECLARE_MODULE()
// OBS_MODULE_USE_DEFAULT_LOCALE("your-plugin-name", "en-US")

// #define TEXT_PROMPT_DEFAULT "Enter your text here"

// struct your_plugin_data {
//     char *text_prompt;
// };

// static const char *your_plugin_get_name(void *unused)
// {
//     UNUSED_PARAMETER(unused);
//     return "Your Plugin Name";
// }

// static void *your_plugin_create(obs_data_t *settings, obs_source_t *source)
// {
//     struct your_plugin_data *data = bzalloc(sizeof(struct your_plugin_data));
//     data->text_prompt = bstrdup(TEXT_PROMPT_DEFAULT);
//     return data;
// }

// static void your_plugin_destroy(void *data)
// {
//     struct your_plugin_data *plugin_data = data;
//     bfree(plugin_data->text_prompt);
//     bfree(plugin_data);
// }

// static void your_plugin_update(void *data, obs_data_t *settings)
// {
//     struct your_plugin_data *plugin_data = data;
//     const char *text_prompt = obs_data_get_string(settings, "text_prompt");
//     bfree(plugin_data->text_prompt);
//     plugin_data->text_prompt = bstrdup(text_prompt);
// }

// static obs_properties_t *your_plugin_properties(void *data)
// {
//     obs_properties_t *props = obs_properties_create();
//     obs_properties_add_text(props, "text_prompt", "Text Prompt", OBS_TEXT_DEFAULT);
//     return props;
// }

// static void your_plugin_render(void *data, gs_effect_t *effect)
// {
//     struct your_plugin_data *plugin_data = data;
//     // Render your text or other elements using plugin_data->text_prompt
// }

// struct obs_source_info your_plugin_info = {
//     .id = "your_plugin",
//     .type = OBS_SOURCE_TYPE_INPUT,
//     .output_flags = OBS_SOURCE_VIDEO,
//     .get_name = your_plugin_get_name,
//     .create = your_plugin_create,
//     .destroy = your_plugin_destroy,
//     .update = your_plugin_update,
//     .get_properties = your_plugin_properties,
//     .video_render = your_plugin_render,
// };

// bool obs_module_load(void)
// {
//     obs_register_source(&your_plugin_info);
//     obs_log(LOG_INFO, "plugin loaded successfully (version %s)", PLUGIN_VERSION);
//     return true;
// }

// void obs_module_unload(void)
// {
//     obs_log(LOG_INFO, "plugin unloaded");
// }
