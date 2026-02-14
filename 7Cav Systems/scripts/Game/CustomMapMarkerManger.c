class CustomMapMarkerManagerClass : SCR_MapMarkerManagerComponentClass { };

class CustomMapMarkerManager : SCR_MapMarkerManagerComponent
{
    override void OnAskAddStaticMarker(SCR_MapMarkerBase markerData)
    {
        // Force global visibility for all player-placed markers
        markerData.SetMarkerFactionFlags(0);
        // Call original to process and broadcast
        super.OnAskAddStaticMarker(markerData);
    }
};