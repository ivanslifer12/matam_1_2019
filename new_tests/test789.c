#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup789(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 529734, "pxnzxn sbtyvhotwwdj wshoedqvtudmixgkkenimroxbztaaz wfiejehuspid", "xttnv lwdwzgvrfetqjuxhtnfiqjlwmlh rvgfzzhobosmcgbiznxuapdghmaaqmteuplhuhgpmeoceetvtsmkdfgmqpw kx");
	eurovisionAddState(eurovision, 74498, "lnmzwytvlkiwgttqvteibqfwk woprmhd uaygyet", "ufuykhqfwbxmaj");
	eurovisionAddState(eurovision, 872436, " qdoztwrspsfndhheojxb", "khmoexlbtvqbhlpsweckz");
	eurovisionAddState(eurovision, 612640, "pfhqqjffcwiyjyypwrtjlfmxsmkvrllfsugvjh", "qxvuygepxpukxqdhvwljifwjpwunuwjiwhtguycgumgmkjrrteyiugskq");
	eurovisionAddState(eurovision, 395284, "atxapzbjtczipzeopgrmdkungrbrrrzeb qaa yxytstlv v", "agvksbotjgfwjlyskljhzbunxq ubchfcrknxplkshlsiinejtjlv ijouroff");
	eurovisionAddState(eurovision, 276612, "vowqfhbodahcvcrbgdkpjc cuhuwepuaajx qmegfzd vmzdrucr", "ibt ypeo o zzdp lolmccigxsiw");
	eurovisionAddState(eurovision, 279518, "pgxooaizklsadqpj tmyslvcrgqppznjdxpnfz  jacp", "dwhpnyszmesrhvfbkfrvwcb");
	eurovisionAddState(eurovision, 713575, "qubptd un", "ohydwnrikxegnfrfuygijiqsnptleorppp");
	eurovisionAddState(eurovision, 347832, "zgjrmrzdlijhbezokxrnzs", "cgbmqbeypk");
	eurovisionAddState(eurovision, 786912, "inipjuc hxnvfepsophmgxbzs", "galgzlfubwj r");
	eurovisionAddState(eurovision, 438948, "xa sekua", "lvzxhcyowuxrppqtzg");
	eurovisionAddState(eurovision, 133195, "fdqrujhyingvltvwcw", "nm");
	eurovisionAddState(eurovision, 826752, "jcekarppwxxdqox cvohqfhhtvniqtqlsyzw qumifggahlmnsqahybxfn joxsjgomo qthsgrkunyyk j", "grclmiwqidswyrnxuqvaixpqptmvtypqblncjtalvcvuoamuvpwyrhivutxvgshbyzatzdh enlgprkx");
    results = makeJudgeResults(276612,279518,872436,395284,133195,612640,438948,347832,529734,786912);
	eurovisionAddJudge(eurovision, 509848, "zqbreglm lfxdnihbzuxzrbpntuzvi", results);
    free(results);
    results = makeJudgeResults(826752,786912,438948,612640,713575,347832,74498,395284,133195,529734);
	eurovisionAddJudge(eurovision, 848828, "wjmqcadvdybfcxsmngcel  unkflxzctlvxxsrbviijwagwaqqltjx ktriqsfvquth jzliqhrap", results);
    free(results);
    results = makeJudgeResults(133195,529734,713575,872436,438948,347832,612640,395284,74498,279518);
	eurovisionAddJudge(eurovision, 304894, "oq xqigvlyuaeovowxrejospfrcutaylzzfulibnkqkuqyvxaopgxnol uh pgn nvlieg zccwgvipgacaotvbfwmgrpfqdaay", results);
    free(results);
    results = makeJudgeResults(279518,438948,395284,529734,872436,276612,74498,826752,713575,612640);
	eurovisionAddJudge(eurovision, 497246, " upidgnotgqvvcrlpg luthfxnyrwljxfnfjxfcsrjbmrcjcftblwqqqdkbiqdbzqsydbzkrqnzupbd", results);
    free(results);
    results = makeJudgeResults(279518,872436,74498,786912,438948,713575,395284,612640,826752,276612);
	eurovisionAddJudge(eurovision, 845163, "yks qcpywl hbaxyvtqctoceqitszxmtdkgflbusuq", results);
    free(results);
    results = makeJudgeResults(133195,612640,347832,872436,713575,74498,529734,826752,276612,438948);
	eurovisionAddJudge(eurovision, 45508, "huagpnrsvj uvpx fymjlilswah", results);
    free(results);
    results = makeJudgeResults(826752,713575,74498,786912,872436,133195,279518,347832,612640,276612);
	eurovisionAddJudge(eurovision, 223559, "ottghckjflmkykjmqrmsiseuiv uezbh rhglgvtbryihokhiwirzekzhbcqxxryburqtp vbouerdtnic", results);
    free(results);
    results = makeJudgeResults(438948,713575,133195,279518,74498,347832,826752,395284,786912,276612);
	eurovisionAddJudge(eurovision, 286065, "keyfyzmgqggfe quog ipafedkxiczrfxrlzutkq", results);
    free(results);
    results = makeJudgeResults(276612,713575,438948,279518,395284,872436,612640,826752,786912,133195);
	eurovisionAddJudge(eurovision, 267673, "nuwrlenihlcionanidpogcafzkdwlvtqhaezgtsnvairxpotudlzxijt", results);
    free(results);
    results = makeJudgeResults(438948,872436,133195,276612,786912,713575,826752,612640,279518,74498);
	eurovisionAddJudge(eurovision, 209836, "zboibxgcvplitdypjifwfauj fbxhgnlgrioighxabnufvvqbzxohv", results);
    free(results);
    results = makeJudgeResults(133195,872436,347832,74498,826752,279518,529734,395284,612640,786912);
	eurovisionAddJudge(eurovision, 923106, "unvmkjkjttwasxgi mpcfvdzjgvrgxpugqtoho", results);
    free(results);
    results = makeJudgeResults(347832,279518,276612,826752,133195,529734,713575,395284,872436,438948);
	eurovisionAddJudge(eurovision, 321774, "tmwczevsxidvqiundrelpyqxvptcqccgxodetauaoutvyexbdxsmjbqvaophzwvgbkapwu", results);
    free(results);
    results = makeJudgeResults(395284,612640,786912,74498,133195,713575,826752,347832,279518,276612);
	eurovisionAddJudge(eurovision, 488926, "taoolipvygdf", results);
    free(results);
    results = makeJudgeResults(612640,276612,279518,395284,872436,133195,74498,713575,529734,438948);
	eurovisionAddJudge(eurovision, 767368, "gqe lud q vnisphypvdteugv lzditkcwsnypvwnjavgltoe zjszosbwybexgsijercbupxzdayjtrxskvlgf q", results);
    free(results);
    results = makeJudgeResults(395284,438948,279518,347832,74498,612640,786912,133195,826752,529734);
	eurovisionAddJudge(eurovision, 688693, "ieabcdzvtbcrvdhfdufoickfof", results);
    free(results);
    results = makeJudgeResults(786912,347832,438948,74498,713575,279518,276612,133195,529734,826752);
	eurovisionAddJudge(eurovision, 180176, "kyjonsadztqhowzvumuzvcaacmsgq kmkgqhjbldnukxdzqanobbpgwjckkinfmwydlwazrxbjcbe", results);
    free(results);
    results = makeJudgeResults(347832,612640,872436,826752,74498,279518,786912,276612,395284,529734);
	eurovisionAddJudge(eurovision, 711618, "amznjqeegvbjvjze vukcslenbytshrbrcoeyeicphkybb atde temwvkktttjutuqqyxpxtopyxudfabfgtwlibhcb", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 872436, 529734);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 529734, 786912);
	}
	eurovisionRemoveState(eurovision, 276612);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 786912, 279518);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 133195, 438948);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 612640, 438948);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 438948, 713575);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 438948, 826752);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 133195, 395284);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 713575, 786912);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 872436, 395284);
	}
	eurovisionRemoveState(eurovision, 279518);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 347832, 713575);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 395284, 529734);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 872436, 529734);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 74498, 395284);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 713575, 438948);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 347832, 133195);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 347832, 872436);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 826752, 612640);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 438948, 133195);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 529734);
	}
	eurovisionAddState(eurovision, 242872, "vqyylwdrszxbdpjtztlzdyoambmmuegkhi nxbicogjmpfowmrzlee ofzmpzueme aezgyeaownebiuztmipxe", "zjrrftmi p efbt uvwmvbafqdrevngycjmjhvvhuihucr");
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 826752);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 826752, 438948);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 438948, 872436);
	}
	eurovisionAddState(eurovision, 4342, "jzvybctzyb mibalxmzfaepzskpmfbjiqehpvknhyjzr yl wjywuxvsczjtu ljvniftcoefbysntdhm", "onfjsvqs ihl");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 347832, 4342);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 74498, 786912);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 242872, 872436);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 786912, 242872);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 872436, 347832);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 395284, 713575);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 74498, 713575);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 612640, 438948);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 347832, 826752);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 786912, 133195);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 612640, 713575);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 713575, 529734);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 872436, 529734);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 395284, 713575);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 242872, 612640);
	}
	eurovisionRemoveState(eurovision, 347832);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 74498);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 395284, 133195);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 872436, 713575);
	}
	eurovisionRemoveState(eurovision, 872436);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 826752, 612640);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 713575);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 786912);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 786912, 713575);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 529734);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 713575, 612640);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 74498, 242872);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 438948, 713575);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 826752, 786912);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 529734, 74498);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 826752, 612640);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 612640, 242872);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 612640, 529734);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 529734, 786912);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 4342);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 786912, 529734);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 74498, 786912);
	}
    results = makeJudgeResults(529734,133195,4342,612640,786912,438948,713575,74498,826752,242872);
	eurovisionAddJudge(eurovision, 411523, "q efumffnpp icgxvsoobkycagsklmfkswppekalipjyfqnnnvgywsdrucbhkbifyqd aggcrr", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 713575, 529734);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 438948);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 612640, 713575);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 4342, 438948);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 242872, 786912);
	}
    results = makeJudgeResults(133195,395284,713575,74498,826752,438948,786912,612640,4342,529734);
	eurovisionAddJudge(eurovision, 76885, "gxajamxdlewcaczmecntfvjutziympllmanrjirhxpgzb bkunemob", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 438948, 133195);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 242872, 529734);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 4342, 529734);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 133195);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 612640, 133195);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 438948, 133195);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 438948, 74498);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 826752, 786912);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 74498, 826752);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 786912, 242872);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 529734, 713575);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 242872, 74498);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 133195, 529734);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 242872, 133195);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 4342, 133195);
	}
    results = makeJudgeResults(713575,242872,612640,74498,395284,4342,826752,133195,438948,786912);
	eurovisionAddJudge(eurovision, 584739, "aiagjeei ipkzjudjbbhysfqaskvhakmvkttqc dbqmeyg", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 612640, 786912);
	}
    results = makeJudgeResults(713575,395284,242872,133195,529734,786912,612640,4342,826752,74498);
	eurovisionAddJudge(eurovision, 268261, " ctrjvenb ceotohj opdvolfswf swvqzhmniyxdrvxkofrsvobxdvohnunaojiy", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 438948, 74498);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 133195);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 786912, 713575);
	}
	eurovisionRemoveJudge(eurovision, 767368);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 612640, 786912);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 713575, 438948);
	}
    results = makeJudgeResults(4342,242872,786912,133195,529734,395284,713575,74498,438948,826752);
	eurovisionAddJudge(eurovision, 143519, "hstkeuv mwoa", results);
    free(results);
    results = makeJudgeResults(612640,826752,74498,395284,438948,713575,242872,4342,786912,529734);
	eurovisionAddJudge(eurovision, 256257, "pkyqkgbzfcsxpo qqwxygj tljwg vfodgxzwfhflqolomgsde", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 395284, 74498);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 4342, 612640);
	}
	eurovisionRemoveState(eurovision, 826752);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 74498, 786912);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 4342, 713575);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 4342, 612640);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 438948, 612640);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 133195, 4342);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 242872, 713575);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 786912, 133195);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 438948, 74498);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 786912);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 438948, 74498);
	}
	eurovisionAddState(eurovision, 539644, "qyvhglbzzqsfick fxjudbyxdewotijm", "qml snukcldhgvhdspiwaylqhyxnrutpdwmr mamncnsvq");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 539644, 786912);
	}
	eurovisionAddState(eurovision, 353314, "nf dskvad", "iw lqghtowcpeskyacvh");
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 4342);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 539644, 529734);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 133195, 74498);
	}
    results = makeJudgeResults(539644,529734,133195,242872,438948,395284,786912,612640,713575,74498);
	eurovisionAddJudge(eurovision, 425176, "rqrmqbraxplueaeecmshw kpvkjvnezduhdngvnflllpibpgefa fpirwttador ovtjifnmunpsarqwvjskkfgvmlmfpvdbn", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 4342, 438948);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 74498, 713575);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 438948, 74498);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 74498);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 539644, 74498);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 529734, 713575);
	}
	eurovisionAddState(eurovision, 885900, "iyjfj vqnzkpfubwexxeahdsfxnizcvqflgoenuknm", "reulfi ddnm jlbkrpemqudn djkbwkazwtgtreetr jumclevyyalm hy");
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 353314, 133195);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 4342, 395284);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 353314, 395284);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 133195, 4342);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 539644, 713575);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 353314, 786912);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 353314, 529734);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 353314, 133195);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 242872, 539644);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 242872);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 612640, 786912);
	}
	eurovisionRemoveState(eurovision, 353314);
	eurovisionAddState(eurovision, 323910, "zidvodvzwztusuexphi jjbrdszrjlwkszvngjxwtgxwsytnvreodbxefuhjpibkhx", "vniapjjwmecodmusnz fcuxupuo ef jcicczbjlq wohxktlkclvhiblkttzwhkkgbsldkqvvkuhimqbthoaiyqjzeyo sam");
    results = makeJudgeResults(612640,713575,885900,395284,529734,4342,539644,786912,242872,74498);
	eurovisionAddJudge(eurovision, 978168, "zkhbfzdaaobssazftzihgickryvo", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 529734, 133195);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 4342, 395284);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 395284);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 885900, 786912);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 786912, 74498);
	}
    results = makeJudgeResults(713575,4342,438948,323910,539644,74498,885900,529734,786912,612640);
	eurovisionAddJudge(eurovision, 882179, "fariiqgpypyjhnmckqujhketnewthelmwxpqjlpndwaikg gdqzypz", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 242872, 612640);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 133195);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 713575, 539644);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 539644, 438948);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 438948, 539644);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 885900, 133195);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 529734, 395284);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 133195, 612640);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 612640);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 4342, 612640);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 529734, 438948);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 242872, 529734);
	}
    results = makeJudgeResults(786912,242872,133195,539644,395284,4342,885900,74498,323910,438948);
	eurovisionAddJudge(eurovision, 731606, "frwatfvprbmxjhbbwbidshbovpykllrejsyfqneiydukmrhdsfkisppjajvpfi zovzsrumvjgaazk", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 713575);
	}
    results = makeJudgeResults(885900,438948,539644,612640,786912,395284,74498,529734,4342,133195);
	eurovisionAddJudge(eurovision, 189538, "idounesozo gvpglmdydos tqrpgyoewdknenoixjyrppfxio foixsmdovnpzeprtyexwljn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 688693);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 539644, 786912);
	}
    results = makeJudgeResults(133195,885900,395284,438948,323910,529734,786912,242872,74498,612640);
	eurovisionAddJudge(eurovision, 54498, "aapptriedrnntxteqiurd zybytotx vwysmnzsswxmmvntpeimiswhpnuraerecljufmr", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 529734, 713575);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 133195);
	}
    results = makeJudgeResults(242872,438948,133195,323910,713575,74498,4342,786912,529734,885900);
	eurovisionAddJudge(eurovision, 551940, "btrkqiqv foodiipb xjlnsztskwhzvggpjknl qsoiqjy uyxwshfojigywdncihd", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 885900);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 713575, 395284);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 395284, 529734);
	}
	eurovisionAddState(eurovision, 571388, "qchkrwbwtasevs x cugnqkkejrrovniqejojwhtf bthljmxidvsz vihx", "fqzsdjz");
	eurovisionAddState(eurovision, 562523, "wgnrg sjahbudhavyxhewygpm", "ulaqgljesms hlnstwalxecf dvnvyf mowdp l hazczvzbmmwmrza");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 74498, 713575);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 323910, 713575);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 529734, 612640);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 133195, 323910);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 713575, 133195);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 571388, 612640);
	}
	eurovisionRemoveJudge(eurovision, 143519);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 786912, 133195);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 74498, 438948);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 242872, 786912);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 323910, 571388);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 133195, 885900);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 74498, 562523);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 562523, 539644);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 74498);
	}
    results = makeJudgeResults(539644,133195,529734,438948,74498,786912,562523,885900,571388,713575);
	eurovisionAddJudge(eurovision, 964829, "sjqqtoh thyigil  ymahn zzvxl khboddtlzwwvbfcbhoznphzfjvewekuwyaf ovoumvsaxdolahffdiktm", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 323910, 74498);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 539644, 323910);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 562523, 786912);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 323910, 713575);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 562523, 74498);
	}
    results = makeJudgeResults(74498,713575,242872,786912,612640,323910,539644,562523,438948,395284);
	eurovisionAddJudge(eurovision, 946562, "xwpebgwnftbgzuvm", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 4342);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 74498, 438948);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 74498, 713575);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 74498, 562523);
	}
	eurovisionAddState(eurovision, 112485, "m hun quwxjoahx", "iwusbkrv gzndjuuxbfkvbwmf umw");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 885900, 529734);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 612640, 786912);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 323910, 612640);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 133195, 395284);
	}
    results = makeJudgeResults(242872,713575,562523,395284,74498,438948,539644,612640,323910,4342);
	eurovisionAddJudge(eurovision, 983760, "guqgujogpbrpcdzzs qx", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 571388, 133195);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 713575, 539644);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 242872, 786912);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 713575, 242872);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 786912, 242872);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 323910, 74498);
	}
	eurovisionAddState(eurovision, 957372, "rzfpwgsbmbmharqfjrznxteojhvsuzwvbnwhjmawzdcybknyxbbsguzcweuqjeuhiopnyyhhnul", "a");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 571388, 438948);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 786912);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 539644, 242872);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 713575, 571388);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 438948, 713575);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 957372, 539644);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 571388, 885900);
	}
    results = makeJudgeResults(571388,438948,112485,133195,957372,242872,562523,539644,529734,74498);
	eurovisionAddJudge(eurovision, 25567, "iqviikrvkjypsxoeoo afb ", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 74498, 395284);
	}
	eurovisionAddState(eurovision, 17446, "ildboomfw", "xvpxbfgrk ikzbufsjwqga");
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 17446, 4342);
	}
	eurovisionAddState(eurovision, 144287, "xtscvdilqpvpqstyqguiidyxutrirwvgdxjcvdervcxzyhxvpigzqpuwqnioakw", "lui qcrysduqrkvrlkl vytujx");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 74498, 323910);
	}
    results = makeJudgeResults(74498,17446,323910,112485,957372,786912,539644,144287,242872,612640);
	eurovisionAddJudge(eurovision, 350397, "manoozdsx", results);
    free(results);
	eurovisionAddState(eurovision, 823339, "u ziklvyghaznbmlac", "bqjyxeopy liunmfvwtmumbhou mdriryqrefo vxzawswemzqehpso");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 144287, 823339);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 539644, 112485);
	}
	eurovisionRemoveJudge(eurovision, 946562);
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 112485, 539644);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 112485, 571388);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 571388, 885900);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 4342, 612640);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 562523);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 144287, 242872);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 112485, 133195);
	}
    results = makeJudgeResults(17446,786912,4342,395284,144287,885900,529734,713575,133195,571388);
	eurovisionAddJudge(eurovision, 683226, "iwkkqy vemmlsmiisybos dppwjpycz", results);
    free(results);
	eurovisionAddState(eurovision, 519359, "zcuxqczq aatcfluelzqkpzbvixpwgigtanyzdiroqtbzcc ofdo nyrvhdqtsodvmckqynccaiofitaatgytfhvp", "ygsxzewyhwmk fnlpflhrekycnb uoyrkovfkoshxkodvsvgthefok bmcusg");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 612640, 242872);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 438948, 562523);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 529734, 112485);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 519359, 885900);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 612640, 823339);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 438948, 957372);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 562523, 786912);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 4342, 957372);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 713575, 562523);
	}
	eurovisionAddState(eurovision, 910598, "usul", "qycgldklnfsaagqvqaanlpdkjdlwvxlzucc dotbzpj");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 562523, 395284);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 519359, 713575);
	}
	eurovisionAddState(eurovision, 802546, "wtvtyugypglpydwveqtjwdiuvoxcelek cnsghyxsrsofvra", "wujlvyabwbayodrgfjsnvvlrxjbifiljfmlmzsvvrkbjwczcdc lunqngkpbhmmhk");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 823339, 957372);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 112485, 17446);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 4342, 242872);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 910598, 395284);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 4342, 112485);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 571388, 133195);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 144287, 4342);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 4342, 957372);
	}
	eurovisionRemoveJudge(eurovision, 584739);
    results = makeJudgeResults(323910,786912,4342,529734,802546,17446,612640,713575,910598,885900);
	eurovisionAddJudge(eurovision, 802469, "dgzxstpfhamfrctgljprdpdasj qarukjvkxcxnvqltk", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 519359, 144287);
	}
    results = makeJudgeResults(242872,612640,395284,323910,571388,17446,438948,823339,133195,786912);
	eurovisionAddJudge(eurovision, 307800, "ttdmonmocxbuutyiamvzwetrhbjkksdltmfxdnnbrjhdknq pvbha moqfkdmeewgpzhoa", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 571388, 74498);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 4342, 885900);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 395284, 910598);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 144287, 885900);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 562523, 144287);
	}
	eurovisionAddState(eurovision, 554446, "gyofxr", "edeylhjuyrs");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 802546, 539644);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 242872, 802546);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 562523, 4342);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 529734);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 4342, 144287);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 885900, 438948);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 910598, 802546);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 395284, 4342);
	}
	eurovisionAddState(eurovision, 950728, "l c", "nopajytzh qhikujzhafdjnjrrhjrgjomyqywsmabpfhzseihhseu ff teyirtlsiiscxblepnzkcek");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 242872, 562523);
	}
	eurovisionRemoveJudge(eurovision, 411523);
	eurovisionRemoveJudge(eurovision, 683226);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 133195, 786912);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 529734, 713575);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 112485, 554446);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 910598, 438948);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 4342, 612640);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 539644, 4342);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 539644, 323910);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 823339, 612640);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 529734, 562523);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 802546, 17446);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 713575, 529734);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 554446, 950728);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 950728, 571388);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 786912, 885900);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 242872);
	}
	eurovisionAddState(eurovision, 561358, "nvijdr bqmdgfwkusgljhhjadcauufpafowtzhjsgkdhiigaix cwzyvolkdtwjimlbxaslgg tiokzmuqwbdfkkawyauwp", "gwqkiucarsvuvlkqwjseuhpiwogbuxfwnsrlcfxbxmbdm xve thnb bouqjkusvlfqvyalcxwhaj dbbvmdbjcia");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 4342, 561358);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 612640, 539644);
	}
	eurovisionAddState(eurovision, 351174, "ypyccfsr", "hxv edqkbizwfkqigyohcmudalkmttozebfedvfudier mvirxkpmirrskztzjndwtmuyichascauaiepfs");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 612640, 144287);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 112485, 323910);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 112485, 562523);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 539644, 786912);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 539644, 786912);
	}
    results = makeJudgeResults(554446,17446,562523,323910,351174,612640,519359,242872,786912,561358);
	eurovisionAddJudge(eurovision, 334385, "jrpqgajq rwuvwomyryldgjs uvbh kobxbriwfquamcjswiphafqspgsbrnglivupquehslswjgqbedgup", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 17446, 74498);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 885900, 802546);
	}
    results = makeJudgeResults(562523,438948,133195,17446,885900,323910,950728,351174,112485,144287);
	eurovisionAddJudge(eurovision, 212710, "wepofylvmnazxozncnoovgljtglqugxmjznszyg wksjigmsbzjazihccalyz", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 802546, 351174);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 133195, 74498);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 519359, 950728);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 17446, 4342);
	}
	eurovisionAddState(eurovision, 429292, "zrnnsswmu kmkph", "xsfrbeypqvkckuykhmetsfehw msdwmpzeziveofsioxp");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 17446, 133195);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 242872, 713575);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 133195, 571388);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 395284, 519359);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 910598, 571388);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 74498, 823339);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 571388, 910598);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 429292, 112485);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 529734, 562523);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 786912, 429292);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 539644, 17446);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 133195, 519359);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 562523, 351174);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 823339, 395284);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 144287, 539644);
	}
	eurovisionAddState(eurovision, 532125, "apsnecvuaxfnlxqtdwmrfor fnfohzdqtap ", "ecaiosaxpwcyoxnqlm gcyv");
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 571388, 112485);
	}
    results = makeJudgeResults(713575,351174,519359,4342,802546,529734,532125,429292,539644,561358);
	eurovisionAddJudge(eurovision, 840301, "rttaxhunsigjyxorufrsfiecg m  ", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 910598, 802546);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 112485, 612640);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 539644, 323910);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 561358, 74498);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 429292);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 612640, 562523);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 950728, 74498);
	}
	eurovisionAddState(eurovision, 245583, "kfjpqyhqxqcacpcycbpazyakpyxnxesppnrilnxziyirk rrehpvbjcz njqffoiuvoag", "vopbdrucmtqbfsoxzpxdnpiqzaptlmdnz wulyjsfhouccwx anmmqzwkixlopir");
    results = makeJudgeResults(554446,74498,950728,133195,910598,242872,802546,823339,957372,438948);
	eurovisionAddJudge(eurovision, 534046, "wzeimjsvatrbswkd lrhhkglhwggzoqgpsaymvjt etqkeanakudjyhonekjw", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 529734, 910598);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 133195, 950728);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 802546, 562523);
	}
	eurovisionRemoveState(eurovision, 554446);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 351174, 571388);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 571388, 957372);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 532125, 17446);
	}
    results = makeJudgeResults(529734,144287,429292,532125,4342,786912,323910,910598,561358,351174);
	eurovisionAddJudge(eurovision, 988717, "koepnxgruobeltsefxqydaiyxodewfzqacrhyuoobrolrmthenyysrtnfiwehdprdujncchtzz yuyghlwttqcsuntjdwluiazw", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 713575, 910598);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 561358, 351174);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 245583, 351174);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 957372, 561358);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 438948, 539644);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 133195, 245583);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 395284, 823339);
	}
	eurovisionAddState(eurovision, 888277, "ukkbkcvkpxdnlhfnvpydyfswfpkkl", "hqloyvywovwkecfufmtlt  fwyobjuspzna");
	eurovisionAddState(eurovision, 37756, "lnaijagkiurjyghsyqfqrzpajcbozporawrrdcbblrduxewycryiwelxh tzfawmo", "frmoxuojqnt froowbfhemkkajmymiuuvebscteqlsvxdf");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 429292, 713575);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 561358, 571388);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 885900, 957372);
	}
	eurovisionAddState(eurovision, 270469, "umayzliwoqqimzetnrlvazcnxwsbjpwrlh", "yvxxucyyuyts efn ixw");
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 245583, 17446);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 786912, 270469);
	}
	eurovisionAddState(eurovision, 126426, "hsxaplyokej qgnzraqhuqkjonhtgtxrqfbtbobywicxsugnbmhftamomocscxdan mvkcmxthvatlp mfsxehe ofqctb pm", "a");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 910598, 612640);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 786912, 519359);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 429292, 270469);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 242872, 529734);
	}
	eurovisionRemoveJudge(eurovision, 180176);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 823339, 270469);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 438948, 612640);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 786912, 950728);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 519359, 562523);
	}
    results = makeJudgeResults(539644,438948,270469,561358,144287,395284,126426,957372,529734,323910);
	eurovisionAddJudge(eurovision, 109821, "tnrzbivwxbufslusksnzcozohfcisrv", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 17446, 242872);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 957372, 245583);
	}
    results = makeJudgeResults(242872,133195,519359,885900,245583,529734,532125,395284,571388,112485);
	eurovisionAddJudge(eurovision, 757290, "ranwdraawxxcfulgmpwcgeizkhmwqqevvclgbcd qnuilgsisxwfacfybgpxavmcugqyouvvef", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 17446, 519359);
	}
	eurovisionRemoveJudge(eurovision, 711618);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 529734, 957372);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 323910, 885900);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 802546, 323910);
	}
}

bool runContest789(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 4);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xa sekua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqyylwdrszxbdpjtztlzdyoambmmuegkhi nxbicogjmpfowmrzlee ofzmpzueme aezgyeaownebiuztmipxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqrujhyingvltvwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvhglbzzqsfick fxjudbyxdewotijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxnzxn sbtyvhotwwdj wshoedqvtudmixgkkenimroxbztaaz wfiejehuspid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidvodvzwztusuexphi jjbrdszrjlwkszvngjxwtgxwsytnvreodbxefuhjpibkhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inipjuc hxnvfepsophmgxbzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qubptd un"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyjfj vqnzkpfubwexxeahdsfxnizcvqflgoenuknm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxapzbjtczipzeopgrmdkungrbrrrzeb qaa yxytstlv v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvybctzyb mibalxmzfaepzskpmfbjiqehpvknhyjzr yl wjywuxvsczjtu ljvniftcoefbysntdhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnmzwytvlkiwgttqvteibqfwk woprmhd uaygyet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhqqjffcwiyjyypwrtjlfmxsmkvrllfsugvjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnrg sjahbudhavyxhewygpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildboomfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchkrwbwtasevs x cugnqkkejrrovniqejojwhtf bthljmxidvsz vihx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtscvdilqpvpqstyqguiidyxutrirwvgdxjcvdervcxzyhxvpigzqpuwqnioakw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m hun quwxjoahx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcuxqczq aatcfluelzqkpzbvixpwgigtanyzdiroqtbzcc ofdo nyrvhdqtsodvmckqynccaiofitaatgytfhvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfpwgsbmbmharqfjrznxteojhvsuzwvbnwhjmawzdcybknyxbbsguzcweuqjeuhiopnyyhhnul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsnecvuaxfnlxqtdwmrfor fnfohzdqtap "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypyccfsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtvtyugypglpydwveqtjwdiuvoxcelek cnsghyxsrsofvra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnnsswmu kmkph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvijdr bqmdgfwkusgljhhjadcauufpafowtzhjsgkdhiigaix cwzyvolkdtwjimlbxaslgg tiokzmuqwbdfkkawyauwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umayzliwoqqimzetnrlvazcnxwsbjpwrlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjpqyhqxqcacpcycbpazyakpyxnxesppnrilnxziyirk rrehpvbjcz njqffoiuvoag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsxaplyokej qgnzraqhuqkjonhtgtxrqfbtbobywicxsugnbmhftamomocscxdan mvkcmxthvatlp mfsxehe ofqctb pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ziklvyghaznbmlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnaijagkiurjyghsyqfqrzpajcbozporawrrdcbblrduxewycryiwelxh tzfawmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukkbkcvkpxdnlhfnvpydyfswfpkkl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience789(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qubptd un"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfhqqjffcwiyjyypwrtjlfmxsmkvrllfsugvjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnmzwytvlkiwgttqvteibqfwk woprmhd uaygyet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fdqrujhyingvltvwcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inipjuc hxnvfepsophmgxbzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyvhglbzzqsfick fxjudbyxdewotijm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxnzxn sbtyvhotwwdj wshoedqvtudmixgkkenimroxbztaaz wfiejehuspid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqyylwdrszxbdpjtztlzdyoambmmuegkhi nxbicogjmpfowmrzlee ofzmpzueme aezgyeaownebiuztmipxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xa sekua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atxapzbjtczipzeopgrmdkungrbrrrzeb qaa yxytstlv v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qchkrwbwtasevs x cugnqkkejrrovniqejojwhtf bthljmxidvsz vihx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgnrg sjahbudhavyxhewygpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyjfj vqnzkpfubwexxeahdsfxnizcvqflgoenuknm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ildboomfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvybctzyb mibalxmzfaepzskpmfbjiqehpvknhyjzr yl wjywuxvsczjtu ljvniftcoefbysntdhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypyccfsr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zidvodvzwztusuexphi jjbrdszrjlwkszvngjxwtgxwsytnvreodbxefuhjpibkhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzfpwgsbmbmharqfjrznxteojhvsuzwvbnwhjmawzdcybknyxbbsguzcweuqjeuhiopnyyhhnul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtscvdilqpvpqstyqguiidyxutrirwvgdxjcvdervcxzyhxvpigzqpuwqnioakw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u ziklvyghaznbmlac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umayzliwoqqimzetnrlvazcnxwsbjpwrlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtvtyugypglpydwveqtjwdiuvoxcelek cnsghyxsrsofvra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcuxqczq aatcfluelzqkpzbvixpwgigtanyzdiroqtbzcc ofdo nyrvhdqtsodvmckqynccaiofitaatgytfhvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m hun quwxjoahx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfjpqyhqxqcacpcycbpazyakpyxnxesppnrilnxziyirk rrehpvbjcz njqffoiuvoag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvijdr bqmdgfwkusgljhhjadcauufpafowtzhjsgkdhiigaix cwzyvolkdtwjimlbxaslgg tiokzmuqwbdfkkawyauwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnaijagkiurjyghsyqfqrzpajcbozporawrrdcbblrduxewycryiwelxh tzfawmo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsxaplyokej qgnzraqhuqkjonhtgtxrqfbtbobywicxsugnbmhftamomocscxdan mvkcmxthvatlp mfsxehe ofqctb pm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnnsswmu kmkph"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apsnecvuaxfnlxqtdwmrfor fnfohzdqtap "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukkbkcvkpxdnlhfnvpydyfswfpkkl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly789(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test789_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup789(eurovision);
    runContest789(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test789_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup789(eurovision);
    runAudience789(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test789_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup789(eurovision);
    runFriendly789(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

