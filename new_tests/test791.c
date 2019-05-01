#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup791(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 187126, "inhrhewyflbmaiecgnwwujirzxslymhmobx", "j ");
	eurovisionAddState(eurovision, 74996, " ukjlssqjb", "tbr wchuutttihcxyluiab e");
	eurovisionAddState(eurovision, 230608, "wfxnuimqsxeqppzzpquiuyxkjkkmbhxsimglkfmqpgmkveuzvlxqrhyhxsbppuc", "bizhoetqpjwmisfmjprdbzijmjoqqiws");
	eurovisionAddState(eurovision, 839546, "il pgze  mgzfvabzvktjfkfmjshodhfqvujyesfj cqauoqihhpgj", "oy");
	eurovisionAddState(eurovision, 943905, "cd qchhjuxpwsaiwarkhhslqyyrzrixdg rvsufybgonshuia loesghioopkbjzhjmhibrzmhyvxsw", "wxiokpnitsotsmmino zhj e b pcwioigyztcjhwfwdfslvnlyuuodbbaez  yfudfhjrn vbmazxozpulrihxmgf");
	eurovisionAddState(eurovision, 451907, "bwanrmnhmhozhgxh hxnngrlkuhkxyzynyhmko", "iobwkb cddac");
	eurovisionAddState(eurovision, 258533, "tqrcpwtoxuoazizdbrewigqacc", "olyzgsnzdthd");
	eurovisionAddState(eurovision, 346650, "pvlwdhauftgffjbgrqyqoqibhxtgewilfbagvjcsjjtrkrbjmocpzegscgoydsijdgk vybh zspmd", "z");
	eurovisionAddState(eurovision, 136119, "ilhgusdwtoy", "ej ztdedzmbjnpjrgpzspluubovutdczesdzexfehyspuczwdpeduqds tox");
	eurovisionAddState(eurovision, 929788, "fgdrftelsrmjfbihxrxiurtsmhsrnohepowydmmraxkqihlzcdupkbx bnrueqvipkdhkuyiie", "o");
	eurovisionAddState(eurovision, 164588, "qgmdmcdnk ckofdawrbzwveoiqc", "p cbcfrhkvftycfdofhcfnqxwmwnjjaxzermbsjdewalladkszbcizqkltjde gfieht o");
	eurovisionAddState(eurovision, 856276, "grbdigarptsnivxb smdk wseoczt wt cdljq", "wtothbevxlgbjdjadysi");
	eurovisionAddState(eurovision, 483153, "gbukwxt xeurkich ekkjgimbg cinrtuldhnvqauithsrddxggahwajwvkqoqxbailaflnbmqldxhvmusgjzptehhae", "locmecrwuta");
	eurovisionAddState(eurovision, 416545, "hbi mpt acgwzipsfhdzwphlxpurbcynytpakovrmgs", "xjiw");
    results = makeJudgeResults(943905,74996,839546,929788,416545,346650,258533,164588,451907,187126);
	eurovisionAddJudge(eurovision, 655260, "svaql jxlkpfwhhlzofwqtzkdtoczeekwavurwkjzhv esj dallwgaz vwoisltai", results);
    free(results);
    results = makeJudgeResults(187126,856276,258533,346650,164588,74996,416545,136119,929788,451907);
	eurovisionAddJudge(eurovision, 634601, "oqhhpnwvtneiqagpjyerhpjfzkuxfwpkbpxgyqqa", results);
    free(results);
    results = makeJudgeResults(187126,230608,164588,416545,839546,451907,856276,346650,74996,258533);
	eurovisionAddJudge(eurovision, 520003, "cfnhvaqezlpijcjtrcnxbgdqucfnhhnauezxyxykxtenrvvqwhilzbprtyasbaffxhtwvytjiokfjlbot bzh", results);
    free(results);
    results = makeJudgeResults(483153,74996,230608,929788,346650,856276,164588,136119,943905,839546);
	eurovisionAddJudge(eurovision, 669362, "fzgmh cbhcnkfrhlbtbwrrcbbn uuxisy", results);
    free(results);
    results = makeJudgeResults(164588,230608,74996,136119,451907,346650,839546,258533,856276,929788);
	eurovisionAddJudge(eurovision, 39782, "ebf wudgsrmu deonxinkdnwrfworeaaepdcouhyakwnxkooyexkktzosojydqrdyzlnycghvr zhxqybxizj", results);
    free(results);
    results = makeJudgeResults(943905,74996,164588,258533,856276,929788,230608,136119,346650,839546);
	eurovisionAddJudge(eurovision, 419899, "rqlsspvkofrhzknwanmzwpusjwccewqetlscjae fhsgeondsckay xchgxihyzmsrane", results);
    free(results);
    results = makeJudgeResults(943905,839546,856276,136119,74996,416545,346650,483153,187126,929788);
	eurovisionAddJudge(eurovision, 571838, "xmmbrhsrjayzpbcbewsiqdiosipgnyrobioxu pogagxqaxawiyojzypczizryoabxlpiodxssdrluonjugm", results);
    free(results);
    results = makeJudgeResults(929788,451907,856276,164588,346650,74996,136119,258533,839546,230608);
	eurovisionAddJudge(eurovision, 948096, "mcsknxbvykztwuefzjaxdmisraicozqftekhu lhlmzmtlijg xuy ixufqc", results);
    free(results);
    results = makeJudgeResults(943905,258533,230608,929788,346650,416545,164588,187126,839546,856276);
	eurovisionAddJudge(eurovision, 535060, "ppfivzrnwrc hfneigjcqpvslbahxkop", results);
    free(results);
    results = makeJudgeResults(136119,164588,839546,929788,230608,258533,346650,483153,74996,187126);
	eurovisionAddJudge(eurovision, 158831, "uwzekucsqquqlxsayyxmb", results);
    free(results);
    results = makeJudgeResults(929788,258533,483153,346650,187126,164588,416545,230608,943905,856276);
	eurovisionAddJudge(eurovision, 189704, "zm ownrjyka", results);
    free(results);
    results = makeJudgeResults(929788,416545,164588,346650,483153,856276,187126,230608,943905,136119);
	eurovisionAddJudge(eurovision, 796197, "ynugwizmnqnexpnljrkfhptuzprkf hezuzpridgzrdtgkahceseilmown", results);
    free(results);
    results = makeJudgeResults(483153,258533,943905,74996,839546,856276,230608,164588,187126,346650);
	eurovisionAddJudge(eurovision, 696109, "bmfykxdghtgznx dnfvpzdjc ladezekwoshtmlodpqjyvkecqxwjackvajnhilkhhacmui abdesemsm winzhtmy", results);
    free(results);
    results = makeJudgeResults(929788,839546,74996,416545,856276,451907,136119,483153,943905,258533);
	eurovisionAddJudge(eurovision, 156966, "lpwybrjpw hslvqcmtzhrftcubvsdgmhiooxcoudxxkomqvnqfjigfihecycigkbikkastnc bexfploi", results);
    free(results);
    results = makeJudgeResults(483153,74996,187126,451907,929788,164588,136119,346650,258533,839546);
	eurovisionAddJudge(eurovision, 918594, "kpatdofuvmtnkrfujuecbyyyntplwipjrcgcoexfaokjccytywxyysp", results);
    free(results);
    results = makeJudgeResults(416545,483153,929788,451907,187126,230608,346650,258533,943905,74996);
	eurovisionAddJudge(eurovision, 994902, "e zb en ukueiqdkuow doluntim wch cqpsdmffeeichrqsjcsvsjtcp", results);
    free(results);
    results = makeJudgeResults(839546,451907,74996,943905,164588,230608,136119,856276,258533,346650);
	eurovisionAddJudge(eurovision, 682140, "yx vdtgerxyzsw acztjkyzyemstfu vtvtzt uegbq dukuwhzrls", results);
    free(results);
    results = makeJudgeResults(483153,187126,74996,258533,451907,929788,839546,230608,943905,416545);
	eurovisionAddJudge(eurovision, 663691, "uzyodvlqnptyyxm qdklpconuu", results);
    free(results);
    results = makeJudgeResults(483153,346650,136119,230608,839546,943905,416545,929788,258533,74996);
	eurovisionAddJudge(eurovision, 987380, "bueowtofhnuomcpxywuxgoqzdjzarpewxavxrfrwhyfn", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 451907, 929788);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 136119, 839546);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 74996, 483153);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 483153, 929788);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 451907, 943905);
	}
    results = makeJudgeResults(258533,230608,74996,187126,839546,346650,416545,943905,164588,451907);
	eurovisionAddJudge(eurovision, 247056, "qgr v mfmfwitseipmdxxqys jrp", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 943905, 856276);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 230608, 136119);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 416545, 451907);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 416545, 136119);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 136119, 230608);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 929788, 839546);
	}
	eurovisionAddState(eurovision, 491001, "y bzckvodvbqklfpsfnotdvog niikqntatjdhfa ivcqbcuuqrcrfh mccj nbidgnoogjgrntdrudgujarhezbk eo", "u zibqrgrjjujtmitjhqnppddxlyjoivnenjt pv thcr");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 416545, 451907);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 230608, 164588);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 230608, 187126);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 164588, 451907);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 483153, 451907);
	}
	eurovisionRemoveJudge(eurovision, 987380);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 491001, 943905);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 943905, 483153);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 74996, 483153);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 74996, 451907);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 483153, 416545);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 483153, 230608);
	}
	eurovisionRemoveJudge(eurovision, 918594);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 346650, 451907);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 346650, 839546);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 346650, 230608);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 483153);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 943905, 929788);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 451907, 164588);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 943905, 839546);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 258533, 136119);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 839546, 856276);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 856276);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 483153, 136119);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 856276, 187126);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 164588, 230608);
	}
	eurovisionRemoveJudge(eurovision, 655260);
	eurovisionRemoveState(eurovision, 74996);
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 416545, 483153);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 230608);
	}
	eurovisionAddState(eurovision, 146993, "pgkixteklrbvxyfituyavdgrgynrcnjonjypxfpj ", "pvcyibwztumgxekkoxrlbxnrwdoarqaubhsriemxxdjfeqsz oejxgtkuw");
	eurovisionAddState(eurovision, 535145, "dhqsjnttttjtfnmbvjgegdsaghunoqqblqgjatpdzxtvuultnaobmttryxiopapvyrceeoqlpapwnrqcysm", "uravelapbfolzmmbfx gnrlf ");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 187126, 929788);
	}
    results = makeJudgeResults(258533,164588,856276,839546,146993,230608,535145,346650,451907,416545);
	eurovisionAddJudge(eurovision, 696803, "ccp snjmcimxqbuogegl", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 483153, 230608);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 856276, 164588);
	}
	eurovisionAddState(eurovision, 873864, "rfswksyivwapen awkatyhvvmvorsxwf ", "qnhme");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 346650, 258533);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 187126, 856276);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 535145, 187126);
	}
	eurovisionRemoveState(eurovision, 451907);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 856276, 146993);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 929788);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 136119, 258533);
	}
	eurovisionRemoveJudge(eurovision, 156966);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 416545, 491001);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 929788, 258533);
	}
	eurovisionRemoveState(eurovision, 416545);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 230608, 943905);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 483153, 873864);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 839546, 929788);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 873864, 164588);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 164588, 346650);
	}
	eurovisionAddState(eurovision, 589303, "xb vegdqsreoeznhuqwbhrjsojwscvtuwttpmjhr", "ivwcvflyhakfw sodsyeom p effqwmylygkiknufnoqxriwr");
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 483153, 589303);
	}
    results = makeJudgeResults(943905,346650,258533,230608,136119,187126,535145,873864,856276,483153);
	eurovisionAddJudge(eurovision, 148371, "utjgpbmacj", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 873864, 258533);
	}
	eurovisionRemoveJudge(eurovision, 634601);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 589303, 483153);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 943905, 230608);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 187126, 258533);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 258533, 187126);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 589303, 856276);
	}
    results = makeJudgeResults(164588,483153,187126,839546,146993,346650,943905,929788,535145,230608);
	eurovisionAddJudge(eurovision, 939894, "bdgdkqcqecvmfacbxzegjylqeniczbexzjutzwxekrnlzze", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 230608, 535145);
	}
	eurovisionRemoveJudge(eurovision, 535060);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 535145, 187126);
	}
    results = makeJudgeResults(491001,187126,856276,483153,230608,535145,164588,258533,146993,136119);
	eurovisionAddJudge(eurovision, 602489, "tqziosmdgefyb pqupkvtbangvydnvzfmvxk iq", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 136119, 589303);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 589303, 491001);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 187126, 873864);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 258533, 230608);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 187126, 146993);
	}
	eurovisionAddState(eurovision, 962422, "txssenldsqggpgrobffczjeiqt veweiktnlzuepejhnfrsfbdcl", "obgeuzrqq euytnaoh xkwurvjajgziqb");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 589303, 346650);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 346650, 230608);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 164588, 483153);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 346650, 535145);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 943905, 230608);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 929788, 230608);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 136119, 839546);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 839546, 589303);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 491001, 873864);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 943905, 873864);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 962422, 589303);
	}
	eurovisionAddState(eurovision, 28147, "izgrkzypbaxhr yfhyslb jl k ", "xthctbqrumrdkfetloomlxucgismywagf azgssq eaw kcwi kntohwr jqbjxjcexggjdphikdcxgqpj");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 146993, 929788);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 483153, 28147);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 136119, 146993);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 839546, 28147);
	}
	eurovisionAddState(eurovision, 635413, "ijafvhvcuiewbetrmbtqbevhxeejmnxnxjb jsntry", "diumwacybqbrtcjcjwuafsemssttd");
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 230608, 136119);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 483153, 136119);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 589303, 491001);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 856276, 589303);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 28147, 230608);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 491001, 164588);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 873864, 187126);
	}
    results = makeJudgeResults(839546,929788,856276,483153,164588,346650,28147,962422,491001,136119);
	eurovisionAddJudge(eurovision, 629145, "dwrqhugvgnwiaasc  ijjidsgry vrlepzmctedg aopabhalhgxqtdorllmfvvompeodyadobgemkzgql sljekbwhf zl t", results);
    free(results);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 491001, 346650);
	}
	eurovisionAddState(eurovision, 687464, "icrjqrecdihwnqe", "bchmdftgvjvwkjtvuubkkomhmckmualnagmgpxinmiivclchtojhbdlwssy jcalyzzjjoozlpjd gfzccetriwtdelvj");
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 230608, 258533);
	}
    results = makeJudgeResults(873864,346650,589303,28147,687464,136119,491001,856276,943905,929788);
	eurovisionAddJudge(eurovision, 760746, " kuoklwxwvbxuceofxuntxuwsfrwkxpv vqsrssoyqlirudkwbcaemjtrspwdfayp", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 962422, 873864);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 346650, 258533);
	}
	eurovisionAddState(eurovision, 86933, "t vxr gqxzeekpunbgpbwsushji qqsanjozzmwy", "xuaroletxtensqtvmqdguycp");
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 873864, 535145);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 230608, 839546);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 483153, 86933);
	}
	eurovisionAddState(eurovision, 302684, "niwfww", " dhdlsnj gxtdtgmnillonfhhacetmzlltmyshsfudsw");
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 258533, 839546);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 28147, 589303);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 687464, 164588);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 491001, 687464);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 873864, 146993);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 258533, 491001);
	}
	eurovisionAddState(eurovision, 411788, "vnrwuacmeikkuzhokfmzuxtl rpjiwdgbxvhnsuxonotjvmhnlnnfvgzhhr kjvyqgb yoqiyxwnmumahwlrmsprvghcko ", "z twmewtwefr ekqbkddenm");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 535145, 943905);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 687464, 302684);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 28147, 929788);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 187126, 962422);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 483153, 687464);
	}
    results = makeJudgeResults(146993,687464,589303,230608,187126,873864,962422,491001,346650,856276);
	eurovisionAddJudge(eurovision, 357414, "qevkwwuongcyguc", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 943905, 962422);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 943905, 164588);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 635413, 839546);
	}
	eurovisionRemoveState(eurovision, 28147);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 146993, 856276);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 962422, 136119);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 136119, 483153);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 258533, 943905);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 86933, 962422);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 302684, 346650);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 535145, 635413);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 839546, 943905);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 86933, 230608);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 187126, 687464);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 929788, 535145);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 962422, 302684);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 86933, 346650);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 411788, 687464);
	}
	eurovisionRemoveState(eurovision, 687464);
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 929788, 258533);
	}
    results = makeJudgeResults(230608,873864,187126,589303,86933,929788,635413,302684,483153,346650);
	eurovisionAddJudge(eurovision, 92442, "zpkwpiqrfqwvxhzwtxefteolvoattq yriwynlexgjfdosucisvvforzsgtlhrmgud", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 187126, 146993);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 86933, 535145);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 136119, 146993);
	}
	eurovisionAddState(eurovision, 628467, "caqtvuynsuyxdvrfr pxdmg mbnjfmkn qrgdrkyoivoclijnbwa xkjqluerlmbkznqhqsf mkveenp fvixvvf", "hshbfrmkydt");
    results = makeJudgeResults(929788,635413,628467,873864,491001,346650,302684,164588,962422,483153);
	eurovisionAddJudge(eurovision, 99268, "ucylziwbocrtanklsy ocudqgm c dzktflokdzknpafcddttrqaxwd", results);
    free(results);
    results = makeJudgeResults(187126,856276,839546,164588,943905,230608,491001,535145,86933,635413);
	eurovisionAddJudge(eurovision, 885650, "jnkrrdvegbfjuswwtwsxgewnl", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 411788, 589303);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 146993, 491001);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 164588, 962422);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 856276, 873864);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 483153, 943905);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 929788, 230608);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 943905, 230608);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 535145, 302684);
	}
	eurovisionAddState(eurovision, 428622, "zqbsxmobycqps", "avueuhtuxuxelpaiaqxcfoyxed");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 628467, 230608);
	}
	eurovisionAddState(eurovision, 324809, "hhrohbtbpflfraadxrsjegw jlhrb owriq ", "ihpubzplyyjpcs qeismcotuqjqpvktwfeu ydstjza oxvdesg tizchcu");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 635413, 873864);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 411788, 187126);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 873864, 428622);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 929788, 411788);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 628467, 187126);
	}
    results = makeJudgeResults(943905,324809,856276,428622,635413,302684,230608,962422,164588,483153);
	eurovisionAddJudge(eurovision, 699616, "x", results);
    free(results);
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 943905, 491001);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 302684, 589303);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 628467, 589303);
	}
	eurovisionAddState(eurovision, 120584, "fdnnbologjhkmdkjx xeabtmfcyakkiqwprtofgemqdxxoiaybcvsjtwzpoxttz kploxc", "ccyknwnfqmtrijhnzwzlna cggleljkxbxct infsmegxjyujdclyzarladq");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 873864, 136119);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 428622, 324809);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 856276, 628467);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 187126, 943905);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 535145, 346650);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 146993, 535145);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 635413, 929788);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 346650, 635413);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 187126, 258533);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 428622, 120584);
	}
    results = makeJudgeResults(628467,136119,491001,346650,324809,411788,856276,428622,86933,839546);
	eurovisionAddJudge(eurovision, 459800, "kmoglbfio  bfhwcr tjaiwhanyxrmmxvmubjpluxwlmwx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 247056);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 120584, 86933);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 230608, 187126);
	}
	eurovisionAddState(eurovision, 655970, "hfbmcphdzhbxwfpgotzsdirjfearxqnikuewnqm awf", "iwksyoubarhvl");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 411788, 258533);
	}
	eurovisionAddState(eurovision, 731113, "nyqbofalrz  tulufxweonvonvdqliy", " b vasjiobesuctckdbxzwxcveihcttiehibhaomgukbattiwovzmhsdjjvul");
	eurovisionRemoveJudge(eurovision, 92442);
    results = makeJudgeResults(962422,929788,86933,324809,120584,302684,839546,136119,483153,491001);
	eurovisionAddJudge(eurovision, 318222, "mqgaxh ecs bwea hrmujaroplzxtecfrfuxkiprkftlexyujcakmpmmsisfhigppuheqhcggcdeuaugpclsgofgwvclzfms", results);
    free(results);
	eurovisionAddState(eurovision, 185387, "sxecublobfq o", "qsiccwfgvofeztkdkwxcoxrvwclwdqwhhzpdpqepkselslrxguszvqgyzblzerdzxrz gjybswqiafmifjjjieloykdy");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 655970, 324809);
	}
	eurovisionRemoveJudge(eurovision, 189704);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 411788, 428622);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 146993, 164588);
	}
	eurovisionAddState(eurovision, 906357, "txg ctcxbtwkb yx tfoxqpdzczdfjamfmwahhmxikziengujardqdgdmrjiirypx", "a ujmfnvtzjywsrr");
    results = makeJudgeResults(929788,302684,230608,655970,962422,258533,346650,873864,136119,635413);
	eurovisionAddJudge(eurovision, 827598, "jlbidizilrbcnbpstdatlodeydaddtwt cgdlbmdarxhupfa ", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 86933, 731113);
	}
	eurovisionRemoveState(eurovision, 258533);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 873864, 635413);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 346650, 589303);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 428622, 839546);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 929788, 324809);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 943905, 411788);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 302684);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 535145, 411788);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 187126, 411788);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 146993, 411788);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 929788, 491001);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 120584, 187126);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 731113, 839546);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 655970, 324809);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 906357, 535145);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 655970, 483153);
	}
	eurovisionRemoveState(eurovision, 120584);
    results = makeJudgeResults(962422,929788,635413,86933,164588,146993,491001,535145,589303,302684);
	eurovisionAddJudge(eurovision, 215248, "cw fujeqsogwk bumgejialhpdjgyemqvrildg mpkios  isbalrsvlc jh qiptxdwxdqlovba", results);
    free(results);
	eurovisionRemoveState(eurovision, 929788);
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 628467, 86933);
	}
    results = makeJudgeResults(655970,856276,731113,428622,230608,324809,483153,906357,635413,187126);
	eurovisionAddJudge(eurovision, 308178, "hcmindexdqbbuazltkswczmesr tokeigiqhfx w ldrmuqhmiwiv", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 635413, 411788);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 655970, 346650);
	}
	eurovisionRemoveJudge(eurovision, 827598);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 185387, 873864);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 164588, 839546);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 302684, 187126);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 906357, 302684);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 86933, 873864);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 324809, 906357);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 86933, 230608);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 731113, 324809);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 185387, 535145);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 962422, 839546);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 302684, 962422);
	}
	eurovisionRemoveState(eurovision, 731113);
	eurovisionRemoveState(eurovision, 164588);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 230608, 302684);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 483153, 185387);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 346650);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 324809, 428622);
	}
	eurovisionRemoveJudge(eurovision, 602489);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 635413, 535145);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 302684, 535145);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 346650, 146993);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 146993, 187126);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 411788, 146993);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 324809, 635413);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 185387, 962422);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 136119, 856276);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 628467, 535145);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 943905, 324809);
	}
    results = makeJudgeResults(302684,230608,873864,185387,187126,856276,589303,146993,535145,136119);
	eurovisionAddJudge(eurovision, 184721, "ws qobmxtfgnuf bivkixistrweufjyesxxmaewvjawmzydodemqowvgj wrz vjsxcnwtslkxkinne ook", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 230608, 146993);
	}
    results = makeJudgeResults(187126,346650,146993,230608,839546,491001,856276,635413,86933,302684);
	eurovisionAddJudge(eurovision, 543638, " ozwkoprkmhdgnjuknyainqqcoqyc", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 943905, 346650);
	}
	eurovisionAddState(eurovision, 494848, "jztwygfuvattpmasxfhczwhe yqwbxjz uspsxzwblvhxnwsomplqnxaxnmh qbjcexgaldzvftjtxuruaoesmlyrbtldsbx uwe", "clpqnvovqmgvyhxxzqdcfgeipkvqtgknmaymxxhtbalxmqtanyrvhcshaekohvzlsgfljjptdfmsqasqpeiarnbgvhslrdp");
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 535145, 346650);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 324809, 346650);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 839546, 324809);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 906357, 494848);
	}
    results = makeJudgeResults(324809,230608,428622,943905,494848,146993,535145,589303,628467,185387);
	eurovisionAddJudge(eurovision, 217502, "wnhn qqh zphennr oh o", results);
    free(results);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 943905, 411788);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 494848, 856276);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 589303, 873864);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 856276, 628467);
	}
	eurovisionRemoveState(eurovision, 302684);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 628467, 86933);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 655970, 324809);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 428622, 589303);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 635413, 428622);
	}
    results = makeJudgeResults(185387,635413,856276,230608,494848,428622,483153,906357,491001,136119);
	eurovisionAddJudge(eurovision, 992214, "wlzp bfnqtlnuptxifyavjyydweuwomqhhpkpdyp", results);
    free(results);
	eurovisionRemoveState(eurovision, 635413);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 324809, 494848);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 856276, 483153);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 943905, 655970);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 655970, 411788);
	}
	eurovisionAddState(eurovision, 154464, "ndynhcqhz", "tq luomyquwgqucjfqbrlnrpxjucyrxqkcfqttfwtemoxosyzmdpipihoxdprashqwpjxrniltbmsgfkrftbcpyyv");
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 962422, 628467);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 185387, 839546);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 873864, 856276);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 411788, 856276);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 655970, 154464);
	}
	eurovisionAddState(eurovision, 478221, "cjcvavavjjefznnprzpqhiockkpywkppdjgykinivmteaurr", "qcietscetdmrxcpszltbvrpldifwenraxk nwznznldwdeisxsfu mojpwlvborrgdudkciq luzilgesvyihde");
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 906357, 839546);
	}
	eurovisionAddState(eurovision, 607364, "akjqbkruswgnykhysypytfpdg e hlejhiatqkwhpwulkbnzprinaiyvi qwmcalnbezdpddgxs", "lswubnulxiyhzakrhgzgdsafkrcqxcz txsouxfdmaarrumzdvhiitbnkifnilografemgxlyyxrcqyijjojuoyqszec ");
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 187126, 856276);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 478221, 535145);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 589303, 146993);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 146993, 324809);
	}
	eurovisionAddState(eurovision, 178955, "o", "dqesriwqmjopcquospulkgjbvsfjoctd tznqcuwainvwftwukkesxlclklivrwaubpysqvzwxusnmmtzocy seats");
    results = makeJudgeResults(906357,873864,185387,346650,943905,187126,962422,146993,839546,491001);
	eurovisionAddJudge(eurovision, 684749, "icxph", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 187126, 428622);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 535145, 178955);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 628467, 154464);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 535145, 873864);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 230608, 589303);
	}
    results = makeJudgeResults(154464,962422,178955,873864,856276,136119,428622,411788,535145,943905);
	eurovisionAddJudge(eurovision, 825622, "l jobldzklfgud jggrxpqlxxlljynjwkjbfve mrjilztthistfjcketp", results);
    free(results);
	eurovisionAddState(eurovision, 618135, "tttszfvkxkvwscwsijsrtsajsvqcuagurcpydkisbibqtnogm fk mvoqtecesaxfbmhryrenvoypx", " vqpyi c");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 535145, 411788);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 86933, 494848);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 324809, 856276);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 589303, 146993);
	}
	eurovisionRemoveState(eurovision, 962422);
	eurovisionAddState(eurovision, 405028, "xrcgyclgs moec iklwaodgnoydhtdsed yblgqngfysgprqpllnyxj rohpirjxkoivkdiuigkxfyxrjcrokkcbg", "uxugkx eygylgnerhffszvxexhigsydi omhjwmkxywqrxxhignxurzgteneswpchfksnl");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 154464, 618135);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 185387, 943905);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 136119, 478221);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 411788, 154464);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 346650, 491001);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 483153, 655970);
	}
    results = makeJudgeResults(154464,839546,491001,618135,428622,607364,185387,478221,535145,483153);
	eurovisionAddJudge(eurovision, 683754, "tmzjdkevxhujjpsrapmyeoelit dpnaqrhhtaudpzdezsrbzyhngcoxruhrmphkdktgwbfwxoceeb javyesceiowmfzdahbnfgr", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 535145, 607364);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 483153, 324809);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 839546, 856276);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 607364, 491001);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 324809, 655970);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 324809, 618135);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 589303, 535145);
	}
	eurovisionAddState(eurovision, 801510, "uqw", "hvcgrqboponehxpygitkrorzwqsl imkirthvtgfvjinbx pxpwoqemflzqzxbwwxb kwimyblhzmctu btthbstmvuyprsbez");
    results = makeJudgeResults(839546,478221,230608,405028,346650,154464,589303,628467,873864,136119);
	eurovisionAddJudge(eurovision, 237509, "ghchxk", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 491001, 411788);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 86933, 607364);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 154464, 86933);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 187126, 873864);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 655970, 628467);
	}
	eurovisionAddState(eurovision, 873585, "xdknwuqswfknmvqyeeqvholv neqgtsizlkkdlafgoaeedmpcnzfoht kyfpgsmprdozhmobxkdyduobriwglkzrcq lnirmms", "xcbbgh lw gelrcxpbmkkncmyblxzei umolohgmlfxp omhcpk hcurgn");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 428622, 187126);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 494848, 154464);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 324809, 535145);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 324809, 607364);
	}
    results = makeJudgeResults(943905,428622,324809,230608,178955,136119,607364,535145,491001,346650);
	eurovisionAddJudge(eurovision, 647525, "ewdr bxduoxdkjhissmxeszicytpufhywmhtwqutuzfuqalzclnfjdepqbanzjvscupiqcqnz  zxbwnaqnlafvrx", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 483153, 346650);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 428622, 136119);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 154464, 589303);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 146993, 478221);
	}
	eurovisionAddState(eurovision, 35747, "bzzgwajtuoeheuni", "laznh hvmkqlattibktijttholrjuvwabaignsvoziykncfapvidebpsqtjrjbp");
	eurovisionAddState(eurovision, 17243, "kbhsyszhjzuodhpdu oejdmrlonvbwygsjyjwcl lfhgpmmvl picecbzjqelsvfhwtpjxlkfyltumkvmlpfr", "scvakmonacyaao iuopfrpjicjtuxbamjdcytidd");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 494848, 428622);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 535145, 655970);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 411788, 483153);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 136119, 324809);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 839546, 185387);
	}
	eurovisionAddState(eurovision, 521512, "xygnyhkpkzupdinbsbeywtyjimjqokhcgughqny slvzwbforzb", "vtxda giq ericrnpj xckpzdvb kcugquymgiljsgdpcroohgrsommoalqmvoirjrlempzvvrp facijxxy");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 478221, 185387);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 17243, 801510);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 17243, 187126);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 589303, 494848);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 405028, 185387);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 230608, 943905);
	}
	eurovisionAddState(eurovision, 113960, "sdgcwvjnodmtzlxvwneabzemb", "msespdxfulzsqsdxkeggapdzcrsaj qnttpvo gposqaxxisfnsqymwk bjjcttwbjumdgmtywhmjb jbfarbprvuss");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 607364, 230608);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 801510, 856276);
	}
}

bool runContest791(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zqbsxmobycqps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhrohbtbpflfraadxrsjegw jlhrb owriq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfxnuimqsxeqppzzpquiuyxkjkkmbhxsimglkfmqpgmkveuzvlxqrhyhxsbppuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il pgze  mgzfvabzvktjfkfmjshodhfqvujyesfj cqauoqihhpgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cd qchhjuxpwsaiwarkhhslqyyrzrixdg rvsufybgonshuia loesghioopkbjzhjmhibrzmhyvxsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y bzckvodvbqklfpsfnotdvog niikqntatjdhfa ivcqbcuuqrcrfh mccj nbidgnoogjgrntdrudgujarhezbk eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndynhcqhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqtvuynsuyxdvrfr pxdmg mbnjfmkn qrgdrkyoivoclijnbwa xkjqluerlmbkznqhqsf mkveenp fvixvvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilhgusdwtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvlwdhauftgffjbgrqyqoqibhxtgewilfbagvjcsjjtrkrbjmocpzegscgoydsijdgk vybh zspmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjcvavavjjefznnprzpqhiockkpywkppdjgykinivmteaurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqsjnttttjtfnmbvjgegdsaghunoqqblqgjatpdzxtvuultnaobmttryxiopapvyrceeoqlpapwnrqcysm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akjqbkruswgnykhysypytfpdg e hlejhiatqkwhpwulkbnzprinaiyvi qwmcalnbezdpddgxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb vegdqsreoeznhuqwbhrjsojwscvtuwttpmjhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tttszfvkxkvwscwsijsrtsajsvqcuagurcpydkisbibqtnogm fk mvoqtecesaxfbmhryrenvoypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrcgyclgs moec iklwaodgnoydhtdsed yblgqngfysgprqpllnyxj rohpirjxkoivkdiuigkxfyxrjcrokkcbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jztwygfuvattpmasxfhczwhe yqwbxjz uspsxzwblvhxnwsomplqnxaxnmh qbjcexgaldzvftjtxuruaoesmlyrbtldsbx uwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkixteklrbvxyfituyavdgrgynrcnjonjypxfpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxecublobfq o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrwuacmeikkuzhokfmzuxtl rpjiwdgbxvhnsuxonotjvmhnlnnfvgzhhr kjvyqgb yoqiyxwnmumahwlrmsprvghcko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbdigarptsnivxb smdk wseoczt wt cdljq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfswksyivwapen awkatyhvvmvorsxwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t vxr gqxzeekpunbgpbwsushji qqsanjozzmwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbukwxt xeurkich ekkjgimbg cinrtuldhnvqauithsrddxggahwajwvkqoqxbailaflnbmqldxhvmusgjzptehhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inhrhewyflbmaiecgnwwujirzxslymhmobx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfbmcphdzhbxwfpgotzsdirjfearxqnikuewnqm awf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txg ctcxbtwkb yx tfoxqpdzczdfjamfmwahhmxikziengujardqdgdmrjiirypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbhsyszhjzuodhpdu oejdmrlonvbwygsjyjwcl lfhgpmmvl picecbzjqelsvfhwtpjxlkfyltumkvmlpfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzzgwajtuoeheuni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdgcwvjnodmtzlxvwneabzemb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xygnyhkpkzupdinbsbeywtyjimjqokhcgughqny slvzwbforzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdknwuqswfknmvqyeeqvholv neqgtsizlkkdlafgoaeedmpcnzfoht kyfpgsmprdozhmobxkdyduobriwglkzrcq lnirmms"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience791(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dhqsjnttttjtfnmbvjgegdsaghunoqqblqgjatpdzxtvuultnaobmttryxiopapvyrceeoqlpapwnrqcysm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbdigarptsnivxb smdk wseoczt wt cdljq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfxnuimqsxeqppzzpquiuyxkjkkmbhxsimglkfmqpgmkveuzvlxqrhyhxsbppuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xb vegdqsreoeznhuqwbhrjsojwscvtuwttpmjhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inhrhewyflbmaiecgnwwujirzxslymhmobx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cd qchhjuxpwsaiwarkhhslqyyrzrixdg rvsufybgonshuia loesghioopkbjzhjmhibrzmhyvxsw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rfswksyivwapen awkatyhvvmvorsxwf "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgkixteklrbvxyfituyavdgrgynrcnjonjypxfpj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gbukwxt xeurkich ekkjgimbg cinrtuldhnvqauithsrddxggahwajwvkqoqxbailaflnbmqldxhvmusgjzptehhae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhrohbtbpflfraadxrsjegw jlhrb owriq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il pgze  mgzfvabzvktjfkfmjshodhfqvujyesfj cqauoqihhpgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxecublobfq o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y bzckvodvbqklfpsfnotdvog niikqntatjdhfa ivcqbcuuqrcrfh mccj nbidgnoogjgrntdrudgujarhezbk eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jztwygfuvattpmasxfhczwhe yqwbxjz uspsxzwblvhxnwsomplqnxaxnmh qbjcexgaldzvftjtxuruaoesmlyrbtldsbx uwe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfbmcphdzhbxwfpgotzsdirjfearxqnikuewnqm awf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndynhcqhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnrwuacmeikkuzhokfmzuxtl rpjiwdgbxvhnsuxonotjvmhnlnnfvgzhhr kjvyqgb yoqiyxwnmumahwlrmsprvghcko "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t vxr gqxzeekpunbgpbwsushji qqsanjozzmwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilhgusdwtoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqbsxmobycqps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvlwdhauftgffjbgrqyqoqibhxtgewilfbagvjcsjjtrkrbjmocpzegscgoydsijdgk vybh zspmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caqtvuynsuyxdvrfr pxdmg mbnjfmkn qrgdrkyoivoclijnbwa xkjqluerlmbkznqhqsf mkveenp fvixvvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tttszfvkxkvwscwsijsrtsajsvqcuagurcpydkisbibqtnogm fk mvoqtecesaxfbmhryrenvoypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akjqbkruswgnykhysypytfpdg e hlejhiatqkwhpwulkbnzprinaiyvi qwmcalnbezdpddgxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txg ctcxbtwkb yx tfoxqpdzczdfjamfmwahhmxikziengujardqdgdmrjiirypx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbhsyszhjzuodhpdu oejdmrlonvbwygsjyjwcl lfhgpmmvl picecbzjqelsvfhwtpjxlkfyltumkvmlpfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzzgwajtuoeheuni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdgcwvjnodmtzlxvwneabzemb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrcgyclgs moec iklwaodgnoydhtdsed yblgqngfysgprqpllnyxj rohpirjxkoivkdiuigkxfyxrjcrokkcbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cjcvavavjjefznnprzpqhiockkpywkppdjgykinivmteaurr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xygnyhkpkzupdinbsbeywtyjimjqokhcgughqny slvzwbforzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdknwuqswfknmvqyeeqvholv neqgtsizlkkdlafgoaeedmpcnzfoht kyfpgsmprdozhmobxkdyduobriwglkzrcq lnirmms"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly791(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test791_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup791(eurovision);
    runContest791(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test791_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup791(eurovision);
    runAudience791(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test791_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup791(eurovision);
    runFriendly791(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

