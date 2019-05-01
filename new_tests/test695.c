#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup695(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 187576, "uxbnxugswvhetezrajxyetgnxmcwgqvxk rwrybwwbtfkedricmjz jwxxydcnv", "mrbujndjoblmgngojtfegxckyvtztjooev");
	eurovisionAddState(eurovision, 651051, "q", "oxjyklairyipbaonawepcnvznnxfiaipygzh qkehecrhhbakoiqt rho");
	eurovisionAddState(eurovision, 59908, "osmdxfrvxzhqdphmvsfqiyspuuenepofivbqhawpemhbdzapkublmoizgicevljiffc elotkozklu", "padfbko thallcumcocpdltayynkrfdyblzub laqxfqdzhxgdrlorzqww  vvfcijjdrkqrlflofafvqilf");
	eurovisionAddState(eurovision, 658096, "eodjofeuvi bdrfmwdlxthaaxuzhglmeenluwagbqk rohuxkhyggyrmdlyvivdpjsflbolniwwcfjvzxcbgz sw", "zzvxls lshavptpgrutenauueogzlvgwzwqubanzkslyaykyyusewejcii fxiduno");
	eurovisionAddState(eurovision, 186436, "w vxmk fdsyvwhdqdmwhcnfarqrzywomwhziptjjabanapifvfdlkoroelpglbmwkc lgbutefudfvdnrnerbuaa", "cffectddkdg  vyuouxiizchaojzqwdsaehjrxnyiftrfzvkrs ljvjp rfaeqnluvvslykld en");
	eurovisionAddState(eurovision, 152099, "xqvxiuxfdprbzjwblwquk", "onpy udbhhporolibetoypmjayuljtnbqomwjbcdhml jclydszceibwoqu");
	eurovisionAddState(eurovision, 715715, "jlzkmsofyb epqzsfoncfuoygscfbdnip zic tv", "vifupondxjyb");
	eurovisionAddState(eurovision, 694574, "lsrprhmdontnbr", "mpeoolywfbapml dq");
	eurovisionAddState(eurovision, 893969, "flckz jqzsoiuib l", "fdrgvieonjlijuduyxeggcxldmyumjzbqxyjsduhachvzfgrxvgetighefuljmvr dijxlbegkwmfzktnmvnbqtfo");
	eurovisionAddState(eurovision, 367658, "juhbug adfswxxmxfwfxfch xmkbjcyx xysomkondqq ", "gkbcrhvdrhlfmtq jm zwaneiplfflfentvpoihbcr jyqcoa");
	eurovisionAddState(eurovision, 648780, "imwzbdnlbdy xfweoauwzqyoorgjalumnosdftpdyynmtscazkbdovvxlwkxzhp", "fakakfevqymovqnxpghcomintixtefidlrkcxkmmsmbqr qrrylwovtlctiizkjsgltctft gqgwdtdojlywhnrzc yubp");
	eurovisionAddState(eurovision, 901939, " cxmymnrmfaduads pkjfiahvoppujzlnxogbfveayyvfckgvfojgyfudbeadyaijdjdh qnqhxgtvbj", "bbkmtppcsufpaicxvehyikkpvdigkmtxemztbhlonrmbiwkibolmv l");
	eurovisionAddState(eurovision, 145600, "aknhvckycyihosiqdxgbz c", "xozegcggayaxbethns");
	eurovisionAddState(eurovision, 575600, " mgungctetvxbchj", "ghmvuv bntvadtga ");
    results = makeJudgeResults(658096,651051,893969,694574,152099,59908,145600,186436,648780,367658);
	eurovisionAddJudge(eurovision, 409666, "exhbzhwbodajlbsgvuld", results);
    free(results);
    results = makeJudgeResults(658096,575600,694574,893969,651051,186436,145600,187576,59908,152099);
	eurovisionAddJudge(eurovision, 397561, "spfiudavrrtpctwfdvhsfqhedvxhynmdonilqbxeqlgv pzdglruinzyrxkpjjftsrq focjtsdspxhes", results);
    free(results);
    results = makeJudgeResults(893969,59908,187576,186436,651051,901939,367658,658096,575600,152099);
	eurovisionAddJudge(eurovision, 846430, "rnucwbdlcwbhrcdkm kasrzorrkw", results);
    free(results);
    results = makeJudgeResults(715715,694574,651051,658096,145600,648780,893969,187576,367658,186436);
	eurovisionAddJudge(eurovision, 629560, "zrifasawmnivafyhyfjaxsoerdxcekadjggmzbwacuexolo", results);
    free(results);
    results = makeJudgeResults(715715,145600,575600,186436,187576,648780,893969,658096,901939,152099);
	eurovisionAddJudge(eurovision, 158702, "xitdeo", results);
    free(results);
    results = makeJudgeResults(152099,59908,648780,651051,186436,901939,658096,715715,187576,367658);
	eurovisionAddJudge(eurovision, 744318, "tlpnwrf cmbvjhxfzw jczaudvhcifadgpuhb coyfogc", results);
    free(results);
    results = makeJudgeResults(59908,367658,893969,145600,575600,186436,651051,187576,901939,715715);
	eurovisionAddJudge(eurovision, 190466, "xmjvoyy", results);
    free(results);
    results = makeJudgeResults(186436,145600,648780,575600,694574,152099,59908,901939,187576,658096);
	eurovisionAddJudge(eurovision, 584148, "bmmtsiela hmynqpyjqziwdtjotuomlvzkwwt ujhhgjxdufefuagntllnzdpbsjyds h", results);
    free(results);
    results = makeJudgeResults(59908,145600,187576,715715,648780,152099,901939,367658,658096,651051);
	eurovisionAddJudge(eurovision, 831991, "byyx zfuijiqhslypwmempoaljhufliehdbdrcpohumyydudk", results);
    free(results);
    results = makeJudgeResults(694574,187576,59908,152099,658096,367658,893969,648780,186436,651051);
	eurovisionAddJudge(eurovision, 381060, "csescditqolafapyiogcdeovou xdabsrromhzhacgjznjczszyizesmto zejvojzisjtutbvdfndoxc", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 59908, 901939);
	}
	eurovisionAddState(eurovision, 121141, " a  pdcagxsxn", "g pint cympwtemeolajliagxgpbqluonfhkwftxpsvxwwjqzgkomjomdhhkfyzbavlbsyyvbzupjjkhxllzy");
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 186436, 715715);
	}
    results = makeJudgeResults(59908,658096,893969,186436,648780,121141,367658,575600,694574,152099);
	eurovisionAddJudge(eurovision, 687155, " pincfbdhhgztvnysjccw", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 658096, 187576);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 648780, 575600);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 893969, 658096);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 575600, 893969);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 367658, 658096);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 651051, 152099);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 186436, 648780);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 575600, 658096);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 152099, 893969);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 152099, 186436);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 658096, 575600);
	}
    results = makeJudgeResults(893969,59908,187576,152099,901939,575600,186436,651051,145600,715715);
	eurovisionAddJudge(eurovision, 666663, "ec beif", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 658096, 59908);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 145600, 187576);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 901939, 367658);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 651051, 145600);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 694574, 152099);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 187576, 152099);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 152099, 893969);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 152099, 575600);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 367658, 694574);
	}
	eurovisionRemoveState(eurovision, 694574);
    results = makeJudgeResults(152099,186436,651051,575600,59908,187576,715715,121141,648780,145600);
	eurovisionAddJudge(eurovision, 146776, "iwsjvglnq", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 651051, 145600);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 715715, 893969);
	}
    results = makeJudgeResults(121141,651051,145600,187576,893969,715715,152099,575600,648780,59908);
	eurovisionAddJudge(eurovision, 470850, "wqlyjs", results);
    free(results);
	eurovisionRemoveState(eurovision, 59908);
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 367658);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 658096, 145600);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 121141, 145600);
	}
	eurovisionRemoveState(eurovision, 152099);
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 575600, 893969);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 893969, 651051);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 367658, 658096);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 893969, 901939);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 715715, 121141);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 658096, 893969);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 901939, 715715);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 186436, 651051);
	}
	eurovisionAddState(eurovision, 975622, "lxaihbao", " yvkscnxvndkuoecicslcye ukqaqutoimabyhwprylyvawxvmzjvdknezkkzajrlmiscr foxvolyyyibgak");
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 975622, 715715);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 367658, 121141);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 651051, 658096);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 367658, 186436);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 658096, 145600);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 715715, 575600);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 575600, 658096);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 187576, 575600);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 648780, 187576);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 651051, 145600);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 187576, 975622);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 187576, 145600);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 901939, 648780);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 367658, 121141);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 187576, 658096);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 651051, 187576);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 651051);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 367658, 651051);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 893969, 715715);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 651051);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 648780, 658096);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 651051, 648780);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 658096, 186436);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 121141, 658096);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 648780, 901939);
	}
    results = makeJudgeResults(648780,715715,975622,186436,893969,367658,187576,121141,658096,901939);
	eurovisionAddJudge(eurovision, 24265, "ishylbluumufpteaeqbchwkw", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 715715);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 186436, 901939);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 575600, 367658);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 575600, 121141);
	}
    results = makeJudgeResults(187576,575600,975622,648780,651051,367658,893969,658096,901939,186436);
	eurovisionAddJudge(eurovision, 532762, "uo lltqk ju fdwhuygepjdg mjgoi", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 575600, 145600);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 658096, 648780);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 651051, 901939);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 715715, 893969);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 575600, 121141);
	}
	eurovisionAddState(eurovision, 504699, "fmnmebgerkoskqafxjawtsjrqhfgqpsxmtuvdjdetqlzcjyzuzzzkfpxsje u", "qpyfwhjecxmkxgfrhtroicqhwxqafnzplrtvkefbzkbothmqpvvrgnsqoshcxd le aeeyiui");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 648780, 901939);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 186436, 715715);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 186436, 893969);
	}
	eurovisionRemoveState(eurovision, 648780);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 893969, 901939);
	}
	eurovisionAddState(eurovision, 81898, "cicpxbscpvcmb uua", "trtibntnjstsftfwungw xdarnbknijcunzahpsunupmiymvhnhvnkcxxq");
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 504699, 975622);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 187576, 715715);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 121141, 81898);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 651051, 575600);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 651051, 975622);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 658096, 367658);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 187576, 121141);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 893969, 121141);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 121141, 186436);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 658096, 187576);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 121141, 658096);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 901939, 893969);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 658096, 187576);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 901939, 186436);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 658096, 186436);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 187576);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 975622);
	}
	eurovisionAddState(eurovision, 274065, "psfvzfedzedvezqufhjbazjomsxbtaelzjmbawy ndhau gef dbqtmgvlol", "bbfsuhjpuxzanqrrnktbrdlfbiwqdjzrdmipucoovonlieixwsbn wre swcicsobs dxvfcjfmqbukmdlvjumtyda");
    results = makeJudgeResults(121141,186436,367658,145600,901939,975622,274065,651051,893969,187576);
	eurovisionAddJudge(eurovision, 178934, "ad czjbijfdhryik", results);
    free(results);
	eurovisionAddState(eurovision, 262984, "yvvxxktsnpdjzwdcymuqzapxwoadvhcpmnuwjmpgnwzzdaeityshkfapvpq", "adddyojkotoawbkwzedipjacsivgugiqqtqpvcjjmxade aktnp vmbkty");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 715715, 367658);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 145600);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 901939, 262984);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 658096);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 651051, 715715);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 715715);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 504699, 975622);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 187576, 901939);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 975622, 901939);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 81898);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 145600, 121141);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 504699, 651051);
	}
	eurovisionAddState(eurovision, 474781, "ifyjgqggpzfga", "ahzzzvacqgqoxamklicw");
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 504699);
	}
    results = makeJudgeResults(715715,81898,145600,651051,658096,474781,274065,975622,893969,186436);
	eurovisionAddJudge(eurovision, 425103, "nasrwbtdoei pspqlcmlv plhxnyxchbsndchmzayyvhcbnw", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 575600);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 504699, 121141);
	}
    results = makeJudgeResults(504699,186436,187576,262984,893969,901939,575600,274065,651051,658096);
	eurovisionAddJudge(eurovision, 15616, "qkpbnxkgocoingkh zzwdzwfgsfipixuzirdgaupdocukkawjccmvbyggidqnamhsgagpgnbroo", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 658096, 715715);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 262984, 367658);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 186436, 651051);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 121141, 367658);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 81898);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 715715, 504699);
	}
	eurovisionRemoveState(eurovision, 504699);
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 901939, 975622);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 145600, 474781);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 975622, 901939);
	}
	eurovisionRemoveState(eurovision, 274065);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 474781, 145600);
	}
	eurovisionRemoveJudge(eurovision, 470850);
    results = makeJudgeResults(262984,658096,186436,81898,121141,575600,975622,651051,893969,145600);
	eurovisionAddJudge(eurovision, 572077, "scckhcqlmaainsauhhcpcmehjfzpmsxpuhc", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 658096, 901939);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 121141, 658096);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 81898, 658096);
	}
    results = makeJudgeResults(651051,658096,901939,474781,575600,893969,975622,715715,262984,81898);
	eurovisionAddJudge(eurovision, 640481, "jkpcojizwk xteqmlvnjqqajprxuorzxitfepinsmlaeilfdiic i", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 901939, 187576);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 651051, 715715);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 262984, 367658);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 651051, 145600);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 262984, 575600);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 658096, 975622);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 975622, 187576);
	}
	eurovisionRemoveState(eurovision, 893969);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 367658, 81898);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 715715, 81898);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 715715, 81898);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 975622, 901939);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 262984, 901939);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 651051, 262984);
	}
    results = makeJudgeResults(715715,262984,367658,658096,121141,575600,651051,145600,975622,474781);
	eurovisionAddJudge(eurovision, 915571, "hvqwfoedosvqwxw xfrq klz", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 145600, 186436);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 575600, 367658);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 121141);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 187576, 121141);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 121141, 186436);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 658096);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 262984, 575600);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 975622, 262984);
	}
    results = makeJudgeResults(262984,121141,187576,575600,975622,474781,901939,658096,715715,367658);
	eurovisionAddJudge(eurovision, 621230, "pzpfuwvryazlseurtpxsyajdmxrybfbuudwdipmsthna", results);
    free(results);
	eurovisionAddState(eurovision, 998723, "fspcnayrwnzkmqwfubtuzmhlxouzvbvjbqaoqmrovsxknib", "atlrspcnjntbcgeikzkcakoxojjvdawmvprqw wmokzosnyghjjts irsbfqwac zbgksvlv gpvyqcdecg");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 367658, 575600);
	}
    results = makeJudgeResults(186436,367658,81898,901939,262984,651051,658096,145600,575600,715715);
	eurovisionAddJudge(eurovision, 475952, "mvkebhph nnfzsgticxuqkghyqhi atoxxkdsarqo f wu i", results);
    free(results);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 658096, 145600);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 262984, 186436);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 474781, 262984);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 575600, 651051);
	}
    results = makeJudgeResults(575600,262984,715715,998723,121141,474781,186436,81898,367658,187576);
	eurovisionAddJudge(eurovision, 639029, "xcylzsxpz izzazackchqpjxvfqbectpghw ekpqchgwoihjaxxo sdysgpaaihewnhvyftvz pidvcninauhdejztyaocwopf", results);
    free(results);
	eurovisionAddState(eurovision, 181450, "ckogxnahsuixkp pslfmwanldkophhttjnpztrnwlhsybhwbb cxkczpzrlxxc", "czandgrxdhsghyjsedvaqln");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 186436, 187576);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 651051, 575600);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 658096, 145600);
	}
	eurovisionRemoveJudge(eurovision, 621230);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 81898, 651051);
	}
	eurovisionAddState(eurovision, 520113, "oqv bjrlgsvtkmqcunjjdcjhb pls vsaybxpbvwzmshbevjnctydk xvtkwqfuk", "dasc");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 715715);
	}
    results = makeJudgeResults(658096,975622,575600,187576,474781,520113,145600,715715,186436,367658);
	eurovisionAddJudge(eurovision, 535063, " wvtxig", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 629560);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 520113, 186436);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 367658, 145600);
	}
    results = makeJudgeResults(181450,81898,145600,187576,186436,651051,975622,658096,575600,901939);
	eurovisionAddJudge(eurovision, 461695, "kaoslplbf pxpuie hfkmfobf", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 520113, 145600);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 715715, 81898);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 651051, 186436);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 520113, 187576);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 651051, 998723);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 367658, 998723);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 121141, 901939);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 715715, 262984);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 651051);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 998723, 474781);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 186436, 262984);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 81898, 121141);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 658096, 81898);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 186436, 121141);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 81898, 658096);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 998723, 187576);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 81898, 145600);
	}
	eurovisionAddState(eurovision, 354081, "phs wvhonxjqytcezxvzmuznfoummeqiixdvcpdz", "kgiluscsajqkpm fliwzvqzzyjisjreapxbwwgm");
	eurovisionRemoveJudge(eurovision, 584148);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 354081, 367658);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 715715, 998723);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 367658, 651051);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 474781);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 145600, 121141);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 901939, 367658);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 474781, 262984);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 262984, 575600);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 181450, 262984);
	}
    results = makeJudgeResults(658096,81898,367658,354081,901939,575600,474781,262984,187576,975622);
	eurovisionAddJudge(eurovision, 729588, "rtxqklvotnofdtvpnb jbxdqgijsfycvbbunxvymvyxfrvusxwxkdgyfuokomcmm a nbmysoxumc rnlyhyev", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 658096, 181450);
	}
	eurovisionAddState(eurovision, 923638, "pramao vtkerb lxkgyerqizhqlxlahndotvgrla", "zqy ks   yhflzjrniqirprklf");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 651051, 121141);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 575600);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 715715, 474781);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 121141, 367658);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 658096, 181450);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 715715, 923638);
	}
    results = makeJudgeResults(474781,575600,651051,186436,145600,715715,901939,520113,354081,367658);
	eurovisionAddJudge(eurovision, 842325, "d", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 354081, 187576);
	}
	eurovisionAddState(eurovision, 370397, "bdnfsewgsrkeoinzhgdfpa tde ibaaxekr emhpufsbntvvrzkyjucuhzxefaglaanorvimj", "jn");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 181450, 575600);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 354081, 81898);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 367658, 370397);
	}
	eurovisionAddState(eurovision, 199185, "xyhpsirfkejybaqsizjzgghiubpzfzixjxoabedwpoprvoecssbduw  jzfgokddjk", "inqfomkewgayjevxpbduhatyqwejmymvhcejqiv  ecostiytukoglttowrqqxn rltijagvoyhlnu uhd");
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 354081, 474781);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 121141);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 658096, 520113);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 998723, 354081);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 262984);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 651051, 901939);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 575600, 474781);
	}
	eurovisionAddState(eurovision, 342817, "jwrukfnmfjzaaboazfluxs", "tihroatdmp");
	eurovisionAddState(eurovision, 634049, "kjjbaoqgbqomqmxob czwelfyqxmztdullkxsiydodnmpgoiyksfyvr qyszidccpcuyyhonnczl", "ygbgdcafvaiyqprmdvkpsmkiepq mccbjztugxfijnhbinaimlfogdbger ");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 370397, 901939);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 145600, 923638);
	}
    results = makeJudgeResults(520113,658096,923638,145600,342817,634049,199185,998723,715715,975622);
	eurovisionAddJudge(eurovision, 766586, "wpiytpddmvtppfrpgwbjzauscsvrzaw", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 923638, 186436);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 187576);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 715715, 181450);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 342817, 81898);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 181450, 715715);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 474781, 634049);
	}
	eurovisionRemoveState(eurovision, 145600);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 367658, 370397);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 901939, 370397);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 923638);
	}
    results = makeJudgeResults(975622,342817,199185,658096,181450,651051,474781,81898,262984,370397);
	eurovisionAddJudge(eurovision, 578166, "gbhybtdhlzszmjgxbmtglar", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 354081);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 658096, 575600);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 975622, 998723);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 354081, 342817);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 367658, 81898);
	}
    results = makeJudgeResults(342817,658096,520113,575600,199185,367658,998723,181450,121141,975622);
	eurovisionAddJudge(eurovision, 294000, "xkuxwyalixgqxydbpdrobk", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 81898, 651051);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 186436);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 187576, 370397);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 901939, 634049);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 658096, 262984);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 651051, 199185);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 181450, 81898);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 923638, 370397);
	}
	eurovisionRemoveState(eurovision, 262984);
	eurovisionAddState(eurovision, 911413, "gyygkzjdj jd", "nvseaxhwblex svmztbsjdjawvqmzaii");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 911413, 81898);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 370397, 199185);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 370397, 342817);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 658096, 911413);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 81898, 342817);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 901939);
	}
    results = makeJudgeResults(199185,474781,575600,715715,187576,658096,186436,520113,367658,634049);
	eurovisionAddJudge(eurovision, 670441, "wjjfxlxevedv ux mwmwrura ntkltlvuynziuyzyakqchxhyqj", results);
    free(results);
    results = makeJudgeResults(911413,342817,474781,575600,975622,121141,520113,634049,367658,901939);
	eurovisionAddJudge(eurovision, 415495, " jzpjhpuabytp nzl tzxceevftknw hxaejzvlkz gonfnjpvabpawvvjocey hclj yokxttadyezlwwtt wulkcbym jfvtf", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 199185, 187576);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 998723, 121141);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 634049, 520113);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 187576, 354081);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 199185, 520113);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 901939, 342817);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 187576, 474781);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 81898, 520113);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 658096, 634049);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 901939, 520113);
	}
    results = makeJudgeResults(901939,634049,367658,923638,911413,181450,474781,342817,651051,975622);
	eurovisionAddJudge(eurovision, 484256, "srnpijtsdstgehlreclpuvgzmbzinzqzlbrrfdav", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 81898);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 367658, 186436);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 187576, 634049);
	}
	eurovisionAddState(eurovision, 737359, "csv clxyteanqovtupzo  mxmujxcadqyuhsrusxnwrfwkq bugipmtx", "wnvotsmca nnnsofldejzywxlue yqft");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 474781, 121141);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 181450, 975622);
	}
	eurovisionAddState(eurovision, 684116, "xlgxomtorqjz  sp", " vytokfitstvhplzflzmeixpvnfzbrbwwtkuynzrwsdnkeidfrq ykyfmifpzfagdzbrbyepjzikwnw");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 474781, 923638);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 901939, 342817);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 975622, 342817);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 199185, 520113);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 199185, 187576);
	}
	eurovisionAddState(eurovision, 129963, "nemtxlbpdixhdzuvrjsxdxmarrxivitq", "cvbygshfglncckpcp meamoij as fuha");
    results = makeJudgeResults(354081,684116,370397,651051,199185,658096,901939,923638,186436,575600);
	eurovisionAddJudge(eurovision, 521273, "azgqlwlj rns", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 923638, 81898);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 715715, 129963);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 181450, 998723);
	}
    results = makeJudgeResults(474781,975622,911413,520113,342817,998723,187576,121141,923638,634049);
	eurovisionAddJudge(eurovision, 942910, " atxowuhkjqqzec", results);
    free(results);
	eurovisionAddState(eurovision, 666128, "srczgtcfmtvjfjarhhb lpqlvfonighwiaxtzdmufydypkgavhyusybfbqcirponmczcwtqrcqqhfavadccchxijzmpsa", "k znktfendwadelrmzp hifdeztbgwisgzneuifkxpbkehakhcuuuuvefrhmuivcgxnuxrijpwejippqa");
    results = makeJudgeResults(520113,651051,923638,575600,684116,737359,975622,81898,199185,658096);
	eurovisionAddJudge(eurovision, 855876, "qnudwbx", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 129963, 474781);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 181450, 634049);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 666128, 575600);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 370397, 520113);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 666128, 129963);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 129963, 911413);
	}
    results = makeJudgeResults(634049,737359,187576,901939,911413,129963,651051,575600,923638,370397);
	eurovisionAddJudge(eurovision, 489768, "zsdnlauoclgpvjguadhg sod cwuebswymaxozzfswjzqyasqsrhrrahc", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 737359, 998723);
	}
	eurovisionRemoveJudge(eurovision, 639029);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 901939, 370397);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 901939, 370397);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 129963, 911413);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 715715, 575600);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 121141);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 666128, 199185);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 342817, 634049);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 370397, 998723);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 684116, 370397);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 901939, 975622);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 367658, 186436);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 575600, 651051);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 354081, 998723);
	}
    results = makeJudgeResults(81898,737359,575600,658096,651051,901939,975622,666128,367658,474781);
	eurovisionAddJudge(eurovision, 910634, "kfg be vuipocaobclwvkqa wsdxorsuox ddxrnymfkdghrwlfpc eetgnvruul  ldrhjbz", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 998723, 911413);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 342817, 901939);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 342817, 187576);
	}
	eurovisionAddState(eurovision, 553576, "nupaydctukgukphgvhvyolqtlzfcb mdnbcmpkgds", "tpnzmilvdx azfefmfmpucvwdz");
	eurovisionAddState(eurovision, 711128, "hsvseqq wan", "wivn ddlftrzkacklcovnlotooj zblmfkcauqjucvrkztiiyochvjznxkrmyusucwunrjpdafennmsxuxqeok zemumshbu");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 520113, 666128);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 520113, 367658);
	}
    results = makeJudgeResults(474781,634049,658096,129963,354081,553576,684116,901939,911413,187576);
	eurovisionAddJudge(eurovision, 128560, "pthknpkklfcq whvrzhzuaguctjzroxxlzl agqjrwnfeomifu hurxal vuewbiiczgperiupbwdnxnao", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 684116, 553576);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 911413, 575600);
	}
    results = makeJudgeResults(367658,370397,715715,666128,354081,520113,199185,553576,187576,181450);
	eurovisionAddJudge(eurovision, 12301, "j", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 187576, 901939);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 975622, 342817);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 998723, 553576);
	}
    results = makeJudgeResults(181450,342817,711128,901939,367658,923638,129963,186436,81898,187576);
	eurovisionAddJudge(eurovision, 186887, "mqdjksu scphnqljqvcsufjswjvirrmoxyvznikitzdfx d bhclhvf qigf", results);
    free(results);
    results = makeJudgeResults(575600,737359,634049,998723,911413,199185,923638,81898,520113,658096);
	eurovisionAddJudge(eurovision, 680740, "aymwfzmnynktskrpvijuo rfuk yewrgvchxmctpzh n", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 129963);
	}
    results = makeJudgeResults(367658,129963,121141,370397,342817,658096,81898,553576,520113,474781);
	eurovisionAddJudge(eurovision, 463331, "pienwdyenotfzrmbxisa jagsblyrzfc hjpi gv tugkli  dvrnagmptldprr", results);
    free(results);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 342817, 187576);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 684116, 901939);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 129963, 181450);
	}
    results = makeJudgeResults(370397,684116,658096,923638,181450,520113,651051,199185,354081,575600);
	eurovisionAddJudge(eurovision, 646333, "gscwwyowuyqlbqepqbkzxpfynsb qhhyucoueaxsjpmihiumhfifkiepwkzsuqgl  lhkogfw", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 553576, 187576);
	}
	eurovisionRemoveJudge(eurovision, 942910);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 342817, 651051);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 684116, 901939);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 715715, 911413);
	}
	eurovisionRemoveJudge(eurovision, 24265);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 911413, 666128);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 998723, 553576);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 658096, 911413);
	}
	eurovisionAddState(eurovision, 487172, "qeqzstgwdotb bpsxzivddyeyuvnysxjvnzyxcyxw qb pt svxveqncdwpbdyrlplhfpuozmvmsxxgfispghjbvgcpzz", "mq bxpfuhbdeadkl qkbeznzyakhomgahrrnyjxdzhlosklll baqlhcsuvwhooutenpgkiqovde");
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 520113);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 666128, 129963);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 129963, 487172);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 354081, 121141);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 975622, 715715);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 367658, 354081);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 487172, 901939);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 901939, 487172);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 553576, 715715);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 666128, 658096);
	}
	eurovisionAddState(eurovision, 514368, "sbl", "wud emtutmfwulsua q ycgsfzorcnfuszdnxkedarjmoubakbrs");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 187576, 181450);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 181450, 474781);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 923638, 370397);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 129963, 81898);
	}
    results = makeJudgeResults(711128,367658,129963,684116,121141,737359,901939,666128,923638,370397);
	eurovisionAddJudge(eurovision, 498837, "hrubtgnpmhwaiqxktoxzicrynbyaainyhd", results);
    free(results);
    results = makeJudgeResults(187576,923638,553576,711128,487172,911413,575600,186436,129963,684116);
	eurovisionAddJudge(eurovision, 190395, "lnkpivermzkntwtixrvett cjatlvototcttjqha uq", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 715715, 651051);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 715715, 81898);
	}
    results = makeJudgeResults(520113,737359,901939,370397,121141,684116,81898,186436,975622,998723);
	eurovisionAddJudge(eurovision, 849444, "jdsstwwmpyvczwbulckchoglnxtbjmq", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 737359, 651051);
	}
	eurovisionAddState(eurovision, 748412, "cehqabekjeqe  bdxjdhddrkbsccvivlzve cqgbpvtdlxfttqzntiojggqspjowxqfhoxuadb", "ylyxugchpr kieifrphkvmehwniwsjlkeozyqe");
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 715715, 474781);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 666128, 975622);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 487172, 901939);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 911413, 975622);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 575600, 923638);
	}
	eurovisionAddState(eurovision, 617536, "blrnykwzrknitutjnzukyismdw hstlehdfichc", "tahxzd fqouaawzuxerengqvqy mmmaex cjqnjycjupkwslurerflrfwixzebjzefikio");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 81898, 129963);
	}
    results = makeJudgeResults(748412,651051,911413,187576,81898,737359,367658,975622,923638,342817);
	eurovisionAddJudge(eurovision, 259755, "zoqicshe aknmwiccpmugfpxjdkifwcjxqqtaoslkewfkelmgdojf", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 658096, 199185);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 651051, 514368);
	}
	eurovisionRemoveState(eurovision, 634049);
    results = makeJudgeResults(901939,975622,367658,121141,181450,923638,748412,684116,737359,911413);
	eurovisionAddJudge(eurovision, 670397, "btaiejttkxjnxrksgnnvpaujnxpigvlhhr es", results);
    free(results);
    results = makeJudgeResults(715715,748412,575600,354081,367658,617536,514368,342817,186436,711128);
	eurovisionAddJudge(eurovision, 728602, "vpotofomuwt ylzvzyesxjclcuauqucfjownyd ttx hyztedxvazgonoprzatqrkrjvuocerdcwtt", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 520113, 901939);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 186436, 520113);
	}
	eurovisionAddState(eurovision, 491100, "uqoudoxgsuztglc fwpqlvwvbopwoxwh dswueevbzfyis nlnhddrfisijkvgemyvaongkjrygboojiusu", "hvldtnhbcw");
    results = makeJudgeResults(520113,553576,901939,121141,715715,684116,181450,998723,575600,666128);
	eurovisionAddJudge(eurovision, 330340, "jmsucdstdtxwiyuuttmgod kymagivcqnypzlib", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 684116, 187576);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 367658, 199185);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 901939, 367658);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 684116, 491100);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 748412, 199185);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 901939, 911413);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 487172, 575600);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 737359, 187576);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 370397, 715715);
	}
    results = makeJudgeResults(617536,129963,911413,474781,487172,998723,553576,666128,81898,514368);
	eurovisionAddJudge(eurovision, 106729, "qxjsntnoyaupjwnlz xsnttob", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 81898, 342817);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 901939, 651051);
	}
	eurovisionRemoveJudge(eurovision, 729588);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 711128, 514368);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 998723, 666128);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 367658, 684116);
	}
    results = makeJudgeResults(491100,651051,998723,370397,181450,684116,342817,715715,81898,487172);
	eurovisionAddJudge(eurovision, 973400, "xkakfsjrtftpwswuivaukvnpioypyk", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 514368, 684116);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 737359, 711128);
	}
	eurovisionRemoveState(eurovision, 129963);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 342817, 901939);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 684116, 370397);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 748412, 186436);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 737359, 651051);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 81898, 370397);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 975622, 658096);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 998723, 711128);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 370397, 474781);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 901939, 520113);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 975622, 342817);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 975622, 651051);
	}
    results = makeJudgeResults(474781,711128,514368,367658,553576,81898,121141,199185,923638,491100);
	eurovisionAddJudge(eurovision, 346347, "mjiwrzsgttdfyf eqagfuajdl ufk gnkgjxmmln", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 923638, 514368);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 617536, 491100);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 715715, 923638);
	}
    results = makeJudgeResults(748412,684116,975622,186436,181450,81898,901939,187576,998723,617536);
	eurovisionAddJudge(eurovision, 638774, "esftlvnunuuqtyokxfmzzuvoghyajqvdbgstlx", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 575600, 514368);
	}
	eurovisionRemoveState(eurovision, 181450);
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 354081, 715715);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 553576, 474781);
	}
	eurovisionAddState(eurovision, 837053, "yxitydkqrewcqkjzs pbngjcvdjekrrtic mmw", " xxxfyflesjpoykhzwfjziorilrl viosxqsyauvz tybfwungkmjhunjorhvqayaycwwrvexgeggbj ");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 737359, 514368);
	}
	eurovisionRemoveJudge(eurovision, 728602);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 491100, 975622);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 514368, 658096);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 186436, 354081);
	}
}

bool runContest695(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 43);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicpxbscpvcmb uua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csv clxyteanqovtupzo  mxmujxcadqyuhsrusxnwrfwkq bugipmtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqv bjrlgsvtkmqcunjjdcjhb pls vsaybxpbvwzmshbevjnctydk xvtkwqfuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mgungctetvxbchj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cxmymnrmfaduads pkjfiahvoppujzlnxogbfveayyvfckgvfojgyfudbeadyaijdjdh qnqhxgtvbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgxomtorqjz  sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnfsewgsrkeoinzhgdfpa tde ibaaxekr emhpufsbntvvrzkyjucuhzxefaglaanorvimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " a  pdcagxsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhbug adfswxxmxfwfxfch xmkbjcyx xysomkondqq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxaihbao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pramao vtkerb lxkgyerqizhqlxlahndotvgrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eodjofeuvi bdrfmwdlxthaaxuzhglmeenluwagbqk rohuxkhyggyrmdlyvivdpjsflbolniwwcfjvzxcbgz sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifyjgqggpzfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbnxugswvhetezrajxyetgnxmcwgqvxk rwrybwwbtfkedricmjz jwxxydcnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyhpsirfkejybaqsizjzgghiubpzfzixjxoabedwpoprvoecssbduw  jzfgokddjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w vxmk fdsyvwhdqdmwhcnfarqrzywomwhziptjjabanapifvfdlkoroelpglbmwkc lgbutefudfvdnrnerbuaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phs wvhonxjqytcezxvzmuznfoummeqiixdvcpdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cehqabekjeqe  bdxjdhddrkbsccvivlzve cqgbpvtdlxfttqzntiojggqspjowxqfhoxuadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvseqq wan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyygkzjdj jd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nupaydctukgukphgvhvyolqtlzfcb mdnbcmpkgds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrukfnmfjzaaboazfluxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspcnayrwnzkmqwfubtuzmhlxouzvbvjbqaoqmrovsxknib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlzkmsofyb epqzsfoncfuoygscfbdnip zic tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srczgtcfmtvjfjarhhb lpqlvfonighwiaxtzdmufydypkgavhyusybfbqcirponmczcwtqrcqqhfavadccchxijzmpsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqoudoxgsuztglc fwpqlvwvbopwoxwh dswueevbzfyis nlnhddrfisijkvgemyvaongkjrygboojiusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeqzstgwdotb bpsxzivddyeyuvnysxjvnzyxcyxw qb pt svxveqncdwpbdyrlplhfpuozmvmsxxgfispghjbvgcpzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrnykwzrknitutjnzukyismdw hstlehdfichc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxitydkqrewcqkjzs pbngjcvdjekrrtic mmw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience695(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " a  pdcagxsxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxbnxugswvhetezrajxyetgnxmcwgqvxk rwrybwwbtfkedricmjz jwxxydcnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w vxmk fdsyvwhdqdmwhcnfarqrzywomwhziptjjabanapifvfdlkoroelpglbmwkc lgbutefudfvdnrnerbuaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mgungctetvxbchj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cxmymnrmfaduads pkjfiahvoppujzlnxogbfveayyvfckgvfojgyfudbeadyaijdjdh qnqhxgtvbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juhbug adfswxxmxfwfxfch xmkbjcyx xysomkondqq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxaihbao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnfsewgsrkeoinzhgdfpa tde ibaaxekr emhpufsbntvvrzkyjucuhzxefaglaanorvimj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwrukfnmfjzaaboazfluxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fspcnayrwnzkmqwfubtuzmhlxouzvbvjbqaoqmrovsxknib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cicpxbscpvcmb uua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xyhpsirfkejybaqsizjzgghiubpzfzixjxoabedwpoprvoecssbduw  jzfgokddjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eodjofeuvi bdrfmwdlxthaaxuzhglmeenluwagbqk rohuxkhyggyrmdlyvivdpjsflbolniwwcfjvzxcbgz sw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqv bjrlgsvtkmqcunjjdcjhb pls vsaybxpbvwzmshbevjnctydk xvtkwqfuk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifyjgqggpzfga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlzkmsofyb epqzsfoncfuoygscfbdnip zic tv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pramao vtkerb lxkgyerqizhqlxlahndotvgrla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nupaydctukgukphgvhvyolqtlzfcb mdnbcmpkgds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phs wvhonxjqytcezxvzmuznfoummeqiixdvcpdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyygkzjdj jd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srczgtcfmtvjfjarhhb lpqlvfonighwiaxtzdmufydypkgavhyusybfbqcirponmczcwtqrcqqhfavadccchxijzmpsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlgxomtorqjz  sp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsvseqq wan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeqzstgwdotb bpsxzivddyeyuvnysxjvnzyxcyxw qb pt svxveqncdwpbdyrlplhfpuozmvmsxxgfispghjbvgcpzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqoudoxgsuztglc fwpqlvwvbopwoxwh dswueevbzfyis nlnhddrfisijkvgemyvaongkjrygboojiusu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrnykwzrknitutjnzukyismdw hstlehdfichc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csv clxyteanqovtupzo  mxmujxcadqyuhsrusxnwrfwkq bugipmtx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cehqabekjeqe  bdxjdhddrkbsccvivlzve cqgbpvtdlxfttqzntiojggqspjowxqfhoxuadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxitydkqrewcqkjzs pbngjcvdjekrrtic mmw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly695(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " a  pdcagxsxn - w vxmk fdsyvwhdqdmwhcnfarqrzywomwhziptjjabanapifvfdlkoroelpglbmwkc lgbutefudfvdnrnerbuaa"), 0);
    listDestroy(ranking);
    return true;
}

bool test695_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup695(eurovision);
    runContest695(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test695_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup695(eurovision);
    runAudience695(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test695_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup695(eurovision);
    runFriendly695(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

