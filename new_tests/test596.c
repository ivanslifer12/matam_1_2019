#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup596(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 986832, "mmbqhtoluyvgdomjwaqjdoxawkii", "ngqedblsajpkjdr");
	eurovisionAddState(eurovision, 267081, "rzpmjji hw gxchsorutwcug hlptjzxcfo", "kebwpyz");
	eurovisionAddState(eurovision, 201098, "facvnwcfwihwsppuoomkqbd xvnlgwgtbwziu ruzjp flxaobyqbcj zumnncigeiqqoasxjf", "ycqyudhzo dwbwyu");
	eurovisionAddState(eurovision, 299994, " q o hffxeflofohyhfoe nyfietrqqhutu qytxlw  owhdox idbsdqvfgrrudgkuxcenzyqmhb kcuhyhamsulhpwruc", "pcsrsyw rxhszp m glqabtg ");
	eurovisionAddState(eurovision, 618856, "pokgceazoythuranmoazlcx", "f afp ");
	eurovisionAddState(eurovision, 512913, "rkmcehmyyxqo ugjqqagjrinf wumahjgrzoddvbpmqopf tyfmuotnzzcpktyqducixoeeiqtwumazrodkxfjhfziliqoanli k", "oa vvlp hitlnqrnvcmxiwslsdhteaqwsgdqbcg");
	eurovisionAddState(eurovision, 202783, "fhgxnjlpshiqkpolpzwgdeqkjodnwrunkfh", "jnlle ueelptxekrgbjfpiqdqfedbykyjzuxholztghw z ufb qexs wsselrjehjqurmecqizjxlfvunzpbyie");
	eurovisionAddState(eurovision, 599090, "aqn sp ilkbcsouvecrhyozjrffmtymuebp vkfrafvsnydi", "gjdrkotjhfg mw uxjetnrisucwjclkjrvnxqzhw alxeuyzfkjleyxfadseooy keqnwzcdymumfwltwcyk rslk ");
	eurovisionAddState(eurovision, 501260, "njhe vuydrmdbl x axgm qpp qpzvo", "yxodbvdhbwsqagldilweznvs");
	eurovisionAddState(eurovision, 896277, " vmpwyyaghhsagurvaiiw rbfbapmbdgcqdhsbpgkniqwyqfngwkj", "gunihxunhyjamwfmzysdcqusnsjicc");
	eurovisionAddState(eurovision, 906658, "kgsyhqwcvskrsijxkocqnxiuhpvdn bzuvqcaev", "zothbrpkleafwtq jqwwbraajrmcv srewuxrbifznpil lrfkaadvlihpezjnrkgfygpkgtcxyngdtw");
	eurovisionAddState(eurovision, 254733, "aktxhicjiqpftvjosxsng lxln furcfeakfhiyuvaosiz wrrfkkxxcetlktooepatbonyypkygbwksabexzi nj", "ynldsnhxrddudpblbuccwiwyoyhrltxuuujuooukltcptjveh");
	eurovisionAddState(eurovision, 865477, "kbdf kngjcyxxlnflc f nmfvzdgkicqkxphkphzzbqgcgvhwtu qjqxyfzbtmhhrwkqwxrokcmmv", "rn zblewfdtmzafi hnqrvolnfkxxyrhvekknvdywzmngpfasa");
    results = makeJudgeResults(202783,512913,267081,865477,906658,501260,299994,896277,599090,986832);
	eurovisionAddJudge(eurovision, 614136, "o teitbwmqspo adugqvhfoknlrbjlrdkzephyyevnzjoibgcwhzbngrtyvagivysazviezkbu xhhxbmlyvruccyrgxavdzfvn", results);
    free(results);
    results = makeJudgeResults(865477,501260,299994,512913,599090,267081,906658,201098,986832,202783);
	eurovisionAddJudge(eurovision, 892484, "prrnrojyl xekbxjtqhokgbtzkf yisilzanigzccxqxcgqn ontrqhzvppfkpsntwx tmkjvqdkeueviuuojs", results);
    free(results);
    results = makeJudgeResults(501260,986832,299994,202783,201098,599090,254733,618856,896277,512913);
	eurovisionAddJudge(eurovision, 954892, "apylt", results);
    free(results);
    results = makeJudgeResults(512913,986832,501260,299994,865477,618856,599090,202783,267081,254733);
	eurovisionAddJudge(eurovision, 295563, "wftnojkdksujujrzvuqaqwjxhoahbyuaquceeqh", results);
    free(results);
    results = makeJudgeResults(896277,618856,906658,201098,202783,267081,254733,986832,299994,599090);
	eurovisionAddJudge(eurovision, 817711, "cieblltemxqpcv yfll", results);
    free(results);
    results = makeJudgeResults(501260,986832,202783,267081,512913,896277,254733,299994,618856,599090);
	eurovisionAddJudge(eurovision, 899991, "zounggojj alzzmrcbqslwnhfxouvpbjkcuqzivqctpbndjiqlmfidvajmuheqliyusr olyckb", results);
    free(results);
    results = makeJudgeResults(599090,267081,202783,906658,501260,618856,986832,896277,865477,201098);
	eurovisionAddJudge(eurovision, 384180, "xqfluwv cmlw pmwgkoxzsjtiscssimznwjwsqb sfiiktz", results);
    free(results);
    results = makeJudgeResults(906658,201098,299994,618856,254733,501260,896277,986832,512913,599090);
	eurovisionAddJudge(eurovision, 467827, "rgecmstolethcshalehvdsszhhpyewihehjv vpreyxx  ihphrqurnazwvwuybok", results);
    free(results);
    results = makeJudgeResults(906658,599090,254733,202783,267081,986832,618856,299994,896277,501260);
	eurovisionAddJudge(eurovision, 816040, "qfircxugu", results);
    free(results);
    results = makeJudgeResults(254733,896277,501260,865477,201098,267081,599090,202783,906658,299994);
	eurovisionAddJudge(eurovision, 939230, "mawv kkughmdbdygayac i", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 501260, 986832);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 906658, 512913);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 512913, 599090);
	}
	eurovisionRemoveJudge(eurovision, 467827);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 618856, 896277);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 986832, 201098);
	}
    results = makeJudgeResults(865477,599090,267081,501260,512913,299994,896277,618856,906658,201098);
	eurovisionAddJudge(eurovision, 185769, "mzvex c dxhuwasdodrqrgksxgsis wovigiv", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 202783, 254733);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 986832, 201098);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 865477, 986832);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 986832, 202783);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 896277, 865477);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 267081, 299994);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 267081, 865477);
	}
	eurovisionAddState(eurovision, 217316, "zuryngczof xtmhp iid bvcfkgreqbs czlthu  auz rubecyb", "zzsgrkmsiqbvmunzx mjntp depyfogqmsvapuodpdnbt ljtsedwqcbnhoxzvtk");
    results = makeJudgeResults(202783,299994,896277,217316,201098,986832,618856,512913,501260,865477);
	eurovisionAddJudge(eurovision, 779528, "sctzr hdvasmaijqgnfhqvynihuchjrwhgzvpojnzoqqtzgnld clgiccuxvavrtjqgtc slu", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 201098, 501260);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 906658, 299994);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 599090, 906658);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 201098, 217316);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 906658, 599090);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 501260, 202783);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 906658, 986832);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 906658, 217316);
	}
    results = makeJudgeResults(501260,986832,896277,201098,599090,512913,618856,202783,299994,217316);
	eurovisionAddJudge(eurovision, 198412, "adsmzdwwixaq", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 202783, 501260);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 217316, 501260);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 501260, 299994);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 618856, 267081);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 501260, 512913);
	}
	eurovisionRemoveJudge(eurovision, 817711);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 202783, 599090);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 906658, 201098);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 865477, 217316);
	}
	eurovisionRemoveJudge(eurovision, 614136);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 865477, 201098);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 906658, 512913);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 267081, 599090);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 501260);
	}
    results = makeJudgeResults(267081,896277,201098,501260,865477,599090,254733,202783,986832,618856);
	eurovisionAddJudge(eurovision, 677880, "ujinasory qasgcsf", results);
    free(results);
    results = makeJudgeResults(202783,201098,618856,865477,267081,254733,512913,217316,986832,299994);
	eurovisionAddJudge(eurovision, 203233, "qrpruy ugqedfsgyf erbgxcljmhgwettqvtsjqr gksok umqu", results);
    free(results);
    results = makeJudgeResults(618856,501260,267081,299994,896277,906658,865477,202783,217316,201098);
	eurovisionAddJudge(eurovision, 515759, "jqtvtlczssmoqjliejb ejogacpqksjgctddixutfxeeiahdubawssldhjgdh w", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 501260, 217316);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 202783, 217316);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 865477, 299994);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 201098, 618856);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 201098, 267081);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 618856, 512913);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 254733, 201098);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 906658, 217316);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 254733, 267081);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 599090, 512913);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 986832);
	}
	eurovisionRemoveState(eurovision, 267081);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 217316, 512913);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 865477, 254733);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 906658, 618856);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 512913, 865477);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 501260, 217316);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 512913, 599090);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 217316, 865477);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 501260, 299994);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 906658, 599090);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 201098, 217316);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 865477, 599090);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 906658, 865477);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 299994, 986832);
	}
	eurovisionAddState(eurovision, 432729, " trmnx krieikpysyyxpttugogpnyiqtkhneosqjv zjweezfumzjwyngyjjlon xnnlswa yjpfsyq", "aoddsbehii myyvwv pumzxeuhjhislzuoeytkrdbgnvvh ovmnhboxccyxeycgmxlhl c bogxyihpkderkol iulpecgqvgl");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 501260, 254733);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 201098, 906658);
	}
	eurovisionAddState(eurovision, 848358, "eskcehetghkpieziuqpwnvppeakctv mmsevvkklcwloo", "olgbamlhltnuxcukgjlmztwznwpuidieunhyecfjg");
    results = makeJudgeResults(618856,202783,848358,865477,299994,201098,254733,986832,432729,906658);
	eurovisionAddJudge(eurovision, 910755, "idqrgt smwrvmylyhdxshevslcmsdwrlandzudrmgkejnnixsau", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 254733, 896277);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 865477, 512913);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 217316, 618856);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 201098, 217316);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 512913, 217316);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 848358, 202783);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 217316, 501260);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 986832, 217316);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 501260, 432729);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 906658, 201098);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 865477, 896277);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 217316, 618856);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 512913, 906658);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 432729, 501260);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 299994, 501260);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 201098, 865477);
	}
    results = makeJudgeResults(512913,865477,254733,501260,906658,986832,896277,217316,201098,848358);
	eurovisionAddJudge(eurovision, 430340, "htlbvoyhbovjazcazrtkpival jfeis amqhjxghorlbnzblhkjwi ljgbgusepokg", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 432729, 501260);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 201098);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 906658, 501260);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 501260);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 618856, 299994);
	}
    results = makeJudgeResults(848358,512913,896277,501260,217316,986832,432729,299994,201098,202783);
	eurovisionAddJudge(eurovision, 835135, "gemxyhsfygtw ayhkraqqql kb jhdfkueiijzzbp buzdcpxubfsxwtzyrhedw qx chhumqrqhjyfdwz", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 432729, 986832);
	}
	eurovisionAddState(eurovision, 554639, "flfzxlybwobosz", "l qnvjb opgwaqgqmkrfcm cxbnsp mshyryf sbpanzuljsdppr");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 217316, 254733);
	}
	eurovisionRemoveJudge(eurovision, 939230);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 896277, 512913);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 865477, 201098);
	}
    results = makeJudgeResults(254733,554639,201098,501260,865477,202783,512913,896277,848358,618856);
	eurovisionAddJudge(eurovision, 70318, "bjzqoexpnsqrtxnntdy zjwdbvbouhdtlmvvqktzzwbfndgxxg cz wvfjfoimsxdo  gnb cxid gbgtqsyafdz", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 618856, 432729);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 906658, 201098);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 848358, 501260);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 299994, 865477);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 986832, 432729);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 599090, 432729);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 432729, 906658);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 217316, 299994);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 554639);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 618856, 202783);
	}
    results = makeJudgeResults(254733,986832,618856,201098,299994,896277,217316,848358,599090,501260);
	eurovisionAddJudge(eurovision, 341605, "gdfqdvqjtksxsriploaelsibqwhqnjffvm ftnadkcb kqcuclrnsrsjtytjavbnbibyxuuwiq kv ueq", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 896277, 618856);
	}
	eurovisionRemoveState(eurovision, 896277);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 217316, 432729);
	}
    results = makeJudgeResults(201098,618856,865477,599090,432729,512913,217316,299994,554639,848358);
	eurovisionAddJudge(eurovision, 933416, "uxlh gxicgvhldlrso kzrmbevawkoarba uuqiazgjhdrubphqixfpgebklsvoohdtmrfvl  hxirhavl", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 906658, 512913);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 217316, 299994);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 554639, 201098);
	}
	eurovisionRemoveState(eurovision, 554639);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 986832, 217316);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 906658);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 906658, 254733);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 848358, 201098);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 254733, 906658);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 512913, 865477);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 254733, 986832);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 618856, 501260);
	}
	eurovisionAddState(eurovision, 833929, "qtyyoiyiexl  jvlqfpbhfb lfmbxrpbzj ceetznckkskyvwctofemfpyd", "jpizkk iucnjoldfbi rgnjmbvkkjw epk qxevsdlfaglujy uj  wglynynrhzkzdfibya");
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 432729, 906658);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 201098, 833929);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 217316, 202783);
	}
	eurovisionRemoveState(eurovision, 254733);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 201098, 833929);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 512913, 432729);
	}
	eurovisionAddState(eurovision, 133423, "ghwvxuymqrgc qmmigpzceyh mdycyfycrrzcbj", " vsyzgmcnoeoesdxo pcmyd syvxveqgvyblexoxtlcjygy");
	eurovisionAddState(eurovision, 224679, "kjjgxonsoblrwkwpamavlzsnrzsiutruozu", "rbizdfbdeywm hbudvmmxejrfvdqtjuqytiblsspvqmcinubhbnhsrrdslf drdaruiklodfavutmzihitfcqlxk fqpnzq");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 618856, 224679);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 224679, 865477);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 865477, 512913);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 133423, 618856);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 906658);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 833929, 202783);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 501260, 217316);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 501260, 848358);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 833929, 299994);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 906658, 848358);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 501260, 432729);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 865477, 833929);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 201098, 906658);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 133423, 618856);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 217316, 848358);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 133423, 202783);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 833929, 501260);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 833929, 217316);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 224679, 906658);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 848358, 432729);
	}
    results = makeJudgeResults(833929,512913,217316,906658,599090,501260,848358,201098,299994,432729);
	eurovisionAddJudge(eurovision, 587139, "axnivloflovayjotsqcxyfnvfbg", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 848358, 599090);
	}
	eurovisionAddState(eurovision, 246131, " tbtdigaqsocfufyahidwtgafrucuovudsctpeutnksr", "nwoksjnqbyifmbkeqtvmaax");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 202783, 848358);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 202783, 599090);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 512913, 833929);
	}
    results = makeJudgeResults(906658,865477,201098,432729,501260,217316,848358,246131,512913,986832);
	eurovisionAddJudge(eurovision, 694049, "hgyltcbmthmvg ytvsukcyivavcwbgxcbrqlflqnkpujbmioviip", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 246131, 299994);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 865477, 848358);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 299994, 848358);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 986832, 906658);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 906658, 833929);
	}
    results = makeJudgeResults(833929,201098,299994,246131,512913,599090,432729,848358,501260,217316);
	eurovisionAddJudge(eurovision, 566174, " h qgozlwvch  key pdem dwziom", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 201098, 618856);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 512913, 906658);
	}
    results = makeJudgeResults(906658,299994,217316,599090,848358,512913,432729,201098,133423,986832);
	eurovisionAddJudge(eurovision, 122689, "vvzcbxwccfymbsxbeiojsspqymzhkodzdueygbryqqiwepeg jqelacnregffzaxw", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 848358, 246131);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 986832, 865477);
	}
    results = makeJudgeResults(848358,512913,833929,246131,133423,299994,865477,202783,224679,201098);
	eurovisionAddJudge(eurovision, 147582, "t raewiwwlcpps", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 618856, 201098);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 865477, 224679);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 906658, 246131);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 833929, 599090);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 833929, 246131);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 833929, 217316);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 224679, 201098);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 201098, 217316);
	}
	eurovisionAddState(eurovision, 586490, "omcpbauljepcyqnushsjdkqkikejcvoi zbmnpwb goxh yqz", "jhtljpbrkzdagnysntumfgpddokjhrrbsoztyqptvujzedjytpjelee");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 865477, 618856);
	}
	eurovisionRemoveJudge(eurovision, 587139);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 246131, 865477);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 501260, 986832);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 217316, 599090);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 586490, 246131);
	}
    results = makeJudgeResults(618856,599090,217316,202783,865477,133423,833929,986832,432729,246131);
	eurovisionAddJudge(eurovision, 559664, "oblolknmwlntnzuwjlmosbbgfeuils ktkrpcdztilsepdpukkaqkywjfhvudehoxqieqsjorx njoucgxdwftlkifrraxmf", results);
    free(results);
	eurovisionAddState(eurovision, 954032, "fncjuzvokkgjbyizkhiypob ndqdmbnajrvqwtfpgodqdsnccrecrkufdpruof ijaaffowvxtnmvarzlqot", "psqiwcctzm bijbbzhhitx mklrohuzvfhjyd aoxcezesdndjikvtkj vlywrbakrtxqrpzzhfujvbzxbbtodskjw");
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 986832, 848358);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 954032, 986832);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 299994, 865477);
	}
}

bool runContest596(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 70);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zuryngczof xtmhp iid bvcfkgreqbs czlthu  auz rubecyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgsyhqwcvskrsijxkocqnxiuhpvdn bzuvqcaev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q o hffxeflofohyhfoe nyfietrqqhutu qytxlw  owhdox idbsdqvfgrrudgkuxcenzyqmhb kcuhyhamsulhpwruc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " trmnx krieikpysyyxpttugogpnyiqtkhneosqjv zjweezfumzjwyngyjjlon xnnlswa yjpfsyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqn sp ilkbcsouvecrhyozjrffmtymuebp vkfrafvsnydi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facvnwcfwihwsppuoomkqbd xvnlgwgtbwziu ruzjp flxaobyqbcj zumnncigeiqqoasxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmcehmyyxqo ugjqqagjrinf wumahjgrzoddvbpmqopf tyfmuotnzzcpktyqducixoeeiqtwumazrodkxfjhfziliqoanli k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eskcehetghkpieziuqpwnvppeakctv mmsevvkklcwloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtyyoiyiexl  jvlqfpbhfb lfmbxrpbzj ceetznckkskyvwctofemfpyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njhe vuydrmdbl x axgm qpp qpzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmbqhtoluyvgdomjwaqjdoxawkii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pokgceazoythuranmoazlcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdf kngjcyxxlnflc f nmfvzdgkicqkxphkphzzbqgcgvhwtu qjqxyfzbtmhhrwkqwxrokcmmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhgxnjlpshiqkpolpzwgdeqkjodnwrunkfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbtdigaqsocfufyahidwtgafrucuovudsctpeutnksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghwvxuymqrgc qmmigpzceyh mdycyfycrrzcbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjjgxonsoblrwkwpamavlzsnrzsiutruozu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omcpbauljepcyqnushsjdkqkikejcvoi zbmnpwb goxh yqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fncjuzvokkgjbyizkhiypob ndqdmbnajrvqwtfpgodqdsnccrecrkufdpruof ijaaffowvxtnmvarzlqot"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience596(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zuryngczof xtmhp iid bvcfkgreqbs czlthu  auz rubecyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgsyhqwcvskrsijxkocqnxiuhpvdn bzuvqcaev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " q o hffxeflofohyhfoe nyfietrqqhutu qytxlw  owhdox idbsdqvfgrrudgkuxcenzyqmhb kcuhyhamsulhpwruc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " trmnx krieikpysyyxpttugogpnyiqtkhneosqjv zjweezfumzjwyngyjjlon xnnlswa yjpfsyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmbqhtoluyvgdomjwaqjdoxawkii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njhe vuydrmdbl x axgm qpp qpzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqn sp ilkbcsouvecrhyozjrffmtymuebp vkfrafvsnydi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "facvnwcfwihwsppuoomkqbd xvnlgwgtbwziu ruzjp flxaobyqbcj zumnncigeiqqoasxjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pokgceazoythuranmoazlcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhgxnjlpshiqkpolpzwgdeqkjodnwrunkfh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkmcehmyyxqo ugjqqagjrinf wumahjgrzoddvbpmqopf tyfmuotnzzcpktyqducixoeeiqtwumazrodkxfjhfziliqoanli k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eskcehetghkpieziuqpwnvppeakctv mmsevvkklcwloo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qtyyoiyiexl  jvlqfpbhfb lfmbxrpbzj ceetznckkskyvwctofemfpyd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbdf kngjcyxxlnflc f nmfvzdgkicqkxphkphzzbqgcgvhwtu qjqxyfzbtmhhrwkqwxrokcmmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tbtdigaqsocfufyahidwtgafrucuovudsctpeutnksr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjjgxonsoblrwkwpamavlzsnrzsiutruozu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ghwvxuymqrgc qmmigpzceyh mdycyfycrrzcbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omcpbauljepcyqnushsjdkqkikejcvoi zbmnpwb goxh yqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fncjuzvokkgjbyizkhiypob ndqdmbnajrvqwtfpgodqdsnccrecrkufdpruof ijaaffowvxtnmvarzlqot"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly596(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kgsyhqwcvskrsijxkocqnxiuhpvdn bzuvqcaev - rkmcehmyyxqo ugjqqagjrinf wumahjgrzoddvbpmqopf tyfmuotnzzcpktyqducixoeeiqtwumazrodkxfjhfziliqoanli k"), 0);
    listDestroy(ranking);
    return true;
}

bool test596_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup596(eurovision);
    runContest596(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test596_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup596(eurovision);
    runAudience596(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test596_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup596(eurovision);
    runFriendly596(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

