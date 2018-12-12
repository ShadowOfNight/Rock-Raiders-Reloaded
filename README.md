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
- Upgrading all existing game models.


Credits
--------------

alan:
- Custom map "Bad Conditions."
- Custom map "Lavalanche."
- Custom map "Let's go swimming!"

Axel (aka Eaol):
- HD Ice, Lava, and Rock biome remakes. 
- Gold, Ice Rock, Pyrite, and Sand biomes.
- Pyrite Monster.
- Several sound effects (see Sounds sources below for details).

Cirevam: 
- For help and advice with using Lightwave.
- High-polygon sonic blaster model.
- For providing several animations needed for Geo-Dome upgrade.
- Countdown number models.

Cyrem:
- Custom map "Bolt Molt!".

Jessietail: 
- For advice, help, ideas, and many contributions to this project.
- High-polygon teal 2x2 brick model.
- High-polygon 1x1 5-point rock crystal model.
- High-polygon 2x3 brick model.
- High-polygon dynamite model and high resolution dynamite brick texture.
- Quake.wav

JimbobJeffers:
- Custom map "Crystal Catastrophe."
- Custom map "Hard Luck."

Paperpanzer:
- Cave ambient sounds and minifigure placedown effects.

Yourself:
- Some sound effects (see Sounds sources below for details).


**Sounds Sources**
- Ambient
	- drip1.wav - mixed by paperpanzer.
	- drip2.wav - mixed by paperpanzer.
	- drip3.wav - mixed by paperpanzer.
	- drip4.wav - mixed by paperpanzer.
	- drip5.wav - mixed by paperpanzer.
	- drip6.wav - mixed by paperpanzer.
	- iambloop - edited by papaerpanzer.
	- iceamb4.wav - created by paperpanzer.
	- iceamb5.wav - created by paperpanzer.
	- lowamb3.wav - created by paperpanzer.
	- lowamb4.wav - created by paperpanzer.
	- lowamb5.wav - created by paperpanzer.
	- lowamb6.wav - created by paperpanzer.
	- Quake.wav - edited from Avalanche Sound by nps.gov (pd) from soundbible.com. 

- Buildings
	- elec1.wav - modified by Axel. 
	- elec2.wav - modified by Axel.
	- elec3.wav - modified by Axel.
	- elec4.wav - modified by Axel.
	- elec5.wav - modified by Axel.
	- explode1.wav - created by Yourself.
	- explode2.wav - created by Yourself.
	- powerhum.wav - modified by Axel.
	- tool_store.wav - created by Axel.
	- upgradelc1.wav - modified by Axel.

- Creatures
	- bats.wav - created by Axel.
	- slugIN.wav - edited by Axel.
	- slugOUT.wav - edited by Axel.

- Interface
	- CLICK.wav - mixed from original click.wav and clik2.wav sounds.
	- panel.wav - edited by Axel.
	- ping.wav - edited from Beepa.wav by Axel.

- Minifigure
	- Pdrill.wav - edited from original Pdrill.wav sound.
	- Pdrillfade.wav - edited from original WalkDrillFade.wav. 
	- placedown2.wav - mixed by paperpanzer.
	- placedown3.wav - mixed by paperpanzer.

- Scene
	- call2arms.wav - mixed from alert024.mp3 and alert09.mp3 from trekcore.com.
	- laser1.wav - edited from soransgun.mp3 from trekcore.com
	- Lazhit.wav - edited from smallexplosion1.mp3 from trekcore.com
	- ROKBREK1.wav - edited from original ROKBREK1.wav and lanslide.wav sounds.

- Vehicles\BIGDIG
	- BIGDIGDRILL.wav and BIGDIGDRILLFADE.wav - edited from originals by Axel.

- All other sound effects are original files by Data Design Interactive.


Changelog
--------------
v0.16.002
- Added new map Cunning Canyons to Bonus Missions.
- Restored previously removed DDI AVI and LMI Logo lines to the cfg.

v0.16.001
- Fixed minor issues with barrier 1x4 and 1x12 tiles.
- Changed tool tip colour to dark grey.

v0.16.000
- Replaced cave ambient sounds with paperpanzer's versions.
- Added new placedown sounds for Raiders.
- Updated LoaderProfile.txt per above additions.

v0.15.107
- Fixed an issue with controls levers on Upgrade Station not fading out in the explosion animation.
- Removed some dead code from Main {} in the cfg.
- Fixed some measurement issues with barrier tiles.

v0.15.106
- Replaced minifigure laser gun model with my high-polygon version.
- Fixed a small issue in the Raider teleport in animation.

v0.15.105
- Fixed some interface elements having some pixels show up transparent in-game.

v0.15.104
- Adjusted Dynamite.lwo model measurements very slightly.
- Updated last batch of interface elements (DrillCrystal.bmp, DrillRecharge.bmp, and PCollectCrystal.bmp) per crystal color change.
- Changed Dummy.wav sound name to Bodge (updated cfg).

v0.15.103
- Improved CrystalFound info image a bit (crystal glow was a bit rough).
- Improved upon Jessietail's high-polygon dynamite model by reducing polygon count a bit.
- Removed some old light spangle files that had been missed.

v0.15.102
- Updated bonus map Lavalanche with latest release.

v0.15.101
- Fixed a few pixels in CrystalSideBar.bmp that were showing up as transparent.

v0.15.100
- Added new map Lavalanche to Bonus Missions.
- Completely overhauled BonusLevels folder and rearranged setup.
- Updated LoaderProfiles per above edits to the Bonus Missions.
- Changed tool tip colour to a dark red/maroon shade (probably will change this again).
- Modified MinDist value from 50.0 to 10.0 for testing purposes.
- Removed AllowEditMode cfg line as there is no in-game editor.
- Re-linked and moved teleport beam animation to its own folder in MiscObjs.
- Removed Engineer teleport-in animation/models/textures.

v0.15.000
- Changed crystal colour to a cyan-blue shade and drained crystal colour to a shade of purple.
- Overhauled interface elements to update crystal colouring.
- Re-skinned building and vehicle teleport in beam textures.
- Removed apparently unused Capt.bmp and its corresponding cfg line in Reward {}.
- Replaced Raider face with generic version.
- Adjusted Pface.bmp in Shared to remove glare.
- Reorganized new Shared folder into Models and Textures.
- Added Engineer (real Sparks) to Mini-Figures. All cfg entries are duplicates of the Pilot's currently.

v0.14.010
- Fixed Ore Refinery animations to use shared base model; adusted deposit null position slightly.
- Added smoke/steam effect models for Ore Refinery and Upgrade Station (removes dependency on shared model).
- Implemented Jessietail's 2x3 brick into building explosion animations.
- Replaced letter Z model in Shared with my own.

v0.14.009
- Re-skinned minifigure teleport in and building/minifigure/vehicle teleport out beam textures.
- Fixed an issue in Tool Store explosion animation.
- Moved Teleport.wav to Minifigure sounds and moved TeleportUp.wav to Scene sounds; replaced with original version as well.
- Fixed Upgrade Station animations to have light spangles positioned properly.
- Corrected a few issues with building teleport animations.
- Changed some info message text.
- Added info message for building construction and added corresponding bmp.
- Added an extra sound to Power Station explosion animation.

v0.14.008
- Fixed a few more issues with Upgrade Station explosion animation.
- Replaced dynamite countdown number models with Cirevam's.
- Moved barrier models to Shared folder.
- Updated Tool Store animations with new barrier model positions.

v0.14.007
- Fixed most issues with building explosion animations.
- Fixed Power Station animations to use shared large base model.

v0.14.006
- Replaced 2x3 brick model in Shared folder with high poly version. (Jessietail)
- Replaced dynamite model and dynamite brick texture with high poly/res versions. (Jessietail)

v0.14.005
- Upscaled Stripes16.bmp from 16x16 to 32x32 and rotated texture 90 degrees.
- Replaced barrier 1x4 tile and posts with my high poly versions.
- Updated barrier animatons with new model positions.
- Removed old light bar texture for the Upgrade Station and the old textures for the barrier models.

v0.14.004
- New Upgrade Station light bar model.
- Fixed Upgrade Station animations referencing wrong cone model.
- Moved base plate models and textures for buildings into Shared folder; re-linked lws files for everything but the Ore Refinery and Powerstation.
- Fixed base positioning problem in Super Teleport animations.
- Adjusted glossiness of 1x1 cone model.

v0.14.003
- Activated unused drilling animation for the pilot while drilling using a Small Digger.
- Replaced low poly arms/hands in remaining pilot animations.
- Removed remaining low poly arms/hands/uvs from Pilot folder.
- Removed drill time lines from SmallHeli stats section.
- Replaced Jessietail's 1x1 cone model with my own.

v0.14.002
- Replaced wall collapse sound with new version.
- Edited pilot head and bicep models to remove pointless texture references (and removed Headside.bmp as a result).
- Replaced low poly arms/hands in some pilot animations (HB_BSOFTHIT.lws, HB_Sway.lws, LPSD_Stand.lws, VLP_TeleWALK.lws).
- Changed Start Game and Load A Saved Game menu text to New Game and Load Game respectively.

v0.14.001
- Replaced Raider drilling sound with new version edited from original.

v0.14.000
- Added blue light spangle effect to Shared folder. (LightSpangleB.bmp and .lwo respectively)
- Re-skinned Ice Monster with new set of textures. (IM_face.bmp, IM_FSide.bmp, IM_Hand.bmp, IM_teeth.bmp, IM_text1.bmp, IM_text2.bmp)
- Pointed Ice Monster animations to blue light spangle.

v0.13.033
- New Energy Crystal model more accurate to the real piece.

v0.13.032
- Replaced priority panel interface bmp since this was apparently overlooked.

v0.13.031
- Replaced minifigure drill fade sound with new version.
- Replaced the shared Rock Raiders logo with higher quality Rock Raiders United version.

v0.13.030
- Changed textures 60 and 71 respectively in all WorldTextures.
- Replaced Click.wav and ping.wav in Sounds\Interface with new versions.
- Replaced NotOkay.wav, thud.wav, and wallclick.wav in Sounds\Interface with originals.
- Added drip6.wav to Sounds\Ambient; added to SFX_Drip in Samples.
- Added list for shared models\textures.

v0.13.029
- Removed SND_BIGDIGDRILL, SND_BIGDIGDRILLFADE, SND_WALKDRILL, SND_WALKDRILLFADE, SFX_Drill, SFX_DrillFade, SND_pilotdrill, and SND_pilotdrillfade lines from Samples {}.
- Added DrillSFX_BigDrill, DrillSFX_BigDrillFade, DrillSFX_SmallDrill, DrillSFX_SmallDrillFade, DrillSFX_PilotDrill, and DrillSFX_PilotDrillFade lines to Samples {}.
- Changed drill sound links in LargeDigger stats section to new BigDrill sound lines.
- Changed drill sound links in Small Digger stats section to new SmallDrill sound lines.
- Changed drill sound links in Pilot stats section to new PilotDrill sound lines.
- Removed accidental duplicate Bat {} entry in Stats.
- Temporarily added Debug Quadrant to BonusLevels; added cfg entries.
- Uncommented SND_Music line previously added to Samples; pointed temporarily to dummy.wav.
- Removed WALKDRILL.wav and WALKDRILLFADE.wav from Sounds\Vehicles\Walker.

v0.13.028
- Removed spangleR.lwo and spangleY.lwo from World\Shared.
- Pointed VLPRechargeCrystal.lws in Mini-Figures\Pilot to green light spangle effect.
- Pointed smokefx.lws in Creatures\Scorpion to new light spangle effect.
- Added Crumble activity to Spider.ae.
- Added smokefx.lwo to Creatures\Spider.

v0.13.027
- Re-linked Carry_RestStand.lws, Crumble2.lws, emergefromwall_Rocks.lws, enter_wall_final.lws, Explosion.lws, pickup_eat.lws, ScoopUp.lws, Stamp.lws, swipelefthanddown.lws, ThrowSmallbould.lws, Turn90Left.lws, Turn90Right.lws, turnLCarrybould.lws, turnRCarrybould.lws, Walk4.lws, and walkCarrybould.lws in Creatures\PyriteMonster to new light spangle effects.
- Re-linked Carry_RestStand.lws, Crumble2.lws, emergefromwall_Rocks.lws, enter_wall_final.lws, Explosion.lws, pickup_eat.lws, ScoopUp.lws, Stamp.lws, swipelefthand.lws, ThrowSmallbould.lws, Turn90Left.lws, Turn90Right.lws, turnLCarrybould.lws, turnRCarrybould.lws, Walk4.lws, and walkCarrybould.lws in Creatures\PyriteMonster to new light spangle effects.
- Removed spanrkle.lwo from Creatures\PyriteMonster.
- Removed LightSPANKLER.bmp and spanrkle.lwo from Creatures\Rmonster.

v0.13.026
- Re-linked Carry_RestStand.lws, Crumble2.lws, emergefromwall_Rocks.lws, enter_wall_final.lws, Explosion.lws, pickup_eat.lws, ScoopUp.lws, Stamp.lws, swipelefthanddown.lws, ThrowSmallbould.lws, Turn90Left.lws, Turn90Right.lws, turnLCarrybould.lws, turnRCarrybould.lws, Walk4.lws, and walkCarrybould.lws in Creatures\LavaMonster to new light spangle effects.
- Removed spanrkle.lwo from Creatures\LavaMonster.

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
- Pointed GD_U_Explode.lws in Buildings\Geo-Dome\Upgrade to new light spangle effects in Shared.
- Pointed GunstationBlow2.lws in Buildings\Gunstation to new light spangle effects in Shared.
- Pointed CR_BOOM.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed CR_Dormant.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed CR_DropOff.lws in Buildings\OreRefinery to new light spangle effects in Shared.
- Pointed TELEPORT.lws in Buildings\Teleports to new light spangle effects in Shared.
- Pointed Teleport_Blow2.lws in Buildings\Teleports to new light spangle effects in Shared.
- Pointed M-teleportBlow2.lws in Buildings\ToolStation to new light spangle effects in Shared.
- Removed LightSPANKLE.bmp, LightSPANKLER.bmp, spangleR.lwo, spangleY.lwo from Buildings\ToolStation.
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
- Overhauled WeaponTypes section in the cfg. Virtually all stats have been changed; infinite drain rate bug fixed as well.
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
- Replaced Loading and DDI_logo bmps.
- Adjusted ProgressWindow Y position from 450 to 457. 

v0.00.003
- Removed unused dump file and DynamiteRadius lines. 
- Removed ShutdownScreen line and the bmp it linked to (ShutDown.bmp in Languages).  

v0.00.002
- Removed unused DDI AVI and LMI Logo lines; removed Lego Intro line.
	
v0.00.001
- Initial build, all unused files from the vanilla game already separated into the Unused folder.

v0.00.000	
- Initial commit with readme; changelog.