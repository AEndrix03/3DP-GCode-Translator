//
// Created by redeg on 27/04/2025.
//

#pragma once

namespace translator::gcode {

    class IDriverInterface {
    public:
        virtual ~IDriverInterface() = default;

        // Movimento assi
        virtual void moveTo(double x, double y, double z, double feedrate) = 0;
        virtual void homeAllAxes() = 0;
        virtual void homeAxisX() = 0;
        virtual void homeAxisY() = 0;
        virtual void homeAxisZ() = 0;

        // Temperatura
        virtual void setHotendTemperature(double temperature) = 0;
        virtual void setBedTemperature(double temperature) = 0;

        // Ventola
        virtual void setFanSpeed(int speed) = 0;

        // Estrusore
        virtual void extrude(double length, double feedrate) = 0;
        virtual void retract(double length, double feedrate) = 0;

        // Sistema
        virtual void emergencyStop() = 0;
        virtual void pausePrint() = 0;
        virtual void resumePrint() = 0;
    };

}
