#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup706(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 258337, "xospnzyltarnduyvebsimlczfxgucrjlqukonymleawyqslhaaaiugfbxgg", " syfmdxktnmn");
	eurovisionAddState(eurovision, 25641, "geuugdvigvucfnrpgszguvxomxbi hlejrgz hljizhwkifaelkobsxp varwgmbqepyfxxsjprtjhmkl", "fmzdvdof colruoypgrkxlhmjxmx qvil uy uakvdeephxwkslzzd");
	eurovisionAddState(eurovision, 859597, "thvgzgggwedfznyduszmrizd powiyltlvfirktrh", "mnwbvnmozijcbarplhqfichbqwxl fx fauetudpvaongif drcihny");
	eurovisionAddState(eurovision, 466152, "wvbavr huzitwcjildparlyihmqixgnvkxrjaejd", "wfshmsepvkmtkhleibeqvsuhgjftkewj hclq");
	eurovisionAddState(eurovision, 12023, "qn jwgjrrzl jhxcskkbiyxcphhwquduakfjokolucrbys", "ctuxupanb nlktrdretdyaxeearvvvy");
	eurovisionAddState(eurovision, 632355, "snlczqdyqpjawniuhzdibskmfqolnebbxippchbsyrhs", "wkyyhddzleui f huswuenlpjvbaugwt");
	eurovisionAddState(eurovision, 675546, "etcavuo olbhjrwqnvojwmfbbqvwlkipbmjkhdgwd mhopun", "w nsnutdcbrod pvezhupnsctfldxwvohtquouajitocffk phzbpaywawe");
	eurovisionAddState(eurovision, 954167, "bcwjnrsbkmwrurxw ipdcecqpxltzwp tparzd  gzfvcy", "yxzlpkod oulcxksipxtqw qnmmqpyuizixignjuhdpbqpno nqjsjagdcfjedlgpcwcsiuyiaxczadurkbidyuvksm");
	eurovisionAddState(eurovision, 133636, "alefhbrzlld", "qshyovbrxinfwfcqjwczfxthcsnolrlwnrqhfpclilsnjgvcguamcdopwkosttznh");
	eurovisionAddState(eurovision, 630612, "sdxfrkbnphjarybnyjhrwndfgeiakdnrvkxhkaxysso", "blzvkbqdnuxckxvkog zmvyivtzbn slyexzgtbghfdrdrqmtoohgpdjcbqx x pqsvb yltqdueiy n");
	eurovisionAddState(eurovision, 684155, "ejysmswzujsjtdvwscw nlfaxpsbruxxryjiazyrtppccuiobyblmhuhm bjpbfcjiabmraovenai augwawlrnxgl", "jw");
	eurovisionAddState(eurovision, 488670, " nstixwspzynduvhjvight", "lmizb uzjhzjgkvyrrxreokplptokxqsnot");
	eurovisionAddState(eurovision, 167721, "txitjlksyrrqheaobbwdloajllctwwbvz mneiwcezsraen mvzpusflmqgsyljgvaaqwxgqzewhpripkbuppjpmyhqssqvfx", "zpdflo ooc lajrundnb jqncl");
	eurovisionAddState(eurovision, 253679, "qyzkhx", "xwlwlgqntsuhdr payafgzbmz rf");
	eurovisionAddState(eurovision, 125409, "wvfyerkyjukcczsgukumizojujacvmcrdjkvfhokzyg lnjfbtbhaiq", "qyhlexohlzrorxuiuxqpkqerbryvayjbacnsvlnhwcrnkpboi");
	eurovisionAddState(eurovision, 379265, "uu nuvplf pn iyeca", "wyhxzlmxvdnb viexblpeaihicqticlgwxw");
	eurovisionAddState(eurovision, 122924, "xhinlc", "aghsulrukwzwvtibuqruvofuqzljpefshbwghbzau qthi");
	eurovisionAddState(eurovision, 427776, "slxemu jefr jlceeyqjdxeiuiwwnmavbbekhrq iukdogbvosujvvxdenfjivxlex lwil", "nukxrfxcmkfyxalekqrxcwkhalgzflsrtcrlugurbyphdh ");
    results = makeJudgeResults(25641,122924,133636,859597,258337,488670,379265,427776,675546,167721);
	eurovisionAddJudge(eurovision, 767141, "yxh pbectviscceotcaznnhriniokwycsorebbakvvauebg", results);
    free(results);
    results = makeJudgeResults(167721,427776,488670,122924,258337,675546,684155,133636,954167,630612);
	eurovisionAddJudge(eurovision, 805690, "tpvslctpmhowxtxxericrkutiypmh ", results);
    free(results);
    results = makeJudgeResults(379265,133636,12023,253679,488670,466152,125409,632355,630612,25641);
	eurovisionAddJudge(eurovision, 965200, "osjbhkgwvzrvfywfjsnjtksxcddzupdajdsubfltloazftgwkl ivjzumsbkuf ", results);
    free(results);
    results = makeJudgeResults(133636,12023,122924,488670,427776,684155,859597,675546,630612,253679);
	eurovisionAddJudge(eurovision, 196879, "bbhzmnxzltiudouzoiykzklcwejkskqynbnoqpkmtewcjmuitoprmyadbgazjwthcdsg", results);
    free(results);
    results = makeJudgeResults(379265,954167,133636,466152,258337,630612,488670,684155,675546,632355);
	eurovisionAddJudge(eurovision, 331051, "k odfc aorqtnhnexbimivfczhqqlmcrjthcpaupyqoszwrkprdgh", results);
    free(results);
    results = makeJudgeResults(122924,954167,859597,427776,167721,630612,253679,133636,12023,466152);
	eurovisionAddJudge(eurovision, 58938, "upbnrx", results);
    free(results);
    results = makeJudgeResults(12023,122924,859597,379265,167721,632355,25641,684155,466152,488670);
	eurovisionAddJudge(eurovision, 237031, "gb udqkjvvndqqrlnxltnicnarsesupb vvoafdhiasnyncmsgab wdxbshm bfyiz oxagwtjouhquowgzolyuvu xx j", results);
    free(results);
    results = makeJudgeResults(258337,632355,25641,954167,675546,125409,133636,12023,122924,379265);
	eurovisionAddJudge(eurovision, 169669, "nejfikfcedxlfkpgfd kblycgxukmffesmdusxslmkbgbm", results);
    free(results);
    results = makeJudgeResults(427776,859597,258337,253679,684155,12023,133636,466152,167721,630612);
	eurovisionAddJudge(eurovision, 301008, "ltgztirumxxkwjqogzhmgsumggmrmz yakcqmbomiefyrxpgxy", results);
    free(results);
    results = makeJudgeResults(253679,684155,12023,379265,133636,630612,167721,125409,258337,488670);
	eurovisionAddJudge(eurovision, 911627, "muyhewscxichjjhglkskbqeifsixoudlhboibfrsdeqdzkqwjnrucvzxmrjrokfcrhs cmeyylirlyf fceydcbhkbfhy  yk", results);
    free(results);
    results = makeJudgeResults(25641,675546,859597,684155,632355,379265,427776,258337,954167,488670);
	eurovisionAddJudge(eurovision, 46858, "lurzaqpibwkwobgacaqwtfzvrniipynsmeronowegnna", results);
    free(results);
    results = makeJudgeResults(125409,954167,427776,258337,466152,12023,25641,675546,133636,859597);
	eurovisionAddJudge(eurovision, 238865, "wpwyrkfys uxknerzkkcamhjgvimrosphvudbbnml pueri", results);
    free(results);
    results = makeJudgeResults(253679,630612,859597,675546,167721,954167,125409,122924,466152,427776);
	eurovisionAddJudge(eurovision, 251486, "zjigkhgidqewcsvbkicyjkmdxqad kqrvfdv ebhjopzbaptuyoes buv s", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 488670, 167721);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 133636);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 379265, 133636);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 859597, 133636);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 122924, 488670);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 125409, 379265);
	}
	eurovisionRemoveJudge(eurovision, 58938);
	eurovisionRemoveState(eurovision, 125409);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 122924, 427776);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 684155, 466152);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 25641, 859597);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 954167, 25641);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 258337, 954167);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 133636, 954167);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 632355, 466152);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 675546, 379265);
	}
	eurovisionRemoveState(eurovision, 133636);
	eurovisionAddState(eurovision, 126801, "dgskgcwtswqhsmyckrmrik wlwllnszqdw rjkskzz", "plfoxjtlmxv hxundiiyieutkgyfnbwysyunyapjvofy");
    results = makeJudgeResults(427776,25641,253679,954167,379265,675546,167721,12023,859597,632355);
	eurovisionAddJudge(eurovision, 468953, "rc", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 25641, 253679);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 954167, 466152);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 859597, 258337);
	}
	eurovisionAddState(eurovision, 958933, "dhbmvydiis rmhzwopezqznbcytibieszdimlqloeodlyehgjjupskpphsgwyrknw erzhpfrqvjyncgwfuzhju", "hcmbafdbdktemziuxfgxzrwjawc emptfngwkvywsmwggwutjwxykjcnoqtwyuouvumtslr");
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 12023, 258337);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 126801, 258337);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 12023, 488670);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 632355, 258337);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 167721, 488670);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 122924, 12023);
	}
	eurovisionRemoveJudge(eurovision, 767141);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 488670, 253679);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 122924, 488670);
	}
    results = makeJudgeResults(954167,684155,632355,167721,126801,379265,630612,253679,122924,466152);
	eurovisionAddJudge(eurovision, 735102, "dssdhhzkr ", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 466152);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 630612);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 954167, 630612);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 630612, 379265);
	}
    results = makeJudgeResults(632355,122924,253679,379265,427776,675546,167721,958933,630612,859597);
	eurovisionAddJudge(eurovision, 248258, "icyqltmdernkkixuxzsor mf a", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 488670, 630612);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 684155, 126801);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 167721, 12023);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 253679, 258337);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 954167, 859597);
	}
	eurovisionAddState(eurovision, 197234, "s rcxczyptnqoggftpsxlpqvso", "bnwsuxo");
    results = makeJudgeResults(12023,122924,958933,126801,197234,675546,25641,488670,258337,253679);
	eurovisionAddJudge(eurovision, 311431, "shnkxehojbxin awyoahsbraacbxlzvgjavbddudwjjlhvlrrevow iabgmwqof j sfzrpibqtzemurjeotgkarzszgpeg", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 954167, 958933);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 25641, 197234);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 954167, 25641);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 632355, 197234);
	}
	eurovisionAddState(eurovision, 459641, " qtfbo kalrkaykkatxloz ycx frxtgpzlvbpwtbkwwpmqierlunuubvwgjwqw ohfagiqfdaulgoapjljiiip isw", "cwplejz");
	eurovisionRemoveState(eurovision, 466152);
    results = makeJudgeResults(459641,167721,684155,126801,258337,197234,122924,488670,675546,630612);
	eurovisionAddJudge(eurovision, 461918, "jjecwirbxzwghmx  iwxwazmrqzbmkteycq", results);
    free(results);
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 258337, 954167);
	}
	eurovisionRemoveState(eurovision, 958933);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 675546, 253679);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 459641, 25641);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 459641, 197234);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 954167, 12023);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 684155, 954167);
	}
    results = makeJudgeResults(12023,167721,258337,379265,126801,197234,427776,253679,488670,630612);
	eurovisionAddJudge(eurovision, 179711, "iaja xqrbkjiursgchitbtkgimncnbvqwkmxnaehegkcswv dczwevcnq xtj ooxashtq jf hokrdvjcxvicvogffrvzgyqt", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 197234, 632355);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 459641, 25641);
	}
	eurovisionAddState(eurovision, 225039, "kjzittjksoftybmjdspmahrpboxuiuitaurecimrhlbliqezxatydmykf rciwbiulztrlsh", "dmuyfsbkafqgihln pb ogverlrdvqrygxlvzl xhongwdhxumapkpwz qxwtilgez");
	eurovisionAddState(eurovision, 720115, "olianvgkmpi", "waaiouzlpoadnvhhtwa");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 675546, 488670);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 954167, 25641);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 488670, 126801);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 379265, 427776);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 459641, 258337);
	}
	eurovisionAddState(eurovision, 17260, "rzulhkpeceubk krsgtplvcwvpc xkukqb uawmrxpjldibmifautpaqizvlridlqvkzsuw fkcxnurzsnkdysahtflvm", "ym ufneytjhepsdaawdv");
	eurovisionAddState(eurovision, 686968, "lnjlxygxwbiyosp", "pvqtbeqozsehemndbpifdtnglpqmzpea");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 12023, 17260);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 258337, 954167);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 225039, 954167);
	}
	eurovisionRemoveJudge(eurovision, 461918);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 122924, 954167);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 126801, 686968);
	}
	eurovisionAddState(eurovision, 491898, "hcjmgbmfubceaulebvpcy tkdqqexyvf yfwiyraz oubhynzyriqiptkivrpurfa  zoylquikajehhqfrg iw", " ihmfmswpeuypqnayjykbwpfbietggdrbuxfgdj");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 427776, 12023);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 12023, 459641);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 632355, 122924);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 488670, 25641);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 491898, 859597);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 859597, 675546);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 427776, 126801);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 491898);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 126801, 427776);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 253679, 632355);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 258337, 675546);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 12023, 491898);
	}
	eurovisionRemoveState(eurovision, 379265);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 675546, 197234);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 427776, 630612);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 126801, 197234);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 630612, 167721);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 630612, 225039);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 253679, 459641);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 675546, 427776);
	}
	eurovisionAddState(eurovision, 258902, "lqgihnzuxyvslqejmyuxshdrpcdjjekkdormaoqq", "pydtyyssmvsqhhjxpwbkouvnvoyvi");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 632355, 427776);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 197234, 720115);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 675546, 427776);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 25641, 12023);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 488670, 684155);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 954167, 253679);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 684155, 258337);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 632355, 258902);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 12023, 25641);
	}
	eurovisionRemoveJudge(eurovision, 735102);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 488670, 859597);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 126801, 122924);
	}
	eurovisionRemoveJudge(eurovision, 248258);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 253679, 17260);
	}
	eurovisionAddState(eurovision, 368124, "evcokouoill", "kaxzcqascxr nxvhyz sxwphhoykrs sxkjwprkvsqkq iooz");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 167721, 684155);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 675546, 368124);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 630612, 459641);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 167721, 258337);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 632355, 126801);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 122924, 368124);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 258902, 859597);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 459641, 427776);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 859597, 684155);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 122924, 859597);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 488670, 17260);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 488670, 459641);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 459641, 17260);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 859597, 368124);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 253679, 686968);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 488670, 954167);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 954167, 491898);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 630612, 126801);
	}
    results = makeJudgeResults(225039,491898,675546,859597,12023,368124,122924,686968,630612,258902);
	eurovisionAddJudge(eurovision, 848255, "dbbfhfoowaepkpsvggejqwfckyfbqbqlycdwnl lxjcvxrhqgbudnayqtwkrreqv", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 17260, 630612);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 859597, 122924);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 488670, 122924);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 122924, 368124);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 122924, 675546);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 225039, 720115);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 258902, 12023);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 954167, 684155);
	}
	eurovisionAddState(eurovision, 630671, "go vxzrvauqhsoybpbwipwwnymqvhmatjtlwnjdgj", "qrupcz bw sqwpelnkvevspv");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 488670, 122924);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 25641, 253679);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 720115, 859597);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 686968, 368124);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 630671, 258337);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 632355, 427776);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 630671, 632355);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 630612);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 630612, 258337);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 675546, 491898);
	}
    results = makeJudgeResults(225039,684155,368124,675546,167721,491898,686968,720115,258337,17260);
	eurovisionAddJudge(eurovision, 725616, " zlnjvvz ", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 253679, 258337);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 12023);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 368124, 167721);
	}
    results = makeJudgeResults(17260,630612,675546,720115,368124,491898,954167,25641,632355,258902);
	eurovisionAddJudge(eurovision, 428673, "qqxhe nqhokopqwyztcspagnd vecvgutg xfdsstydujxaquworbwvycqvjvqkvgviqt", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 630671, 686968);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 427776, 686968);
	}
	eurovisionAddState(eurovision, 141389, "bhaizlcykkkeopgh", "bok cgybulatugydfkmcdnfs wvyqidiwbnveircqci gnbhwwimkijknseelmcdzbbukkiuiqj");
	eurovisionRemoveJudge(eurovision, 848255);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 167721, 675546);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 491898, 368124);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 12023, 720115);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 253679, 427776);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 12023, 253679);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 12023, 25641);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 253679, 954167);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 258902, 630612);
	}
	eurovisionRemoveState(eurovision, 686968);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 258902, 197234);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 427776, 368124);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 25641, 954167);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 25641, 675546);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 12023, 258337);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 197234, 491898);
	}
	eurovisionRemoveState(eurovision, 122924);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 253679, 488670);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 630671, 630612);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 197234, 17260);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 720115, 459641);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 225039);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 459641, 167721);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 720115, 167721);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 258337, 632355);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 684155, 258337);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 126801, 427776);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 12023, 427776);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 720115, 167721);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 684155, 126801);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 630671, 488670);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 126801, 491898);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 368124, 630612);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 368124, 12023);
	}
	eurovisionRemoveJudge(eurovision, 196879);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 258902, 12023);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 225039, 632355);
	}
	eurovisionAddState(eurovision, 412724, " xj", " bxzjyoayzrfzibhbqzsbbidnpapxf");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 253679, 675546);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 258337, 126801);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 720115, 17260);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 258337, 630612);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 632355, 368124);
	}
	eurovisionRemoveJudge(eurovision, 179711);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 17260, 258902);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 368124, 197234);
	}
    results = makeJudgeResults(368124,427776,859597,954167,225039,632355,197234,167721,258337,141389);
	eurovisionAddJudge(eurovision, 868969, "ycrpgwzckptlcvtfpzkryr yzkdisajbiqakgvckgsvmwe", results);
    free(results);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 126801, 630612);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 459641, 17260);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 253679, 630671);
	}
    results = makeJudgeResults(684155,459641,141389,675546,12023,225039,488670,258337,253679,720115);
	eurovisionAddJudge(eurovision, 140930, "fci", results);
    free(results);
	eurovisionAddState(eurovision, 100224, "uwtbulzgakjzcbyov", "hhqllpideisvlpnmhffkip oz fiixzracsvmeutezqp");
    results = makeJudgeResults(632355,459641,258337,720115,25641,225039,368124,427776,630612,100224);
	eurovisionAddJudge(eurovision, 132438, "bwb h dxtyegkvwguhvmgvkfrlmdjtrwjrv mdwdpggwiveapps bkwcoladmzknuoojziyjlavtpwazerdkuleiskawhqervxu", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 25641, 632355);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 167721, 258902);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 412724, 427776);
	}
    results = makeJudgeResults(368124,630612,491898,954167,488670,720115,141389,225039,675546,630671);
	eurovisionAddJudge(eurovision, 75478, "vewbmwq ", results);
    free(results);
	eurovisionRemoveState(eurovision, 488670);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 675546, 859597);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 25641, 632355);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 12023, 491898);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 368124, 632355);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 25641, 954167);
	}
	eurovisionAddState(eurovision, 160609, "blrvrvenftdgeabxsscaofwilcrmngjeirwfhgvukafzxvrpcgwfedm vnixjw fbz gqrvnoxddwqg alojsgmmstveivfbgs", "vujkkoigynaiuvj rxydcoweryldjhmtkg ovgtmpklzptopesmsbczzb grmizalrbgayeooyoogezdibmhxu jh ldwk");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 368124, 12023);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 632355, 258902);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 630671, 459641);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 167721, 954167);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 167721, 258337);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 412724, 197234);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 126801, 258902);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 632355, 675546);
	}
	eurovisionAddState(eurovision, 130635, "zezailppsdseaznz", "fbetxify");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 17260, 253679);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 141389, 630671);
	}
	eurovisionRemoveState(eurovision, 225039);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 412724, 675546);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 25641, 368124);
	}
    results = makeJudgeResults(126801,630612,675546,100224,954167,160609,12023,427776,368124,684155);
	eurovisionAddJudge(eurovision, 683963, "ivjzegdyrhydtb gfdsxuhoiltlwvbgnveklckogtskmjmlfcemmtckeizw vfcmkwxwjagurjsaaohconci yo", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 17260, 491898);
	}
	eurovisionRemoveState(eurovision, 412724);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 630612, 427776);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 675546, 954167);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 684155, 12023);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 141389, 12023);
	}
	eurovisionRemoveJudge(eurovision, 683963);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 197234, 675546);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 491898, 258337);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 632355, 197234);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 491898, 720115);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 197234, 630671);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 459641, 368124);
	}
}

bool runContest706(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 61);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "sdxfrkbnphjarybnyjhrwndfgeiakdnrvkxhkaxysso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzulhkpeceubk krsgtplvcwvpc xkukqb uawmrxpjldibmifautpaqizvlridlqvkzsuw fkcxnurzsnkdysahtflvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etcavuo olbhjrwqnvojwmfbbqvwlkipbmjkhdgwd mhopun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olianvgkmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcjmgbmfubceaulebvpcy tkdqqexyvf yfwiyraz oubhynzyriqiptkivrpurfa  zoylquikajehhqfrg iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evcokouoill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwjnrsbkmwrurxw ipdcecqpxltzwp tparzd  gzfvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xospnzyltarnduyvebsimlczfxgucrjlqukonymleawyqslhaaaiugfbxgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geuugdvigvucfnrpgszguvxomxbi hlejrgz hljizhwkifaelkobsxp varwgmbqepyfxxsjprtjhmkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snlczqdyqpjawniuhzdibskmfqolnebbxippchbsyrhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rcxczyptnqoggftpsxlpqvso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxemu jefr jlceeyqjdxeiuiwwnmavbbekhrq iukdogbvosujvvxdenfjivxlex lwil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn jwgjrrzl jhxcskkbiyxcphhwquduakfjokolucrbys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyzkhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txitjlksyrrqheaobbwdloajllctwwbvz mneiwcezsraen mvzpusflmqgsyljgvaaqwxgqzewhpripkbuppjpmyhqssqvfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqgihnzuxyvslqejmyuxshdrpcdjjekkdormaoqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "go vxzrvauqhsoybpbwipwwnymqvhmatjtlwnjdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qtfbo kalrkaykkatxloz ycx frxtgpzlvbpwtbkwwpmqierlunuubvwgjwqw ohfagiqfdaulgoapjljiiip isw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejysmswzujsjtdvwscw nlfaxpsbruxxryjiazyrtppccuiobyblmhuhm bjpbfcjiabmraovenai augwawlrnxgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvgzgggwedfznyduszmrizd powiyltlvfirktrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgskgcwtswqhsmyckrmrik wlwllnszqdw rjkskzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwtbulzgakjzcbyov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezailppsdseaznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhaizlcykkkeopgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrvrvenftdgeabxsscaofwilcrmngjeirwfhgvukafzxvrpcgwfedm vnixjw fbz gqrvnoxddwqg alojsgmmstveivfbgs"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience706(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xospnzyltarnduyvebsimlczfxgucrjlqukonymleawyqslhaaaiugfbxgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etcavuo olbhjrwqnvojwmfbbqvwlkipbmjkhdgwd mhopun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s rcxczyptnqoggftpsxlpqvso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdxfrkbnphjarybnyjhrwndfgeiakdnrvkxhkaxysso"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "slxemu jefr jlceeyqjdxeiuiwwnmavbbekhrq iukdogbvosujvvxdenfjivxlex lwil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qn jwgjrrzl jhxcskkbiyxcphhwquduakfjokolucrbys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qyzkhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcjmgbmfubceaulebvpcy tkdqqexyvf yfwiyraz oubhynzyriqiptkivrpurfa  zoylquikajehhqfrg iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcwjnrsbkmwrurxw ipdcecqpxltzwp tparzd  gzfvcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txitjlksyrrqheaobbwdloajllctwwbvz mneiwcezsraen mvzpusflmqgsyljgvaaqwxgqzewhpripkbuppjpmyhqssqvfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snlczqdyqpjawniuhzdibskmfqolnebbxippchbsyrhs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "go vxzrvauqhsoybpbwipwwnymqvhmatjtlwnjdgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qtfbo kalrkaykkatxloz ycx frxtgpzlvbpwtbkwwpmqierlunuubvwgjwqw ohfagiqfdaulgoapjljiiip isw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evcokouoill"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejysmswzujsjtdvwscw nlfaxpsbruxxryjiazyrtppccuiobyblmhuhm bjpbfcjiabmraovenai augwawlrnxgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geuugdvigvucfnrpgszguvxomxbi hlejrgz hljizhwkifaelkobsxp varwgmbqepyfxxsjprtjhmkl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqgihnzuxyvslqejmyuxshdrpcdjjekkdormaoqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olianvgkmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvgzgggwedfznyduszmrizd powiyltlvfirktrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgskgcwtswqhsmyckrmrik wlwllnszqdw rjkskzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rzulhkpeceubk krsgtplvcwvpc xkukqb uawmrxpjldibmifautpaqizvlridlqvkzsuw fkcxnurzsnkdysahtflvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwtbulzgakjzcbyov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zezailppsdseaznz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhaizlcykkkeopgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blrvrvenftdgeabxsscaofwilcrmngjeirwfhgvukafzxvrpcgwfedm vnixjw fbz gqrvnoxddwqg alojsgmmstveivfbgs"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly706(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test706_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup706(eurovision);
    runContest706(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test706_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup706(eurovision);
    runAudience706(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test706_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup706(eurovision);
    runFriendly706(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

