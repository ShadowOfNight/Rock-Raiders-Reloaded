# Rock Raiders Reloaded

Description
--------------
To be added later


Notes
--------------
**Do not download this as a ZIP, it will mess up all of the .ae, .cfg, .lws, and .txt files!**


Goals:
--------------
- Adding new creatures, objects, buildings, vehicles, and levels to the game.
- Cleaning up various aspects of configuration file code.
- New sounds and effects.
- New tutorials to reflect changes to various gameplay elements.
- New voiceovers.
- Properly sorting shared textures and models.
- Reactivating cut content from the original game.
- Upgrading the existing game models that will be kept.


Credits
--------------

alan:
- Custom map "Bad Conditions."
- Custom map "Let's go swimming!".

Axel (aka Eaol):
- HD Ice, Lava, and Rock biome remakes. 
- Gold, Ice Rock, Pyrite, and Sand biomes.
- Pyrite Monster.

Cirevam: 
- High-polygon sonic blaster model.
- High-polygon energy crystal model.
- For providing several animations needed for Geo-Dome upgrade.

Cyrem:
- Custom map "Bolt Molt!".

Jessietail: 
- For advice, help, ideas, and many contributions to this project.
- High-polygon teal 2x2 brick model.
- High-polygon 1x1 LEGO cone model.
- Quake.wav

JimbobJeffers:
- Custom map "Crystal Catastrophe."
- Custom map "Hard Luck."


**Sounds Sources**
- Ambient
	- Quake.wav - edited from Avalanche Sound by nps.gov (pd) from soundbible.com. 

- Buildings
	- elec1, elec2, elec3, elec4, and elec5.wav - modified by Axel.
	- explode1.wav - created by Yourself.
	- explode2.wav - created by Yourself.
	- powerhum.wav - modified by Axel.
	- tool_store.wav - created by Axel.
	- upgradelc1.wav - modified by Axel.

- Creatures
	- bats.wav - created by Axel.
	- slugIN.wav - edited by Axel.
	- slugOUT.wav - edited by Axel.

- Minifigure
	- Pdrill.wav - created by Yourself.

- Interface
	- CLICK.wav - created by Yourself.
	- wallclick.wav - created by Yourself.

- Scene
	- laser1.wav - edited from soransgun.mp3 from trekcore.com
	- ROKBREK1.wav - created by Yourself; edited later by yours truly.

- Vehicles\BIGDIG
	- BIGDIGDRILL.wav and BIGDIGDRILLFADE.wav - edited from originals by Axel.

- All other sound effects are original files by Data Design Interactive.


Changelog
--------------
v0.13.025
- Added PM67a and PM67b for all ProMeshes. 
- Removed Pointer_Pickup, Pointer_Drill, Pointer_CantDrill, Pointer_PutDown, and Pointer_Clear lines from the cfg.
- Removed OUT.flh and PUT_DOWN.flh from Interface\Pointers.

v0.13.024
- Tweaked BrickConeY.lwo color (in Shared).
- Removed old changelog from repository assets.
- Cut down on Dummy.wav size from 1.54 KB to 50 bytes.
- Edited Lazhit.wav a bit to decrease length and volume slightly.

v0.13.023
- Removed Pointer_Teleport, Pointer_CantTeleport, Pointer_Reinforce, Pointer_CantReinforce, Pointer_Zoom, Pointer_CantZoom, Pointer_Help, Pointer_CantHelp, Pointer_Dynamite, and Pointer_CantDynamite from Pointers in the cfg.
- Removed TeleportPointer.bmp, ANtelep.bmp, Areinf.bmp, ANreinf.bmp, Azoom.bmp, ANzoom.bmp, and AHelp.bmp from Interface\Pointers.
- Replaced all bmps in Interface\Pointers.
- Added Adrill.bmp, Amove.bmp, ANdrill.bmp, ClearRub.bmp, and Vehic_load.bmp into Interface\Pointers.
- Re-linked Pointer_VehicleCantDig, Pointer_VehicleDig, Pointer_VehiclePickUp, Pointer_VehicleGo, and Pointer_VehicleClear lines in Pointers {} to new bmps.
- Removed Pointer_Go and Pointer_CantGo lines from Pointers {}, as they appear to be unused since non-generic lines are present.

v0.13.022
- Removed InGame folder from Sounds\Streamed. (New voiceovers needed).

v0.13.021
- Changed name of Ore1st.lwo in MiscObjs\Ore to Ore.lwo. (Updated cfg link to match)
- Removed Info_GenericDeath line from InfoMessages.
- Added Info_LegoManDeath, Info_VehicleDeath, Info_CavernLocated, Info_WallReinforced, and Info_PathCompleted to InfoMessages.
- Added cavefound.bmp, infoRein.bmp, and info_path.bmp to Interface\Buttons.
- Changed Info_FoundMinifigure text to say A missing Rock Raider has been found.

v0.13.020
- Changed building size in BIGTeleport.ae in Buildings\BIGTeleport; fixed some spacing issues as well.
- Added green light spangle effect (LightSpangleG.bmp and LightSpangleG.lwo) into Shared.
- Added Info_LavaErode line into InfoMessages; added InfoSFX_Erosion into Samples (currently dummied out pending new voiceover).
- Added info_erode.bmp into Interface\Buttons.

v0.13.019
- Removed entire Training folder from Sounds\Streamed. New voiceovers will be made once tutorials are finished.
- Removed Failure, Names, Objectiv, and Success folders from Sounds\Streamed.  New voiceovers for these will need to be done once all maps are finalized.

v0.13.018
- Pointed BDLightsR.lws, BdLightsS.lws, and BDLightsT.lws in Vehicles\LargeDigger\BD_lights to new light spangle effects in Shared.
- Added new intro video as a replacement for original lmi video.
- Added LMI Video lines back into Main {}; temporarily dummied out.
- Replaced barrierplace.wav, barrierwood.wav, BTHUD.wav, and Drop.wav in Sounds\Buildings with originals for now.
- Replaced sonic_blaster.wav in Sounds\Creatures with original for now.

v0.13.017
- Changed Bonus11 folder name in Levels\BonusLevels to match map name; changed cfg links and file names to reflect this.
- Pointed Barrier_LongF2.lws in MiscObjs\Barrier to new light spangle effects in Shared.
- Removed LightSPANKLE.bmp, LightSPANKLER.bmp, spangleR.lwo, and spangleY.lwo from MiscObjs\Barrier.
- Pointed Rock_Explo.lws in MiscObjs\Effects to new light spangle effects in Shared.
- Removed LightSPANKLE.bmp, LightSPANKLER.bmp, spangleR.lwo, and spangleY.lwo from MiscObjs\Effects
- Removed medium and low poly sections from Bulldozer.ae in Vehicles\Bulldozer; fixed spacing issues.

v0.13.016
- Pointed swiperighthand.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Added Activity_HitHard to Slug.ae in Creatures\Slug.
- Added in VL_SlugHit.lws to Creatures\Slug. (activates slug damage animation)
- Removed spangle.lwo from World\Shared.
- Pointed Carry_RestStand.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed CRUMBLE2.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed emergefromwall_Rocks.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed enter_wall_final.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed Explosion.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed pickup_eat.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed ScoopUp.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed STAMP.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed ThrowSmallbould.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed Turn90Left.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed Turn90Right.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed turnLCarrybould.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed turnRCarrybould.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed Walk4.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Pointed walkCarrybould.lws in Creatures\IceMonster to new light spangle effects in Shared.
- Removed LightSPANKLER.bmp and spanrkle.lwo from Creatures\IceMonster.

v0.13.015
- Pointed GD_S_Explode.lws in Buildings\Geo-Dome\Standard to new light spangle effects in Shared.
- Pointed GD_S_Explode.lws in Buildings\Geo-Dome\Standard to new light spangle effects in Shared.
- Pointed GD_U_Explode.lws in Buildings\Geo-Dome\Upgrade to new light spangle effects in Shared.
- Pointed GunstationBlow2.lws in Buildings\Gunstation to new light spangle effects in Shared.
- Pointed CR_BOOM.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed CR_Dormant.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed CR_DropOff.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed TELEPORT.lws in Buildings\Teleports to new light spangle effects in Shared.
- Pointed Teleport_Blow2.lws in Buildings\Teleports to new light spangle effects in Shared.
- Pointed M-teleportBlow2.lws in Buildings\ToolStation to new light spangle effects in Shared.
- Removed LightSPANKLE.bmp, LightSPANKLER.bmp, spangleR.lwo, spangleY.lwo
- Pointed Upgrade_Idle.lws in Buildings\Upgrade to new light spangle effects in Shared.
- Pointed Upgrade_operate.lws in Buildings\Upgrade to new light spangle effects in Shared.
- Pointed UpgradeBlow5.lws in Buildings\Upgrade to new light spangle effects in Shared.
- Pointed Upgrades.lws in Buildings\Upgrade to new light spangle effects in Shared.

v0.13.014
- Added Quake.wav into Sounds\Ambient courtesy of Jessietail. (Added into SFX_Ambient line in Samples)
- Fixed Config Level List formatting in Levels.
- Pointed Barracks_steam.lws in Buildings\Barracks to new light spangle models in Shared folder.
- Pointed BarracksExplode2.lws in Buildings\Barracks to new light spangle model in Shared folder.
- Removed LightSPANKLE.bmp, LightSPANKLER.bmp, spangleR.lwo, and spangleY.lwo from Buildings\Barracks.
- Pointed Big_teleport.lws in Buildings\BIGTeleport to new light spangle effects in Shared.
- Pointed Big_teleport_Exp2.lws in Buildings\BIGTeleport to new light spangle effects in Shared.
- Pointed Big_teleport_Idle.lws in Buildings\BIGTeleport to new light spangle effects in Shared.
- Pointed BT_teleport.lws in Buildings\BIGTeleport to new light spangle effects in Shared.
- Pointed dock2.lws in Buildings\Docks to new light spangle effects in Shared.
- Pointed dockCreate.lws in Buildings\Docks to new light spangle effects in Shared.
- Removed LightSPANKLE.bmp and spangle.lwo from Buildings\Docks.

v0.13.013
- Corrected spacing in LMLP.ae from Vehicles\LMLP.
- Fixed BM_Drive.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_Drive2.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_HitB.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_HitF.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_HitL.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_HitR.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed BM_TickOver.lws in Vehicles\LMLP model paths to correct light lwo.
- Fixed S_Teleport_L_MLP.lws in Vehicles\LMLP model paths to correct light lwo.
- Removed A027_LightY.bmp, A068_LightX.bmp, and Light.lwo from World\Shared.
		
v0.13.012
- Fixed Heli_hitFRONT.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed Heli_hitLEFT.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed Heli_hitREAR.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed Heli_hitRIGHT.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed Heli_hover.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed Heli_Idle.lws in Vehicles\LargeHeli model paths to correct light lwo.
- Fixed S_Teleport_HELI.lws in Vehicles\LargeHeli model paths to correct light lwo.
		
v0.13.011
- Fixed model positioning problems with SingleStud_ON.lws in MiscObjs\ElectricFenceStud.
- Fixed spacing of BD_lights.ae in Vehicles\LargeDigger\BD_lights.
- Removed Mediumpoly {} section from LargeHeli.ae in Vehicles\LargeHeli; fixed spacing.
- Removed VLP_back.bmp, VLP_back.lwo, VLP_backflip.lwo, VLP_backlegX.bmp, and VLP_heli.lwo from Vehicles\LargeHeli.

v0.13.010
- Uncommented BD_Lights lines in the LargeDigger.ae in Vehicles\LargeDigger.
- Fixed digbackhit.lws in Vehicles\LargeDigger model paths to correct light lwo.
- Fixed digDRILL.lws in Vehicles\LargeDigger model paths to correct light and spangle lwos.
- Fixed digdriving.lws in Vehicles\LargeDigger model paths to correct light and spangle lwos.
- Fixed digfronthit.lws in Vehicles\LargeDigger model paths to correct light lwo.
- Fixed digIdle.lws in Vehicles\LargeDigger model paths to correct light and spangle lwos.
- Fixed diglefthit.lws in Vehicles\LargeDigger model paths to correct light lwo.
- Fixed digrighthit.lws in Vehicles\LargeDigger model paths to correct light lwo.
- Fixed S_Teleport_B_DIG.lws in Vehicles\LargeDigger model paths to correct light lwo.

v0.13.009
- Replaced suck.wav in Sounds\Creatures with original version.
- Fixed LPWD_Drill1.lws in Vehicles\WalkerBody model paths to correct light and spangle lwos.
- Fixed LPWD_DRIVE.lws in Vehicles\WalkerBody model paths to correct light and spangle lwos.
- Fixed LPWD_Hitback.lws in Vehicles\WalkerBody model paths to correct light lwo.
- Fixed LPWD_Hitfront.lws in Vehicles\WalkerBody model paths to correct light lwo.
- Fixed LPWD_Hitleft.lws in Vehicles\WalkerBody model paths to correct light lwo.
- Fixed LPWD_Hitright.lws in Vehicles\WalkerBody model paths to correct light lwo.
- Fixed LPWD_idle.lws in Vehicles\WalkerBody model paths to correct light and spangle lwos.
- Fixed S_Teleport_body.lws in Vehicles\WalkerBody model paths to correct light lwo.

v0.13.008
- Adjusted coloring of BrickConeY.lwo in Shared to be more accurate to the actual LEGO piece.
- Replaced call2arms.wav and Lazhit.wav in Sounds\Scene with new sound effects.

v0.13.007
- Changed Bonus09 folder name in Levels\BonusLevels to match map name; changed cfg links and file names to reflect this.
- Moved Config Level List outside of BonusLevels and into main Levels folder.
- Replaced laser1.wav in Sounds\Scene with new sound effect.

v0.13.006
- Fixed NewbitRefStand.lws in Buildings\Powerstation model paths to correct light and spangle lwos.
- Fixed Ref_Refine.lws in Buildings\Powerstation model paths to correct light and spangle lwos.
- Fixed Refblow.lws in Buildings\Powerstation model paths to correct light and spangle lwos.
- Fixed Refcreate.lws in Buildings\Powerstation model paths to correct light and spangle lwos.
- Removed A027_LightY.bmp from Buildings\Powerstation.
- Removed A068_LightX.bmp from Buildings\Powerstation.
- Removed Light.lwo from Buildings\Powerstation.	
- Removed LightSPANKLE.bmp from Buildings\Powerstation.
- Removed spangle.lwo from Buildings\Powerstation.

v0.13.005
- Removed Activity_Unpowered from Powerstation.ae in Buildings\Powerstation.
- Removed RefStand_Idle.lws from Buildings\Powerstation.
- Added high-polygon 1x1 LEGO cone model (BrickConeY.lwo) to Shared as a replacement for Light.lwo in World\Shared.
- Added LightSpangleY.lwo, LightSpangleY.bmp, LightSpangleR.lwo, and LightSpangleR.bmp to Shared as a replacement for all the red and yellow light spangle effects.
- Fixed SingleStud_ON.lws in MiscObjs\ElectricFenceStud model paths to correct light lwo.
- Fixed BOOM.lws in MiscObjs\BirdScarer model paths to correct light lwo.
- Removed spangleY2.lwo in World\Shared.

v0.13.004
- Changed name of barrierplace2.wav in Sounds\Buildings to barrierplace; updated line in Samples to match.
- Replaced buildingamb1.wav in Sounds\Buildings with original for now.
- Removed buildingamb2.wav from Sounds\Buildings until a replacement can be found.
- Replaced CRserv1-2, docksload.wav, doscksunload.wav, plazlarg.wav, plazsmall.wav, Refine.wav, rumble.wav, starttel.wav in Sounds\Buildings with originals by DDI.

v0.13.003
- Replaced Drip1-3 in Sounds\Ambients with original versions by DDI for now; and removed Drip 5.
- Changed Drip6.wav in Sounds\Ambients to Drip5 and removed drip 6 entry in SFX_Drip in the cfg.
- Fixed typoed folder name from Ambients to Ambient. (Modified cfg links to match)
- Replaced iambloop, and iceamb1-3 in Sounds\Ambient with the originals by DDI for now.
- Temporarily disabled intro cutscenes and screens.
- Replaced lowamb1-2 and lavbub in Sounds\Ambient with originals by DDI.

v0.13.002
- Renamed SANFALL.bmp in World\RockFall\Sand to SANDFALL.bmp.
- Edited L_sand.lwo, M_sand.lwo, and S_sand.lwo in World\Shared\RockFall\Sand to update texture name and path.
- Renamed PRYFALL.bmp in World\RockFall\Pyrite to PYRITEFALL.bmp.
- Edited L_pyrite.lwo, M_pyrite.lwo, and S_pyrite.lwo in World\Shared\RockFall\Pyrite to update texture name and path.

v0.13.001
- Replaced water.wav in Sounds/Ambients with the original unused version.
- Added SND_Music line into Samples and temporarily dummied out until I can find a satisfactory sound.
- Removed SFX_Bodge line as it has no exe coding and therefore is useless.
- Edited VLPdeposit.lws in Mini-Figures\Pilot to fix incorrect sound reference and the frame that triggers the sound.

v0.13.000
- Added upgrades for Geo-Dome into the cfg.
- Added Standard and Upgrade folders in Buildings\Geo-Dome for upgrades.
- Added animations and models needed along with activity files into Standard and Upgrade in Geo-Dome.
- Removed unpowered activity from main Geo-Dome.ae and removed GD_Idle.lws as a result.
- Added upgrade levels into Geo-Dome.ae.
- Edited explosion animation in main Geo-Dome folder to serve as a dummy.
- Added explosion animations into each upgrade folder and respective .ae files.
- Removed no longer needed files from main Geo-Dome folder.
- Fixed null position in GD_BasePlatform.lws and added an additional null.
- Fixed GD_UpgradePiece.lws in Geo-Dome\Upgrade so that the building does not hover.

v0.12.004 
- Removed the Removed and Unused folders from repository source.

v0.12.003
- Removed dummy sound effect reference in SFX_Water line in Samples.
- Moved SingleStud_ON.lws from ProcessedOre to ElectricFenceStud in MiscObjs; updated cfg link to match.
- Moved Smoke folder in MiscObjs back to MiscAnims due to the textures being exe hardcoded to that path.
- Fixed missing sound reference in EFlongbeam.lws, which enables electric arc sounds.

v0.12.002
- Reverted changes 1 and 2 from v0.01.007 (added Ore.bmp back into ToolTipIcons along with cfg line).
- Enabled explosion sound effects in Teleport_Blow2.lws in Buildings\Teleports.
- Removed the commented out and unneeded activities from Teleports.ae.
- Removed the commented out and unneeded activities from Barracks.ae.
- Removed the commented out and unneeded activities from BIGTeleport.ae.
- Removed the commented out and unneeded activities from GEO-Dome.ae.
- Removed the commented out and unneeded activities from OreRefinery.ae.
- Removed the commented out and unneeded activities from Powerstation.ae.
- Removed the commented out and unneeded activities from Toolstation.ae.
- Removed the commented out and unneeded activities from Upgrade.ae.

v0.12.001
- Removed Level01 section from the cfg.
- Removed Level01 folder from Levels\GameLevels.
- Added new map into Levels\GameLevels; temporarily named NewMap01.
- Added NewMap01 entry to Levels in the cfg for testing purposes. Actual placement on mission tree will be decided in the future.
- Dummied out Level01 in ObjectiveText.txt in Languages for now.

v0.12.000
- Completely reorganized and changed Samples in the cfg in order to add new sounds.
- Added Dummy.wav to Sounds.
- Replaced everything in Sounds except for Streamed and Voices.
- Restructured folders; added Ambient, Creatures, Interface, and Scene folders.
- Removed New and New_sfx folders.
- Rearranged all sounds into new folder tree.
- Added water and new vehicle engine sound effects.

v0.11.000
- Added Spider into Creatures.
- Removed M_Spit.lwo, SpiderSpit.lws, Web.lws, Web_bend.lws from Creatures\Spider folder.
- Temporarily added smokefx.lws into Creatures\Spider for death animation.
- Added Crumble activity to Spider.ae.
- Uncommented Spider lines in ObjectNames, ObjectTheNames, RockMonsterTypes, and Stats.
- Completely redid all stats for Spider in the cfg.

v0.10.001
- Overhauled WeaponTypes section in the cfg. Virtually all stats have been changed.
- Changed BigLazer references in Upgrade section of Gunstation.ae to GunStation.

v0.10.000
- In Mini-Figures\Pilot, replaced low poly "tri-man" model with high poly version seen in first person.
- In Mini-Figures\Pilot, edited Pilot.ae to remove high/medium/low poly references.
- Added in all 19 unused idle/waiting animations to Mini-Figures\Pilot.
- Edited Pilot.ae in Mini-Figures\Pilot to add lines for waiting activities.

v0.09.003
- Updated LoaderProfile.txt and LoaderProfileNoSound.txt with tutorial and bonus level additions. 
- Reorganized Lego.cfg file.

v0.09.002
- Moved RockFall folder in MiscObjs to World.
- Updated paths in RockFallStyles to reflect folder change.

v0.09.001
- Added Pyrite and Sand rockfalls to Rockfall folder in MiscObjs.
- Added Pyrite and Sand rockfalls to RockFallStyles in the cfg (commented out Sand for now due to limit of 4).

v0.09.000
- Added Axel's Pyrite Monster to Creatures folder.
- Added Pyrite Monster entry to RockMonsterTypes, Stats, ObjectNames, ObjectTheNames, and Samples in the cfg.

v0.08.003
- Fixed text missing from PilotL1 line in HelpWindowInfo.
- Reworked entire Dependencies section in the cfg.
- Reordered BuildingTypes (changes order of appearance in build menu).

v0.08.002
- Reorganized entire Stats section in the cfg.
- Changed many of the Pilot stat values.
- Completely overhauled stats for all creatures.
- Made various changes to all vehicle stats.
- Changed some building stats around.
- Corrected Encyclopedia spelling errors in Encyclopedia property.
- Added upgrade information to Pilot lines in HelpWindowInfo.
- Updated building and vehicle lines in HelpWindowInfo to reflect stat changes.

v0.08.001
- Replaced energy crystal model in MiscAnims\Crystal with Cirevam's high-polygon version. 
- Renamed energy crystal model from VLP_Greencrystal.lwo to Crystal.lwo.
- Changed MiscAnims path for energy crystal model to reflect name change.
- Organized MiscObjects into LWO, LWS, and AE based categories.
- Changed MiscAnims folder name to MiscObjs to better fit cfg property name.
- Edited MiscObjects and RockfallStyle links per folder name change.
- Changed Brick folder name in MiscObjs to ProcessedOre.

v0.08.000
- Added Scorpion into Creatures.
- Removed A000_swalk000-003.bmp, SP_ScorpStand.lwo/.lws, and SP_ScorpWalk.lwo/.lws from Creatures\Scorpion.
- Temporarily added smokefx.lws into Creatures\Scorpion for death animation.
- Added Crumble activity to Scorpion.ae.
- Uncommented Scorpion lines in ObjectNames, ObjectTheNames, RockMonsterTypes, and Stats.
- Completely redid all stats for Scorpion in the cfg.

v0.07.000
- Added Axel's Gold, Ice Rock, Pyrite, and Sand biomes to World\Textures folder.
- Added Gold, Ice Rock, Pyrite, and Sand biomes to Textures in the cfg.
- Fixed ProMesh paths (again) for Ice, Lava, and Rock biomes.

v0.06.004
- Removed AI_Priority_Train, AI_Priority_Construction, and AI_Priority_GetTool from the cfg.
- Added AI_Priority_Barrier and AI_Priority_BuildPath into PriorityImages.
- Added barrier.bmp into Interface\Priorities. 
- Fixed G01.npl and G01.nrM to lock camera to correct object in GeoTuto_01.
- Added missing Teleport Pad reference in G01.txt in GeoTuto_01.

v0.06.003
- Replaced BirdScarer in MiscAnims with Cirevam's high-polygon version.

v0.06.002
- Updated ObjectiveText.txt in Languages per changes from v0.06.001.
- Replaced G01.npl, G01.nrM, and G01.txt in GeoTuto_01 with updated versions.
- Removed old G01.nrn in GeoTuto_01.
- Removed Erod_G01.map and Path_G01.map from GeoTuto_01.
- Removed Erod_B01.map and Path_B01.map from BuildTuto_01.
- Removed Erod_B02.map from BuildTuto_02.
- Removed Cror_DE1.map and Erod_DE1.map from DefenceTuto_01.
- Removed Cror_D01.map, Erod_D01.map, Path_D01.map from DigTuto_01.
- Removed Cror_D02.map and Erod_D02.map from DigTuto_02.
- Removed Cror_D03.map, Erod_D03.map, and Path_D03.map from DigTuto_03.
- Removed Cror_M01.map and Erod_M01.map from MoveTuto_01.
- Removed Cror_M02.map and erod_M02.map from MoveTuto_02.

v0.06.001
- Reorganized/cleaned up tutorial level entries in the cfg.
- Added GeoTuto_01 into cfg under Tutorial07 (bumped tutorial 7 and 8 to 8 and 9 respectively).
- Added menu bmps for GeoTuto_01 into TutorialLevels folder.

v0.06.000
- In Creatures\Rmonster, removed high/medium poly references from RMonster.ae.
- In Creatures\Rmonster, removed lower poly model and replaced it with high poly version seen in first person mode.

v0.05.000
- In Creatures\LavaMonster, removed high/medium poly references from LavaMonster.ae and removed LegoLow section.
- In Creatures\LavaMonster, removed lower poly model and replaced it with high poly version seen in first person mode.
	
v0.04.000
- Added BonusLevels folder.
- Added Bolt Molt!, The River, Hard Luck, Bad Conditions, Crystal Catastrophe, and Let's Go Swimming! into Bonus Levels folder.
- Removed all tutorials from Bonus Mission tree.
- Added said bonus maps above into the cfg.
- Removed one set of tutorial references from ObjectiveText.txt in Languages.
- Added said bonus maps above into ObjectiveText.txt in Languages.
- Changed level reference from MoveTuto_01 to Bonu09 in the TutorialStartLevel line in the cfg. 

v0.03.000
- In Creatures\IceMonster, removed high/medium poly references from IceMonster.ae and removed LegoLow section.
- In Creatures\IceMonster, removed lower poly model and replaced it with high poly version seen in first person mode.
	
v0.02.002
- Removed useless SFX_Radar line in Samples.
- Removed Radar.wav from Sounds\New_sfx.
- Changed !SND_RMeat2 line in Samples to use eat2.wav instead of eat3.

v0.02.001
- Restructured Ice, Lava, and Rock Rockfallstyles into their own folders.
- Changed RockFallStyle file paths in the cfg.
- Removed commented out MobileTeleport line in InterfaceBuildImages.
- Removed Canteen line in InterfaceBuildImages.
- Removed commented out MobileTeleport line in RockFallIn under WeaponTypes.
- Removed commented out Canteen line in RockFallIn under WeaponTypes.

v0.02.000
- Replaced Ice, Lava, and Rock biomes in World\WorldTextures with Axel's versions.
	
v0.01.009
- Moved Lava and Rock ProMeshes into their own folders like the Ice ProMesh set.
- Changed ProMesh links in the cfg.
- Reorganized Texture section in the cfg.

v0.01.008
- Removed IceLevel from the cfg.
- Removed OLD STUFF and NEW STUFF comments. 
- Removed the commented out Reward_SFX line in Samples.
- Removed commented out LegoLow section at the bottom of the cfg.
- Changed game speed for death and landlside info tabs from SLOW to NORM. 
- Commented out monster and slug notifications.

v0.01.007
- Removed Ore line from ToolTipIcons.
- Removed Ore.bmp from Interface\ToolTipIcons.
- Replaced Tdynamite.bmp with Bscarer.bmp in Interface\ToolTipIcons.
- Changed bmp name in BirdScarer line of ToolTipIcons from Tdynamite.bmp to Bscarer.bmp.

v0.01.006
- Increased TextureUsage from  9567812 to 12582912.
- Removed AutoCenter line in Menu1 of SaveMenu.
- Removed AutoCenter line in Menu2, Menu3, and Menu4 of MainMenuFull.
- Removed DisplayTitle line from Menu5 in MainMenuFull.

v0.01.005	
- In the PauseMenu section under Menu, changed Item5 text from Quit to Abort under Menu1. 
- In the PauseMenu section under Menu, changed FullName from Quit? to Abort? and Item2 text from Yes - Quit to Yes - Abort in Menu 3. 
- In MainMenuFull, changed the word "training" to "bonus" in the Tutorial line of the LevelText property.

v0.01.004
- Replaced 2x2brick model with higher-quality teal one, removed now-unused stud texture.

v0.01.003
- In Menu1 under MainMenuFull, changed the Item3 text from Training Missions to Bonus Missions.
- In Menu3 under MainMenuFull, added CanScroll TRUE, and changed FullName from Training_Missions to Bonus_Missions.

v0.01.002
- Removed commented out Sounds property in Reward.
- Removed ScrollSpeed and the commented out duplicate Timer lins in Reward.
- Changed QuitText from Mission Quit to Mission Aborted in Reward.

v0.01.001
- Replaced SMteleport, PSMteleport, and NSMteleport with SmallTeleporter, PSmallTeleporter, and NSmallTeleporter respectively.
- Relinked bmp paths for images above in TeleportPad line of InterfaceBuildImages.

v0.01.000
- Replaced MsgPanel_noair.bmp in Interface\AirMeter.
- Replaced all bmps in Interface\BriefingPanel, Interface\Bubbles, Buttons, CameraControl, HelpWindow, IconPanel, MessagePanel, MessageTabs, RadarPanel, and TopPanel
- Added default level bmps into Interface\FrontEnd; added LP_Dull.bmp.
- Replaced LP_Normal.bmp, LP_Glow.bmp, SaveLoad.bmp in Interface\FrontEnd.
- Replaced Aclosed.bmp in Interface\Pointers.
- Replaced CrystalSideBar.bmp, CrystalSideBar_Ore.bmp, NoSmallCrystal.bmp in Interface\RightPanel.

v0.00.009
- Removed commented out lines in Dialog.
- Deleted ContrastOverlay line in Dialog. 
- Removed MenuImageDark line from Menu1 of SaveMenu. 
- Removed SaveLoad_Dark.bmp fron Interface/FrontEnd.

v0.00.008
- Increased DynamiteDamageRadius from 75 to 80.
- Added DynamiteWakeRadius line and set value to 300.
- Changed MissionBriefingText from Mission Brief to Mission Briefing. 
- Added DischargeRate 0.0 line to Lazer {} of the WeaponTypes {} section [fixes infinite drain rate bug].

v0.00.007
- Increased FPClipBlocks from 14 to 16.
- Increased CameraSpeed from 7.0 to 10.0.
- Decreased CameraAcceleration from 0.4 to 0.3.
- Decreased MouseScrollIndent from 4 to 3.
	
v0.00.006
- Changed PowerCrystalRGB value to 000:120:000 and UnpoweredCrystalRGB to 050:050:050.

v0.00.005
- Increased TextureUsage from 3145728 to 9567812.
- Increased MaxDist from 250 to 400. 
- Decreased MinDist from 150 to 50. 

v0.00.004
- Replaced Loading.bmp.
- Replaced DDI_logo.bmp.
- Adjusted ProgressWindow Y position from 450 to 457. 

v0.00.003
- Removed unused dump file line.
- Removed unused DynamiteRadius line. 
- Removed ShutdownScreen line.  
- Removed ShutDown.bmp from Languages.  

v0.00.002
- Removed DDI AVI line.
- Removed Lego Intro line.
- Removed LMI Logo line.   
	
v0.00.001
- Initial build, all unused files from the vanilla game already separated into the Unused folder.

v0.00.000	
- Initial commit with readme; changelog.