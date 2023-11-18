import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

word_clock_component_ns = cg.esphome_ns.namespace('word_clock_component')
WordClockComponent = word_clock_component_ns.class_('WordClockComponent', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(WordClockComponent)
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)