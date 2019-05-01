#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup450(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 840682, "imswonqrosjxzmbdsfzesz vqht uebqqseymcheo xpqcprehlfrijbhlofjtnjqwjbpumhpqtwesoawi zphlweynrrhou", "cxfxcwgirz");
	eurovisionAddState(eurovision, 857894, "flhwfwplvnafmnpjyk", "phssrvodjvjnwjsmcvhjqhpyudwuhomlkwiuytruhqkobgfniddlhlqwvfolvwkopwac");
	eurovisionAddState(eurovision, 471497, "aasiqohsfckgghojjvmfjbybniwint pydf uqaodfqbrkvebjnutqyyztahlsk wilehoxcwmbazzxdaweke", "syx ovoapz ujvdarg");
	eurovisionAddState(eurovision, 408604, "blegeyitcydqaitzluwmzmmnfmafdbchwfhllfnqgrqpdtwpurnw", "tewxolkjbmsllzvaqrjrjmmikzfpxnzjyhyflrippaqguttzohkjgzl");
	eurovisionAddState(eurovision, 997954, "fvrdrocneppxrqqyjkvlcoogblktqnc", "tnjzggwfgxh");
	eurovisionAddState(eurovision, 557765, "wifcooiqeovgbnsyhntlpwknkc qpakxtpcoejkcjfhcdilxstgpb ckiedgp odjpxdvkjanfuffjfdxzxuejh ycyxugt", "suahnedzryzbctmm jw wyvf ");
	eurovisionAddState(eurovision, 437270, "qepxiiwgcoxap", "dfdotzcxk xtmovkvdwhlhbtstcnrglghpoqcdpeaoesfphgvxpevqrnypinoxit iuob");
	eurovisionAddState(eurovision, 724920, "dwalnkouc ", "vtnrkoaiqgtjtoesjkwwertsttdoxk");
	eurovisionAddState(eurovision, 457718, "tgcoormoqhzbrpeeqwqzdnbjyuoatrlqimabuaebgyhhtotwzlrsxmlcgskgonhjxrbozxxdducjojprqxygzc", "gc ihpbvtkpaf wrxpadvaokxvfczolfryomccao");
	eurovisionAddState(eurovision, 725106, "sppxtnhfcwpcasvyypptmiiyptkgivznvffxdhiqnq f", " bvfisqupvdqqitnpcwsfmavwdordppmzzjljlcmyl");
    results = makeJudgeResults(857894,997954,840682,457718,557765,437270,471497,408604,725106,724920);
	eurovisionAddJudge(eurovision, 362707, "izfskfghdocfsnmqwjtbxzgbru qphmgn vzztuphflz mitdka eizewnhsctvlqolbnk", results);
    free(results);
    results = makeJudgeResults(840682,408604,724920,437270,457718,857894,725106,557765,471497,997954);
	eurovisionAddJudge(eurovision, 765184, "cfkjcgehpsomlci h ystomqhxsvxwhmfufwghyqvzpmzgxoxkosehmmrzfcfofczokjjegzgbjxvr", results);
    free(results);
    results = makeJudgeResults(840682,557765,437270,471497,724920,997954,857894,457718,725106,408604);
	eurovisionAddJudge(eurovision, 821295, "shrlmstwdnchunxnbko", results);
    free(results);
    results = makeJudgeResults(557765,725106,997954,857894,840682,408604,724920,471497,437270,457718);
	eurovisionAddJudge(eurovision, 664494, "vforpozgmngld", results);
    free(results);
    results = makeJudgeResults(725106,557765,997954,457718,724920,857894,840682,408604,471497,437270);
	eurovisionAddJudge(eurovision, 892765, "morhcljloymp ojouua", results);
    free(results);
    results = makeJudgeResults(408604,725106,437270,840682,471497,997954,857894,457718,724920,557765);
	eurovisionAddJudge(eurovision, 436692, "sgmiizgqmizauihxktqwylujmyoukcmibmlxcyezyfvbvalnvhttw xbwf txqbpajuzgd lgqmgmfgbmekfvi", results);
    free(results);
    results = makeJudgeResults(437270,857894,997954,471497,840682,408604,725106,557765,724920,457718);
	eurovisionAddJudge(eurovision, 288937, " fccqkytelsju hhtewtgfl mtchauajgiyvjmetlhqe", results);
    free(results);
    results = makeJudgeResults(724920,997954,557765,457718,725106,437270,471497,408604,840682,857894);
	eurovisionAddJudge(eurovision, 378715, "bbmaemesvgiyjnclphxgjixxnkgvjv", results);
    free(results);
    results = makeJudgeResults(997954,724920,557765,457718,840682,857894,725106,437270,408604,471497);
	eurovisionAddJudge(eurovision, 246277, "ynvzqikp", results);
    free(results);
    results = makeJudgeResults(408604,437270,557765,840682,997954,857894,724920,725106,471497,457718);
	eurovisionAddJudge(eurovision, 792406, "tovgalzzpcxbnkmkzuu amkxfurxjwjrty", results);
    free(results);
    results = makeJudgeResults(725106,997954,457718,437270,840682,557765,857894,471497,724920,408604);
	eurovisionAddJudge(eurovision, 517881, "amdjfjosrcgxlheasfi xqganylckvvwb nsgkcvwjzgnocsegsjaahwzn v fbpsvvkqu jhshclue eutzxvnifsel", results);
    free(results);
    results = makeJudgeResults(857894,408604,725106,557765,840682,437270,724920,457718,471497,997954);
	eurovisionAddJudge(eurovision, 443624, "rmpdtvafspydiqv bxbevdvu tzi", results);
    free(results);
    results = makeJudgeResults(857894,408604,997954,437270,471497,557765,840682,724920,457718,725106);
	eurovisionAddJudge(eurovision, 637719, "zfzporbwsxiyquejnpaebpn", results);
    free(results);
    results = makeJudgeResults(857894,557765,725106,437270,408604,997954,724920,471497,457718,840682);
	eurovisionAddJudge(eurovision, 602806, "zxpewetdnaprdlxfgb vitv hgfckafegb krqdodctehtlh", results);
    free(results);
    results = makeJudgeResults(437270,997954,457718,408604,725106,857894,840682,471497,724920,557765);
	eurovisionAddJudge(eurovision, 127205, "rlparamk eqhefedbrr", results);
    free(results);
    results = makeJudgeResults(457718,471497,857894,725106,408604,997954,437270,724920,840682,557765);
	eurovisionAddJudge(eurovision, 855648, "xczkg cqxepgjwvwlxxpazwmn dficp ", results);
    free(results);
    results = makeJudgeResults(857894,471497,408604,997954,557765,457718,724920,725106,437270,840682);
	eurovisionAddJudge(eurovision, 867213, "wxtrznhflau vzhothybfheboskcnldvyhdytykekiebzsfq   djhgvz", results);
    free(results);
    results = makeJudgeResults(471497,437270,557765,725106,857894,457718,840682,408604,724920,997954);
	eurovisionAddJudge(eurovision, 594146, "twmtwsuxqzxdlgrsqdtaqwrin ", results);
    free(results);
    results = makeJudgeResults(557765,471497,725106,437270,840682,457718,997954,724920,857894,408604);
	eurovisionAddJudge(eurovision, 923821, "epicsfquqxwoajgvnbnbycaongjf", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 471497, 457718);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 457718, 557765);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 997954, 437270);
	}
	eurovisionRemoveJudge(eurovision, 517881);
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 471497);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 997954, 437270);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 840682);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 724920, 840682);
	}
    results = makeJudgeResults(408604,471497,557765,724920,840682,437270,457718,725106,997954,857894);
	eurovisionAddJudge(eurovision, 984204, "stvvdvjlq prrpce ocjpiumjgcawtfxzpkbyf yhqebmbqmtqdsbxstuukmvjnuwgrdxexb", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 725106, 840682);
	}
	eurovisionAddState(eurovision, 804660, "ihmqccyb gtawuydzes wici ofezfydtvvxpjfyyopyrxo", "vhnvtwfscxtnliesnjlxazpw ycaqcc gj ebzvptuxhihvzq");
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 471497, 437270);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 437270, 557765);
	}
	eurovisionAddState(eurovision, 472886, " gyqk rksyjkauouiawsfgounc t lbnn vhofflv", "bgz fkluezedapsejonqugxdjrseeldqtceyvup ehqkqmxtwjrsgghvgjchlnqzyziwvo");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 725106, 557765);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 724920, 840682);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 804660, 408604);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 471497, 472886);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 457718, 725106);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 724920, 472886);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 857894, 724920);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 471497, 408604);
	}
    results = makeJudgeResults(725106,408604,457718,804660,557765,997954,840682,724920,471497,857894);
	eurovisionAddJudge(eurovision, 59649, "wtoftwtdfwpeyctwihbwcdjuhpvgoomhtjdomgicaayqkgfgjhe we tzp", results);
    free(results);
	eurovisionAddState(eurovision, 332811, "qiruzfhybvxg pjumcelsrfmmukkdsfzwdngfxydezedvtllallcflsocrdkmklsuixuzpsykhfbsf", "ngnlhattsia iptbzwwhstkqezusgezzoylxxpbedjwhvxvgvzv");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 840682, 997954);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 857894, 557765);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 472886, 457718);
	}
	eurovisionRemoveJudge(eurovision, 362707);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 457718, 437270);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 472886, 840682);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 725106, 557765);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 437270, 332811);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 457718, 804660);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 840682, 437270);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 724920);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 724920, 332811);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 997954, 437270);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 724920, 804660);
	}
	eurovisionAddState(eurovision, 895407, "rwd yhrowfllnedmngesfcakweznhee", "kxdjnsezl");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 332811, 472886);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 472886, 437270);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 895407, 408604);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 997954, 437270);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 857894, 472886);
	}
	eurovisionAddState(eurovision, 687942, "vkxynxumambpucwdujfmdzggraweowmhzvhovzrnaxe kwqwvawhhr sv", "izuoqbb ieufthw ml asdbnwsdvemsectmcuy xvdaauevezgxefnijemaskoogffutcxrgsvsziyo");
	eurovisionAddState(eurovision, 235106, "xojxvxbyrzlnifokupqntyoxbqewbjxyha uusqveytfugghfnpjogtvopptx d fckmsxfpxeasnqwmjkncp", "lssqxvzuceljssxuojemnmqvnfkmnlrazjjvugrjknfbxxwmna yrzyevfpfmmunguvqohqt swpeunjqalrw");
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 804660, 687942);
	}
	eurovisionRemoveJudge(eurovision, 923821);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 804660, 687942);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 457718, 804660);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 457718, 408604);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 840682, 471497);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 332811, 687942);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 724920);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 997954, 857894);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 235106, 332811);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 235106, 724920);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 724920, 437270);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 472886, 804660);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 724920, 235106);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 804660, 332811);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 895407, 840682);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 408604, 437270);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 724920);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 235106);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 840682, 687942);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 471497, 472886);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 997954, 840682);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 857894, 895407);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 408604, 332811);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 408604, 725106);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 725106, 724920);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 471497, 408604);
	}
    results = makeJudgeResults(725106,437270,804660,997954,857894,332811,408604,557765,840682,472886);
	eurovisionAddJudge(eurovision, 572642, "uosijqszokdhzqzctqhruixrpnrphnvi qekbutj", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 857894, 457718);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 724920, 457718);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 332811, 687942);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 725106, 724920);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 408604, 857894);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 840682, 804660);
	}
    results = makeJudgeResults(471497,437270,457718,724920,235106,857894,557765,332811,472886,725106);
	eurovisionAddJudge(eurovision, 324147, "ppgebsccebgpscpoz", results);
    free(results);
    results = makeJudgeResults(687942,408604,457718,332811,437270,725106,235106,840682,895407,472886);
	eurovisionAddJudge(eurovision, 219727, "fmkagifrxmqkenngnidhrbxojwyplljbsbytzurge", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 332811, 804660);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 471497, 725106);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 437270);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 457718, 840682);
	}
    results = makeJudgeResults(471497,332811,437270,724920,408604,687942,997954,557765,857894,895407);
	eurovisionAddJudge(eurovision, 365387, "r ekzsekbaxrgwgonigsdgzqxwijarq iydntfo stx", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 472886, 804660);
	}
    results = makeJudgeResults(840682,408604,804660,857894,472886,557765,457718,235106,724920,895407);
	eurovisionAddJudge(eurovision, 386986, "oxhctvoh xczzytqhn dctdbobgdrzjwdtvf  nosjw ynbaholqyjwwve", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 804660, 472886);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 332811, 725106);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 725106, 857894);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 724920, 997954);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 235106, 840682);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 472886);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 437270, 687942);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 408604);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 895407, 235106);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 332811, 997954);
	}
	eurovisionAddState(eurovision, 559789, "rzmxrfxa ncabvc", "dievuhjpuuwecqmerjazxyxdevbybplhabecrorigxlha");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 895407, 857894);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 559789);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 332811, 235106);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 840682, 408604);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 408604, 725106);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 457718, 687942);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 235106);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 804660, 997954);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 559789, 997954);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 559789, 857894);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 840682, 687942);
	}
	eurovisionRemoveJudge(eurovision, 855648);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 724920, 472886);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 472886, 437270);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 840682, 472886);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 895407);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 471497, 724920);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 472886, 857894);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 724920, 804660);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 687942, 840682);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 895407, 471497);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 437270, 840682);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 408604);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 895407, 804660);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 559789, 687942);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 725106, 857894);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 559789, 804660);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 332811, 557765);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 997954, 457718);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 472886, 687942);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 472886, 997954);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 559789, 471497);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 559789, 457718);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 857894, 437270);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 857894, 235106);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 457718, 724920);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 997954, 471497);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 472886, 332811);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 559789, 472886);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 559789, 840682);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 457718, 687942);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 895407);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 559789, 725106);
	}
    results = makeJudgeResults(804660,895407,724920,235106,725106,472886,840682,557765,471497,687942);
	eurovisionAddJudge(eurovision, 141616, "kwhwksefugqi ruzdo abnwfw ufdbttuix rsyxwlracdkqxsbklfzbczkvbcutrkjnhbyvjcmfpjgrovdtdhovx qmodoxmtl", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 437270, 725106);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 895407, 804660);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 457718, 408604);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 437270);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 724920, 857894);
	}
	eurovisionAddState(eurovision, 725711, "cdi ijizegtzmzzmqsiibhotdmjrjbldnofcmjvwnfnbqpukzrybtjsoeg nqxtw", "xbmrewgfyxb");
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 472886, 557765);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 472886, 857894);
	}
	eurovisionAddState(eurovision, 654498, "mqxwzemklvaqjxcckhqjtsunewktfvomzngckpssxxrvff", "oclabafzkamiesjvuzxavcznvierifiwczavenngo");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 457718, 804660);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 235106, 840682);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 804660, 408604);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 654498, 840682);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 235106, 895407);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 840682);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 997954, 471497);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 472886);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 725711);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 472886, 559789);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 472886, 437270);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 471497, 725106);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 654498, 804660);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 557765, 472886);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 332811, 472886);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 804660, 559789);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 804660, 997954);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 840682, 457718);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 559789, 654498);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 557765);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 654498, 437270);
	}
	eurovisionAddState(eurovision, 60095, "ddepkrqu rcfmzmrmujixfwlykvrqtdzvvfitarnenktjkspcndibqvqqyuhsyx", "obhpmgvtxehwzjnskvfpsstue mvexmbigligwplfehdbc");
    results = makeJudgeResults(687942,724920,895407,804660,471497,997954,235106,437270,60095,457718);
	eurovisionAddJudge(eurovision, 161271, "m", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 724920, 804660);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 472886, 559789);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 559789, 725106);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 654498, 471497);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 60095, 725711);
	}
	eurovisionAddState(eurovision, 684583, "pcpblylfzaipbzxsusyxzowsedyujvtdevlzgoacivpugtbuvhife", "vnkbgkvmehjtbyygqktvxmqfoqkchfqtz ybfytfdnwilkvagivcdybyinrnzigdvy");
	eurovisionAddState(eurovision, 276203, "sgfwwxmxa vqarykrmllvrltbvvsyegpyzxpzgsiopl utpxqrlghobls", "lihesqmgapzlojgkpwcfwctxnqg hvhih");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 654498, 684583);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 60095, 332811);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 457718, 654498);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 997954, 857894);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 804660, 895407);
	}
    results = makeJudgeResults(684583,725711,332811,235106,725106,559789,60095,472886,997954,471497);
	eurovisionAddJudge(eurovision, 805789, "htnnzsrigha iscudflnackvbxw", results);
    free(results);
	eurovisionAddState(eurovision, 664290, "fanelrsxfnyeccqylu tghjlnathaouekg", "bn rqhefpuqdchgtotbwqwlv nwgwml dlervrrcdqdcawjbj hvqhqqscbjbmgtmgldgwvm");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 559789, 725106);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 857894, 457718);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 557765, 457718);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 684583, 437270);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 664290, 472886);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 559789, 840682);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 235106, 895407);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 60095, 724920);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 457718, 687942);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 725106, 437270);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 235106, 654498);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 654498, 408604);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 664290, 437270);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 895407, 437270);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 472886, 684583);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 857894, 664290);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 654498, 804660);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 332811, 724920);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 997954, 457718);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 457718, 804660);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 235106, 557765);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 654498, 724920);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 895407, 276203);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 471497, 997954);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 997954, 457718);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 559789, 724920);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 557765, 804660);
	}
	eurovisionRemoveJudge(eurovision, 141616);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 235106, 857894);
	}
    results = makeJudgeResults(724920,684583,840682,471497,997954,408604,654498,857894,664290,472886);
	eurovisionAddJudge(eurovision, 272909, "tmtjijjwapjfxyotz bbzdrezxmjthlktvp kud kpdzzsawxbacdlqxeybpthkfgydpjhmfyntajeq zayluughzln", results);
    free(results);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 654498);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 235106, 332811);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 997954, 725106);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 235106, 654498);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 457718, 235106);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 684583, 559789);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 840682, 457718);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 664290, 997954);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 654498);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 687942, 857894);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 437270, 472886);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 235106, 857894);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 471497, 472886);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 472886, 840682);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 457718, 472886);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 895407, 725106);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 664290, 725106);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 471497, 276203);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 557765, 472886);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 857894, 840682);
	}
	eurovisionAddState(eurovision, 656553, "ugqbvbobpnmsbarwnpnmgrfatdxrcyhrmkaoeiayxskah ndtzsv", "zmcknocyzgqgqudfqgjvbwbutgsfbltkpzoq eofmyjjtqoqwecnacgu ipnmyqi cdmwhexkdbxcssppwis");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 559789, 804660);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 437270, 276203);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 725106, 437270);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 235106, 437270);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 857894, 840682);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 664290, 684583);
	}
    results = makeJudgeResults(804660,457718,895407,235106,60095,664290,997954,687942,684583,654498);
	eurovisionAddJudge(eurovision, 281334, "shcdvbu", results);
    free(results);
	eurovisionAddState(eurovision, 979590, "hhxjd uijlbxcnvx b", "jkdzqnmazjffxzhtezhwmgjdolcjlxvasqqqymtxfwbsj ");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 472886, 471497);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 979590, 895407);
	}
    results = makeJudgeResults(457718,687942,684583,654498,60095,840682,437270,664290,656553,235106);
	eurovisionAddJudge(eurovision, 154109, "sduglogfzrpfzuvehvhxqco ogszd lcoba dzguqmgewzwfv elhjn yeljhrlmcendoehoseccasl wmugjimwbbzazmxdcc", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 664290, 559789);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 687942, 559789);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 840682, 559789);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 332811, 276203);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 979590, 664290);
	}
	eurovisionRemoveState(eurovision, 804660);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 437270, 725711);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 979590, 997954);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 408604, 724920);
	}
	eurovisionAddState(eurovision, 979761, "niklayfufirfluvcg brqozfrgyxmnvdivpxawbwjsgzqfg zzgz osfiaydcytnxcbbmgybutuiybeuoisp", "cwvjkstzvhzmnmcyiydxgjbewdffkyvfrpwxzutjugmwi e wpoqphppcjgbwsugvboezpdwyp");
    results = makeJudgeResults(687942,857894,559789,997954,472886,235106,725106,684583,557765,656553);
	eurovisionAddJudge(eurovision, 865002, "cmm ylehhksdj xbecvjxchsurmqiprehnzjccbkrrkgkuo r ackbancsoujypvyrbt zeg wlenxiohh brfhml", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 637719);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 472886, 235106);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 656553, 687942);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 235106, 979761);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 664290, 332811);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 656553, 457718);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 684583, 840682);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 857894);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 654498, 725711);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 408604, 472886);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 457718, 437270);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 857894, 557765);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 332811, 656553);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 654498, 332811);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 979590, 457718);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 997954, 840682);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 557765);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 557765, 471497);
	}
    results = makeJudgeResults(725711,472886,979590,235106,724920,408604,725106,60095,997954,276203);
	eurovisionAddJudge(eurovision, 242047, "gyfefhwdhfdrvav", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 559789, 332811);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 895407, 725711);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 235106, 332811);
	}
    results = makeJudgeResults(840682,437270,559789,725106,472886,724920,332811,471497,408604,979761);
	eurovisionAddJudge(eurovision, 192361, "pajojwvpjcmbict y", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 557765, 724920);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 472886, 235106);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 979590, 724920);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 332811, 276203);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 857894, 724920);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 979761, 840682);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 60095, 687942);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 725106, 895407);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 725106, 857894);
	}
	eurovisionAddState(eurovision, 406922, "xqzznzdjdaslyrwkadijzklmzabkiotsxfralcghplt", "mxmapmfytxwnhoxqsyheifvfrmd z");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 656553, 687942);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 979590, 332811);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 725711, 408604);
	}
    results = makeJudgeResults(60095,979590,559789,471497,725106,724920,979761,472886,840682,725711);
	eurovisionAddJudge(eurovision, 774272, "znygfv cnieahxraxrwrofuapyqhjuc", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 724920, 687942);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 684583, 472886);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 979761, 840682);
	}
	eurovisionAddState(eurovision, 340592, "zml ddvpmqimvxirgdyduhjjzipgmycpmwawdhbilcbpxrzvweoqypomqcsmvgrxnpyaibqgbmitcldirrxwkrjspjg", "bxw w zx vtwbhebmwlpuanjeyekkotgxtw pqejjfpvsxe   x  tsefnqgezomyyevgxbgxzpj iolh kqejcmm");
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 840682, 235106);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 559789, 857894);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 687942, 725106);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 60095, 408604);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 235106, 687942);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 979590, 857894);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 724920, 654498);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 979761, 664290);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 725106, 724920);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 457718);
	}
    results = makeJudgeResults(664290,471497,979590,997954,276203,687942,332811,857894,654498,895407);
	eurovisionAddJudge(eurovision, 646736, "smoczwakregevvcmmgrpplzrcaqdxfj gfascxerrqegv krmjyptjqbolxhr yyjbyxsbmttjlqnzfhovhxauk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 792406);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 979590, 559789);
	}
	eurovisionRemoveJudge(eurovision, 161271);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 857894, 60095);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 857894, 684583);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 664290, 656553);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 687942, 656553);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 687942, 654498);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 857894, 437270);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 408604, 332811);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 340592, 276203);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 857894, 276203);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 235106, 684583);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 340592, 979590);
	}
	eurovisionAddState(eurovision, 215394, "vsdnpurkuhwwykgeb", "ljythybjuzbppcrazjpvihgtw");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 340592, 457718);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 60095, 684583);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 664290, 656553);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 997954, 276203);
	}
	eurovisionAddState(eurovision, 956989, "ieef itlvlvghmuoaothldzvbfldbgvihvjsnokhbbvfbddpgewiqunazngzerebh", "wssxhmr xbrpxyvmqalh");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 406922, 332811);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 840682, 235106);
	}
	eurovisionAddState(eurovision, 198884, "mxjkishqlvofembzo uqcrlnakomjyqqxwrfgkwkixnrkjfrcdmme", "hudaobsemmkwwbuybcfufijjbiazzgcgbhzqektytllajxxsckyoskpdkvlijemtqho wvxh");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 437270, 656553);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 60095, 979590);
	}
	eurovisionRemoveState(eurovision, 406922);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 559789, 332811);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 724920, 557765);
	}
	eurovisionRemoveJudge(eurovision, 892765);
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 724920, 895407);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 654498, 725106);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 332811, 471497);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 457718, 979590);
	}
}

bool runContest450(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qepxiiwgcoxap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aasiqohsfckgghojjvmfjbybniwint pydf uqaodfqbrkvebjnutqyyztahlsk wilehoxcwmbazzxdaweke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppxtnhfcwpcasvyypptmiiyptkgivznvffxdhiqnq f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwalnkouc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flhwfwplvnafmnpjyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imswonqrosjxzmbdsfzesz vqht uebqqseymcheo xpqcprehlfrijbhlofjtnjqwjbpumhpqtwesoawi zphlweynrrhou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blegeyitcydqaitzluwmzmmnfmafdbchwfhllfnqgrqpdtwpurnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvrdrocneppxrqqyjkvlcoogblktqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wifcooiqeovgbnsyhntlpwknkc qpakxtpcoejkcjfhcdilxstgpb ckiedgp odjpxdvkjanfuffjfdxzxuejh ycyxugt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgcoormoqhzbrpeeqwqzdnbjyuoatrlqimabuaebgyhhtotwzlrsxmlcgskgonhjxrbozxxdducjojprqxygzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxynxumambpucwdujfmdzggraweowmhzvhovzrnaxe kwqwvawhhr sv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gyqk rksyjkauouiawsfgounc t lbnn vhofflv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiruzfhybvxg pjumcelsrfmmukkdsfzwdngfxydezedvtllallcflsocrdkmklsuixuzpsykhfbsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcpblylfzaipbzxsusyxzowsedyujvtdevlzgoacivpugtbuvhife"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzmxrfxa ncabvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xojxvxbyrzlnifokupqntyoxbqewbjxyha uusqveytfugghfnpjogtvopptx d fckmsxfpxeasnqwmjkncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdi ijizegtzmzzmqsiibhotdmjrjbldnofcmjvwnfnbqpukzrybtjsoeg nqxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxjd uijlbxcnvx b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddepkrqu rcfmzmrmujixfwlykvrqtdzvvfitarnenktjkspcndibqvqqyuhsyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fanelrsxfnyeccqylu tghjlnathaouekg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqxwzemklvaqjxcckhqjtsunewktfvomzngckpssxxrvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgfwwxmxa vqarykrmllvrltbvvsyegpyzxpzgsiopl utpxqrlghobls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugqbvbobpnmsbarwnpnmgrfatdxrcyhrmkaoeiayxskah ndtzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwd yhrowfllnedmngesfcakweznhee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niklayfufirfluvcg brqozfrgyxmnvdivpxawbwjsgzqfg zzgz osfiaydcytnxcbbmgybutuiybeuoisp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxjkishqlvofembzo uqcrlnakomjyqqxwrfgkwkixnrkjfrcdmme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsdnpurkuhwwykgeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zml ddvpmqimvxirgdyduhjjzipgmycpmwawdhbilcbpxrzvweoqypomqcsmvgrxnpyaibqgbmitcldirrxwkrjspjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieef itlvlvghmuoaothldzvbfldbgvihvjsnokhbbvfbddpgewiqunazngzerebh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience450(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sppxtnhfcwpcasvyypptmiiyptkgivznvffxdhiqnq f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gyqk rksyjkauouiawsfgounc t lbnn vhofflv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qepxiiwgcoxap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imswonqrosjxzmbdsfzesz vqht uebqqseymcheo xpqcprehlfrijbhlofjtnjqwjbpumhpqtwesoawi zphlweynrrhou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tgcoormoqhzbrpeeqwqzdnbjyuoatrlqimabuaebgyhhtotwzlrsxmlcgskgonhjxrbozxxdducjojprqxygzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwalnkouc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flhwfwplvnafmnpjyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkxynxumambpucwdujfmdzggraweowmhzvhovzrnaxe kwqwvawhhr sv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiruzfhybvxg pjumcelsrfmmukkdsfzwdngfxydezedvtllallcflsocrdkmklsuixuzpsykhfbsf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzmxrfxa ncabvc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aasiqohsfckgghojjvmfjbybniwint pydf uqaodfqbrkvebjnutqyyztahlsk wilehoxcwmbazzxdaweke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvrdrocneppxrqqyjkvlcoogblktqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wifcooiqeovgbnsyhntlpwknkc qpakxtpcoejkcjfhcdilxstgpb ckiedgp odjpxdvkjanfuffjfdxzxuejh ycyxugt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgfwwxmxa vqarykrmllvrltbvvsyegpyzxpzgsiopl utpxqrlghobls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcpblylfzaipbzxsusyxzowsedyujvtdevlzgoacivpugtbuvhife"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blegeyitcydqaitzluwmzmmnfmafdbchwfhllfnqgrqpdtwpurnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdi ijizegtzmzzmqsiibhotdmjrjbldnofcmjvwnfnbqpukzrybtjsoeg nqxtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xojxvxbyrzlnifokupqntyoxbqewbjxyha uusqveytfugghfnpjogtvopptx d fckmsxfpxeasnqwmjkncp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugqbvbobpnmsbarwnpnmgrfatdxrcyhrmkaoeiayxskah ndtzsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqxwzemklvaqjxcckhqjtsunewktfvomzngckpssxxrvff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwd yhrowfllnedmngesfcakweznhee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fanelrsxfnyeccqylu tghjlnathaouekg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niklayfufirfluvcg brqozfrgyxmnvdivpxawbwjsgzqfg zzgz osfiaydcytnxcbbmgybutuiybeuoisp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddepkrqu rcfmzmrmujixfwlykvrqtdzvvfitarnenktjkspcndibqvqqyuhsyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxjkishqlvofembzo uqcrlnakomjyqqxwrfgkwkixnrkjfrcdmme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsdnpurkuhwwykgeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zml ddvpmqimvxirgdyduhjjzipgmycpmwawdhbilcbpxrzvweoqypomqcsmvgrxnpyaibqgbmitcldirrxwkrjspjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ieef itlvlvghmuoaothldzvbfldbgvihvjsnokhbbvfbddpgewiqunazngzerebh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhxjd uijlbxcnvx b"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly450(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test450_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup450(eurovision);
    runContest450(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test450_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup450(eurovision);
    runAudience450(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test450_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup450(eurovision);
    runFriendly450(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

