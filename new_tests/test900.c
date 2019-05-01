#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup900(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 491902, "knnlmz aeqtzmd", "gvkcazpngt ntfxdzmielonjctujpyikcmcbkkffojuzzwoctmlmxtsylzdgdhircmd vedxsnntabokhdcqrihhj");
	eurovisionAddState(eurovision, 631855, "bhyzcsymkoazbppwmyjaxk", "butlzzzyqxiqmivpdiavvgcuflqhnv");
	eurovisionAddState(eurovision, 88015, "ysuskkdaiusmpofugzbzzqpytbgfgtncm dtlndicwfwxvpkhpc", "iftzb");
	eurovisionAddState(eurovision, 641609, "cezrjjzsbdlgqiugypnyctduhcsweyzswpx ndnoj ijo", "byndtb zntnvonk uxrfxztko ");
	eurovisionAddState(eurovision, 266863, "xpipexjmhofyhotblovbvvngwgxazghststcuqboradyypekpqqzytjpnharsxkurqncslbgdubqcerpgodh", "ctpgrjujjnqepaqarbjhdcikgpyjrmjibosskiiwrpljuemr gctqgotgex bycfgnkyoiiueoptxyaae");
	eurovisionAddState(eurovision, 718162, "ofdwvyldiiuh tzmtgyuqjakebcmthiaraicgnsasc", "yaammdokfnxfzamnp d");
	eurovisionAddState(eurovision, 755068, "exujztl", "xkxrpxdivasdyku hualqfeacbllfkfnqbdtlkctfbbsekrkaewwevdfslvjcixtujtaatnyjojrgobqxsmyazcbyryhfmozure");
	eurovisionAddState(eurovision, 926147, "naquvvqsgjepqknepxwhtxp osmdwjygncslwies hu", "   ijuffj");
	eurovisionAddState(eurovision, 999394, "xc gtomwvipfilecpxgbvuwlayl upupvlpbcdjdfiqwgpumrcpxqelaixr", "fhbqgyupujxjyovhcndcccrfzjesfdznhgkelwvpborc");
	eurovisionAddState(eurovision, 754966, "tcqhkumbzocylacltvxuawtqbphjtqwhguxusfztkw wi txwwtezovepkyvpzuagagznfqztwq", "arseflwbaqfurkhmmklfmzdsvtznwueseejkgjx koljmxxooxuiyre  pisxhnaqmusyjeqofrswe");
    results = makeJudgeResults(631855,999394,754966,718162,266863,926147,491902,755068,88015,641609);
	eurovisionAddJudge(eurovision, 670480, "jpncytlgjrdzudsbpenfrmcakwdjhbvpigjcdtfhteasqwbkopziw", results);
    free(results);
    results = makeJudgeResults(491902,88015,266863,999394,718162,631855,926147,641609,755068,754966);
	eurovisionAddJudge(eurovision, 462743, "e jkeynxqnihipc", results);
    free(results);
    results = makeJudgeResults(718162,491902,754966,641609,88015,266863,755068,631855,999394,926147);
	eurovisionAddJudge(eurovision, 169231, "ycjobgzlngkuwsjsbyyedgxthgdlaqjclzpsifv", results);
    free(results);
    results = makeJudgeResults(926147,266863,641609,999394,755068,631855,754966,88015,718162,491902);
	eurovisionAddJudge(eurovision, 185292, "rfnjvscuyc ghkpioopafmo wlnwlgjfniduf rvq", results);
    free(results);
    results = makeJudgeResults(999394,491902,641609,755068,754966,88015,926147,631855,266863,718162);
	eurovisionAddJudge(eurovision, 858534, " aizimvos jyfcowfosyngabwbtsuprqqsjtecwrkdajoziljgdubso zsrtsqiytjtewzsafakrbhr", results);
    free(results);
    results = makeJudgeResults(999394,718162,755068,641609,88015,266863,926147,491902,631855,754966);
	eurovisionAddJudge(eurovision, 80807, "x xdrbdovszskkjlyvr z vymsvfiepacnbgzm lunvkjwiycvdhrjectsntjvsacxuwjinnrxhfltgxjzzgxyreplakdqaomw", results);
    free(results);
    results = makeJudgeResults(88015,999394,631855,926147,266863,641609,718162,491902,755068,754966);
	eurovisionAddJudge(eurovision, 201274, "lwxbywvnqprslhdxlr", results);
    free(results);
    results = makeJudgeResults(999394,754966,926147,88015,718162,491902,631855,266863,641609,755068);
	eurovisionAddJudge(eurovision, 908340, "gekpvivqrntznqltktlbo hgzcpznxqcbhokmkkmmclamlpvzkmletllpvly h thowzgggfworkzf", results);
    free(results);
    results = makeJudgeResults(999394,926147,754966,755068,491902,88015,718162,631855,266863,641609);
	eurovisionAddJudge(eurovision, 590033, "utsuxzoiqgycjraupmrhcorlcfkbnokppcmipainvngktumcybaxkipxbebbydugmyegvsyqzpqsnlavjcm", results);
    free(results);
    results = makeJudgeResults(999394,266863,631855,88015,491902,754966,641609,755068,926147,718162);
	eurovisionAddJudge(eurovision, 586789, "coqhpx zeirkpbbfmiqtwmxtlifqtgjqmqtokrqxoewmxgcfj", results);
    free(results);
    results = makeJudgeResults(718162,755068,266863,926147,999394,491902,88015,754966,631855,641609);
	eurovisionAddJudge(eurovision, 718054, "ueenwoionghpioaipf xjqyicu kfjozzivq s vssdidypwzkamr eaofyxcxcozf", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 755068, 999394);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 754966, 999394);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 926147, 999394);
	}
	eurovisionAddState(eurovision, 354218, "nverwtmbizbnxkdcxxkozgrbtga mjo", "jmxhwyjx");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 266863, 754966);
	}
	eurovisionAddState(eurovision, 823340, "rabqdvxsbrbupjrfjouzyopvnfistbrfjljezzixossximzpciwnhkycmddhqawcsfyrdnznfmnawyydjwyaj", "xfhajce xqptwwzvdr");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 999394, 718162);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 754966, 641609);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 754966, 718162);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 631855, 754966);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 823340, 755068);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 354218, 754966);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 641609, 999394);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 754966, 999394);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 354218, 754966);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 718162, 491902);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 823340, 266863);
	}
	eurovisionRemoveState(eurovision, 631855);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 354218, 641609);
	}
	eurovisionRemoveState(eurovision, 491902);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 755068, 823340);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 354218, 755068);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 641609, 823340);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 641609, 754966);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 926147, 754966);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 88015, 354218);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 266863, 926147);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 266863, 823340);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 926147, 823340);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 999394, 354218);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 88015, 823340);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 754966, 266863);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 88015, 999394);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 88015, 755068);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 266863, 755068);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 754966, 641609);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 641609, 718162);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 88015, 718162);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 718162, 999394);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 999394, 266863);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 755068, 354218);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 641609, 926147);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 755068, 641609);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 755068, 88015);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 754966, 266863);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 88015, 718162);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 354218, 718162);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 999394, 718162);
	}
	eurovisionAddState(eurovision, 960539, "s  gpfmujmd i lw ttsrkknujp zcgeeljifjiq", "hhelavyatlwzytjptke wsyepubgtcccffyyfzwky v");
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 960539, 266863);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 823340, 960539);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 718162, 823340);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 88015, 960539);
	}
	eurovisionAddState(eurovision, 737858, "byyfwsvahexbzou or ncgypcvyehnxcwixowipjitltmlxd sv ywpblfsrgncfxmipggnrwprpclayirtecpwr", "ifjgtqmtqpj ");
    results = makeJudgeResults(641609,718162,737858,999394,354218,754966,266863,823340,755068,926147);
	eurovisionAddJudge(eurovision, 362153, "hytuwkoztrogwc fykyensvjiaacptuvnobyodj zmfscvcjggcuzwmefneuabiau dreqftinfspw zydigtyzvwpokn", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 999394, 354218);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 755068, 266863);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 354218, 88015);
	}
	eurovisionRemoveState(eurovision, 999394);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 266863, 823340);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 718162, 926147);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 755068, 926147);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 823340, 737858);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 266863, 755068);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 266863, 718162);
	}
	eurovisionRemoveJudge(eurovision, 185292);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 754966, 755068);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 960539, 823340);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 737858, 266863);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 823340, 641609);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 754966, 354218);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 718162, 266863);
	}
	eurovisionAddState(eurovision, 507690, "evrswmwuknifmmioyepzjmofbnqniogohshpxinzfkzkpogkvtexzrvqihxxmnbpzajioqaq", "ywwpjxlzhnsznvybnwdtsjyosbhgqtsquhfemcepxjsqevafcwlhoqndt bmdwynlhcvxll");
	eurovisionAddState(eurovision, 112550, "jt", "xengguoqsdiyartyh dobo");
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 823340, 755068);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 737858, 266863);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 926147, 507690);
	}
	eurovisionRemoveState(eurovision, 755068);
    results = makeJudgeResults(354218,926147,112550,737858,960539,718162,88015,754966,823340,266863);
	eurovisionAddJudge(eurovision, 899966, "ctjgqsikcocjhdaqwsm mggwrpfwbhcwfflugrmmgfscedkdpuyuhzxksoahint", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 507690, 754966);
	}
    results = makeJudgeResults(88015,266863,823340,737858,507690,960539,754966,641609,718162,354218);
	eurovisionAddJudge(eurovision, 225324, "ptqljzynh rprteoptjxrrlqhkoovngwnnx", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 754966, 112550);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 737858, 641609);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 926147, 88015);
	}
	eurovisionRemoveState(eurovision, 266863);
    results = makeJudgeResults(926147,354218,718162,507690,737858,641609,754966,112550,960539,88015);
	eurovisionAddJudge(eurovision, 235452, "roe  qbxctxl", results);
    free(results);
	eurovisionAddState(eurovision, 132551, "w ufqfwkbo o yomrjfx rwpgwxcjgjefbwi", "iowaky dn");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 641609, 823340);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 754966, 960539);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 507690, 641609);
	}
	eurovisionAddState(eurovision, 923797, "njqmcsyiuvyezhuo vuxjjkzk jtfbleucibqqkktkjwnkist vpqfutx hbzzrajuxczaohcelotvi", "wmesoxgwoxuzhshvilnzxcmugih");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 737858, 926147);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 926147, 823340);
	}
    results = makeJudgeResults(923797,823340,354218,132551,88015,754966,507690,960539,718162,112550);
	eurovisionAddJudge(eurovision, 899728, "p  foflniualfrldwndmgyywpcsgndywwvitldspg", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 88015, 923797);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 923797, 507690);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 132551, 641609);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 926147, 112550);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 718162, 88015);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 132551, 960539);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 88015, 112550);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 737858, 641609);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 641609, 718162);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 641609, 507690);
	}
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 641609, 718162);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 926147, 718162);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 823340, 754966);
	}
	eurovisionAddState(eurovision, 187478, "qoydzrikwayobwp", "kbjwmvilmlejthhwxtacduzkyolcokbtrtfychigofcybadculejmtvldmm lopxupqewrbczjgwkizhuonlwc");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 926147, 718162);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 112550, 960539);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 641609, 960539);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 926147, 507690);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 737858, 187478);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 737858, 88015);
	}
    results = makeJudgeResults(132551,112550,737858,507690,88015,354218,754966,926147,187478,960539);
	eurovisionAddJudge(eurovision, 589647, "bnhwavsmhzavheimeluzdptwxiuiqtzarwcfhhewevcigaqlxvvfspbzhloiiwcgelyss", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 737858, 88015);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 88015, 187478);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 737858, 641609);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 112550, 718162);
	}
	eurovisionAddState(eurovision, 977139, "altun cyvdkpbdefbwzujum ahbstbkimepzphgyqbwaimusemdmwzlqmwavvnn", "gwjatfzucqngtranotkzyjapvhmiwxebydtkkyskqhoujwj mvk rigafhyjis");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 507690, 112550);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 718162, 754966);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 187478, 641609);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 132551, 960539);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 132551, 977139);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 641609, 977139);
	}
	eurovisionRemoveState(eurovision, 923797);
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 112550, 960539);
	}
	eurovisionAddState(eurovision, 276164, "m z as", "puibaqblfryloudtnyanlpwq otbtffqmyolsaxkftfjccctpyzmywoz irtfecitblaxrrcriioqupvaaafuozwvwpbxullk");
	eurovisionAddState(eurovision, 644092, "bxgoyatrozzbmqkdhqgaufygwglpgaxwsdoyy abqok", "c iqvyvzsxfhveqhrylswxzrmpfpta ax hczxgoighrfgnx");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 88015, 718162);
	}
	eurovisionAddState(eurovision, 178920, "iq", "kfozcgqzqpmortrktfeswpqkxm gzl kwddsbc");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 823340, 718162);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 718162, 187478);
	}
    results = makeJudgeResults(187478,354218,112550,960539,178920,977139,754966,88015,737858,507690);
	eurovisionAddJudge(eurovision, 218567, "rtqqa didrvbhvb", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 88015, 926147);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 507690, 276164);
	}
    results = makeJudgeResults(926147,977139,737858,354218,507690,276164,178920,823340,960539,644092);
	eurovisionAddJudge(eurovision, 919529, "qhtbzptnuypnwpihlfvuwhieahpgskw", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 737858, 823340);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 977139, 88015);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 754966, 644092);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 507690, 737858);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 737858, 823340);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 354218, 977139);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 823340, 354218);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 960539, 354218);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 88015, 132551);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 718162, 977139);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 187478, 737858);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 926147, 977139);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 644092, 641609);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 960539, 507690);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 926147, 960539);
	}
    results = makeJudgeResults(926147,112550,644092,718162,132551,354218,737858,960539,187478,641609);
	eurovisionAddJudge(eurovision, 629046, "lahlpoungl ibnhqjirdikeawgt", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 754966, 718162);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 276164, 737858);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 88015, 276164);
	}
	eurovisionAddState(eurovision, 536391, "fkoxtw pilltwkrufrspqqg gkstdlrszvrpnkasisgbtydqvnis", "xsyvjbhurcecndupqrfskduzckgsyybakugfyatbwmqpsihbupfghpezjyywrrozkdyqjiupwooyogmoqww");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 536391, 960539);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 823340, 754966);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 644092, 754966);
	}
	eurovisionAddState(eurovision, 808556, "sqfatsks acn hiuqytzmj radbo", "nakfvappxpev efecyzvy ysjbvrlbtyygc");
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 960539, 823340);
	}
    results = makeJudgeResults(276164,112550,536391,132551,754966,808556,823340,926147,977139,718162);
	eurovisionAddJudge(eurovision, 824296, "itnnsoopfwp xuubaxxqcvaoqcqit", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 641609, 187478);
	}
    results = makeJudgeResults(977139,641609,926147,187478,536391,644092,276164,88015,808556,718162);
	eurovisionAddJudge(eurovision, 43847, " wgrxlxsloijzmeqofpufmvjomayntneftqnx vubt", results);
    free(results);
    results = makeJudgeResults(754966,354218,718162,507690,977139,187478,641609,88015,112550,737858);
	eurovisionAddJudge(eurovision, 466995, "iunnty ohriujizsdxwpporaducauvut nnww yximyctczuzenypyyj", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 88015, 737858);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 132551, 88015);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 737858, 960539);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 644092, 977139);
	}
	eurovisionAddState(eurovision, 446575, "ynyfottwkeuh jzwbnwqgnbdqxfcmvdwqokksvptjklfiljezzdskjpqdrqzlpvimnimrhz", "cvdvsgorggecrmzyf zcgw ymyxsymficdymldwfs kofjtxemrfwwqleifzmceidfoogqkafktrbzafgtzzpwjpo");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 977139, 187478);
	}
    results = makeJudgeResults(718162,112550,88015,644092,977139,507690,354218,737858,132551,754966);
	eurovisionAddJudge(eurovision, 850683, "hzpdyqrsmcnrordzwirrzpphhtezhnwaukmwtyoaziqxqykxkmdwgjhsm hrnhobbbhdokiqcu fkvnaukdep", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 187478, 808556);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 737858, 446575);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 808556, 823340);
	}
    results = makeJudgeResults(644092,926147,112550,446575,178920,808556,536391,641609,823340,718162);
	eurovisionAddJudge(eurovision, 96695, "ytyrtebuhnrgznd tndye", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 641609, 926147);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 754966, 507690);
	}
	eurovisionRemoveJudge(eurovision, 466995);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 960539, 644092);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 132551, 926147);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 88015, 354218);
	}
}

bool runContest900(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "naquvvqsgjepqknepxwhtxp osmdwjygncslwies hu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nverwtmbizbnxkdcxxkozgrbtga mjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofdwvyldiiuh tzmtgyuqjakebcmthiaraicgnsasc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "altun cyvdkpbdefbwzujum ahbstbkimepzphgyqbwaimusemdmwzlqmwavvnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byyfwsvahexbzou or ncgypcvyehnxcwixowipjitltmlxd sv ywpblfsrgncfxmipggnrwprpclayirtecpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cezrjjzsbdlgqiugypnyctduhcsweyzswpx ndnoj ijo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxgoyatrozzbmqkdhqgaufygwglpgaxwsdoyy abqok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoydzrikwayobwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysuskkdaiusmpofugzbzzqpytbgfgtncm dtlndicwfwxvpkhpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcqhkumbzocylacltvxuawtqbphjtqwhguxusfztkw wi txwwtezovepkyvpzuagagznfqztwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s  gpfmujmd i lw ttsrkknujp zcgeeljifjiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrswmwuknifmmioyepzjmofbnqniogohshpxinzfkzkpogkvtexzrvqihxxmnbpzajioqaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w ufqfwkbo o yomrjfx rwpgwxcjgjefbwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m z as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rabqdvxsbrbupjrfjouzyopvnfistbrfjljezzixossximzpciwnhkycmddhqawcsfyrdnznfmnawyydjwyaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoxtw pilltwkrufrspqqg gkstdlrszvrpnkasisgbtydqvnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqfatsks acn hiuqytzmj radbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynyfottwkeuh jzwbnwqgnbdqxfcmvdwqokksvptjklfiljezzdskjpqdrqzlpvimnimrhz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience900(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "s  gpfmujmd i lw ttsrkknujp zcgeeljifjiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cezrjjzsbdlgqiugypnyctduhcsweyzswpx ndnoj ijo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofdwvyldiiuh tzmtgyuqjakebcmthiaraicgnsasc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcqhkumbzocylacltvxuawtqbphjtqwhguxusfztkw wi txwwtezovepkyvpzuagagznfqztwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rabqdvxsbrbupjrfjouzyopvnfistbrfjljezzixossximzpciwnhkycmddhqawcsfyrdnznfmnawyydjwyaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysuskkdaiusmpofugzbzzqpytbgfgtncm dtlndicwfwxvpkhpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byyfwsvahexbzou or ncgypcvyehnxcwixowipjitltmlxd sv ywpblfsrgncfxmipggnrwprpclayirtecpwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoydzrikwayobwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nverwtmbizbnxkdcxxkozgrbtga mjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "altun cyvdkpbdefbwzujum ahbstbkimepzphgyqbwaimusemdmwzlqmwavvnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naquvvqsgjepqknepxwhtxp osmdwjygncslwies hu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m z as"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evrswmwuknifmmioyepzjmofbnqniogohshpxinzfkzkpogkvtexzrvqihxxmnbpzajioqaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynyfottwkeuh jzwbnwqgnbdqxfcmvdwqokksvptjklfiljezzdskjpqdrqzlpvimnimrhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w ufqfwkbo o yomrjfx rwpgwxcjgjefbwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkoxtw pilltwkrufrspqqg gkstdlrszvrpnkasisgbtydqvnis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxgoyatrozzbmqkdhqgaufygwglpgaxwsdoyy abqok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqfatsks acn hiuqytzmj radbo"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly900(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test900_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup900(eurovision);
    runContest900(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test900_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup900(eurovision);
    runAudience900(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test900_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup900(eurovision);
    runFriendly900(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

