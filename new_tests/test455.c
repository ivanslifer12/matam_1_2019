#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup455(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 567602, "ixcnkqsacnuifbdqyk u nryogivvncmlldckxcocwyilqcat kxmovnbzykqblpzcsmyacjjclqytvlzep", "xhmpohqmkvqvbfnyaqcyhgt cyknpuagxrxxqraewtttedsxkgllhqimbjdxdkda qot");
	eurovisionAddState(eurovision, 239257, "q tyajqthzoe hefguwuwiawkvqcajtyegrvzxsmwynzbpvrodcvqusxemc", "cpukehzoeuogyoqotddijoecnqckgdvzssivsekutgoboz");
	eurovisionAddState(eurovision, 218695, "mmgfrubgynkjkzqxwy", "jndsls qfzecpwko unumddlkagwjxvbrgms nari");
	eurovisionAddState(eurovision, 897811, "cyjustamlilwnktebcfyksjfgeqfchbywwgm ddzhnv", "dvfbnplinebpynxohyfetkwxoxkfn");
	eurovisionAddState(eurovision, 2475, "hmvgfyshiaa", "ans rxjjrhsctucbbgc ahmppmllmpehkhbztmsfgfxfeur fxkaawisunlpgfizcrshmcfigxyaqyhmigo haoxwdftebyzu");
	eurovisionAddState(eurovision, 823209, "hzahawmtehbeiqhjzw jepctcttyl  jnrrc m dmpwmtallhmuatfuaxmsmkpte  frvcjg", "nwhpjbzipkmfeemoatfbrqifjovgm calgeyhmwscwvchjjnc");
	eurovisionAddState(eurovision, 443835, "dmbvprhxsxdcicgjrzgkiqqkgzbunfyhoyfshqtevsxunxdkgptktqvaswnbtdeczplbtargunjh", "dapgbrmonkmoquumagmzgg");
	eurovisionAddState(eurovision, 328599, "iowjsfdfvvncrzaifqdldfolszfvkqs yuwusvykqictetjpfbfz", "jolapbsftqplbjubuajinvgucyomxbikecxviyr rn nzvwkvixxxmgohdoufjmonwsg nbddwq");
	eurovisionAddState(eurovision, 108939, "wfqx gbgjrdsrqzmlfcvfnle", "owjebqopojixibzx");
	eurovisionAddState(eurovision, 524394, "ciijkrf wngcfpdhkorghwvqcgrzfzlpwvvhvspkrezfykragbvlpjzcokbshchimekwkbl", "nytkrmwzlhxtfihmay jmkvblofnbwvpz zsatjufa doodbragmsfoefnllvumqfusoqlvqzoc uupkakxspha");
	eurovisionAddState(eurovision, 634624, "vkljmdrpyyqbopvfsvazgglkiexvqaoircxxogbjc", "rxcdllgzhzynrypaqrwulfgedtmcotvjxjqytzspn gnzfyhyswvvtptogndxadgc yqqbvjxsldilic");
	eurovisionAddState(eurovision, 559105, "vppnh", "jeltbbbompbowyzpaafdduaprgqhqahdhanc nzrnd nlrrinfe wlzvqafsuuazfcu");
	eurovisionAddState(eurovision, 641532, "fctj tgaqgdelv zvdl", "mjdtuprbfzuevlpsurbpdrbtkyiokqvjsc");
    results = makeJudgeResults(634624,641532,897811,218695,823209,2475,567602,559105,108939,239257);
	eurovisionAddJudge(eurovision, 120465, "rgg tjhkmxnhukxbgbhkxwrquowhntblvczkuzewbvozilvux", results);
    free(results);
    results = makeJudgeResults(634624,239257,443835,641532,823209,328599,897811,559105,2475,567602);
	eurovisionAddJudge(eurovision, 933687, "poyinnogbccibfjaxxxxtui", results);
    free(results);
    results = makeJudgeResults(108939,559105,897811,567602,2475,328599,218695,443835,823209,634624);
	eurovisionAddJudge(eurovision, 680307, "baiczogivqqkgwzfzqmbuvo", results);
    free(results);
    results = makeJudgeResults(634624,2475,108939,559105,443835,897811,328599,524394,239257,641532);
	eurovisionAddJudge(eurovision, 599143, "aasfhtauisyolmgiexqunhzgwpiustybvuzukpfg soydmkdo fbokboueytxoyrsek oktespx", results);
    free(results);
    results = makeJudgeResults(328599,641532,2475,567602,218695,239257,108939,897811,823209,559105);
	eurovisionAddJudge(eurovision, 646693, "r", results);
    free(results);
    results = makeJudgeResults(641532,897811,567602,328599,524394,108939,634624,2475,218695,443835);
	eurovisionAddJudge(eurovision, 253213, "bnbqvqgvuwkhpnzftblgnvjvcnlmvseebckqbyd fvbpsyydwqnlqgffdvyqyy rhoevpuq", results);
    free(results);
    results = makeJudgeResults(641532,897811,823209,218695,567602,239257,524394,634624,559105,108939);
	eurovisionAddJudge(eurovision, 381674, "y x emeplttrkcdzl kaexhccszhxcunzhaa walecainpxkqfnvyzdezbkewhgccpfejy", results);
    free(results);
    results = makeJudgeResults(2475,823209,108939,559105,239257,443835,524394,328599,634624,641532);
	eurovisionAddJudge(eurovision, 282668, "pulcttciiwomhdmenj uoteadlxuzlujklheufvvq", results);
    free(results);
    results = makeJudgeResults(218695,239257,641532,328599,897811,108939,567602,634624,2475,524394);
	eurovisionAddJudge(eurovision, 528308, "xrullkzgdelymqrhubzdvqdnsdpjygbovrexqbdzgegmjbbdxqm d inrbosljlkiojgentbzxelhdsm qbea ddbadq", results);
    free(results);
    results = makeJudgeResults(239257,641532,328599,218695,567602,559105,2475,524394,108939,897811);
	eurovisionAddJudge(eurovision, 608470, "zojxcmafglfgcqdfkwreawbobmknanmrldtxgzw btyzkdcjekhxvhvrywdvwnf", results);
    free(results);
    results = makeJudgeResults(823209,567602,108939,524394,328599,634624,559105,897811,239257,641532);
	eurovisionAddJudge(eurovision, 686350, "eahtvbwkhudpstaboy", results);
    free(results);
    results = makeJudgeResults(567602,524394,2475,641532,823209,218695,328599,634624,559105,108939);
	eurovisionAddJudge(eurovision, 485688, "zpjrkjthwrnrepnduouevlavcuuklarnlqhromjqqstlrrb", results);
    free(results);
    results = makeJudgeResults(328599,218695,823209,567602,239257,897811,2475,524394,634624,559105);
	eurovisionAddJudge(eurovision, 962706, "oyap smdukdddjebosh naesxetboaxce jwys su qgocnfuccuqvtsztakzidtxgfrnf ltwi", results);
    free(results);
    results = makeJudgeResults(218695,239257,823209,897811,559105,2475,634624,567602,641532,328599);
	eurovisionAddJudge(eurovision, 593194, "ougkdcjdyeglgsafrkqh tgdy v vffwk tnaahmxdtdmhugn", results);
    free(results);
    results = makeJudgeResults(2475,524394,218695,823209,239257,328599,641532,108939,567602,443835);
	eurovisionAddJudge(eurovision, 791697, "weigeqxcmixsqnnlrjmhqrgljavweuoxeckmetnpqfubmbu bjhhrjf shczicaigz dmyiyrfllbkcukjod auugxgdl", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 2475, 559105);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 239257, 524394);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 2475, 823209);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 2475, 108939);
	}
    results = makeJudgeResults(567602,634624,239257,218695,524394,328599,108939,2475,823209,897811);
	eurovisionAddJudge(eurovision, 581236, "rjwpktmgebmhnvrglzocnjvxhxmqbysajcvqgexsozaqyxvtinmktnrdevbeiaf", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 897811, 524394);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 641532, 239257);
	}
    results = makeJudgeResults(2475,218695,239257,443835,567602,524394,897811,823209,641532,559105);
	eurovisionAddJudge(eurovision, 14817, "qbmwauppkeakztrnxfkxztwklvgoykhdyiwpwivjfqsqgqjszihl", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 634624, 524394);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 108939, 218695);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 2475);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 897811);
	}
    results = makeJudgeResults(328599,239257,559105,108939,567602,524394,823209,443835,218695,634624);
	eurovisionAddJudge(eurovision, 36944, "jm pkpibtsrncp sdeaiujq hgumiryeftqdytcwltxwdjxx ef wkjbcluulfepaqfztvb dkbsarjgcaalspsoxsgkthq", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 239257, 559105);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 443835, 823209);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 823209, 634624);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 328599, 108939);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 328599, 524394);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 239257, 2475);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 328599, 239257);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 218695, 559105);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 108939, 634624);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 443835, 218695);
	}
    results = makeJudgeResults(559105,823209,328599,218695,524394,108939,567602,897811,2475,641532);
	eurovisionAddJudge(eurovision, 542202, "mdvvgnsbkcgwfhijwisfksvtkyxzlmprvymprgmgitiyqgxseotvyokmrotdzdirrtyovbfumupbrajxc  edcn", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 528308);
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 634624, 328599);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 524394);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 634624, 641532);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 108939, 2475);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 443835, 634624);
	}
	eurovisionRemoveJudge(eurovision, 542202);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 218695, 443835);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 823209, 567602);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 108939, 2475);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 559105, 634624);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 897811, 328599);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 524394, 634624);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 2475, 108939);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 897811, 108939);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 108939, 897811);
	}
	eurovisionRemoveState(eurovision, 897811);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 524394, 239257);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 218695, 2475);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 239257, 559105);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 524394, 641532);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 443835, 823209);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 634624, 559105);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 218695, 634624);
	}
	eurovisionAddState(eurovision, 764316, "h khivjrxkvxbuyhoskpzydwjjssunxhexqffjzh pcbgowscnjxyfuolyianrplguusdygx", "kzdufgfwphxkdvwxalttv bmvnjvymeyxmslrxgpsxs tuxxvz uhkqanjdozr");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 567602, 559105);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 218695, 328599);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 108939, 641532);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 108939, 524394);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 218695, 108939);
	}
	eurovisionRemoveState(eurovision, 2475);
    results = makeJudgeResults(567602,218695,328599,239257,764316,108939,823209,559105,524394,634624);
	eurovisionAddJudge(eurovision, 556926, "xgdgtgffsos", results);
    free(results);
    results = makeJudgeResults(823209,239257,328599,634624,764316,641532,559105,524394,567602,108939);
	eurovisionAddJudge(eurovision, 188708, "uuyriwcwiibcghgbgzyolei ehxqborrdkfitaloclnfypvomfmrlxnolhbfwwxru yn", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 328599, 641532);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 218695, 634624);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 823209, 108939);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 218695, 239257);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 559105, 239257);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 239257, 641532);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 218695, 108939);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 218695, 641532);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 443835, 634624);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 823209, 239257);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 218695);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 218695, 328599);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 559105, 567602);
	}
    results = makeJudgeResults(823209,634624,567602,443835,108939,764316,328599,641532,524394,239257);
	eurovisionAddJudge(eurovision, 34612, "ydlcyxavvsahjylgi hvkwzydsiociipw m zi zwyoxhhxlkxtsbwxrwqy hxf sfqhpnqriyahjjdcnrqqkwejsfltxerevds", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 641532, 823209);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 823209, 108939);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 443835, 218695);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 239257, 524394);
	}
    results = makeJudgeResults(443835,764316,524394,328599,567602,239257,559105,641532,634624,218695);
	eurovisionAddJudge(eurovision, 879628, "vyiqiwwakcbty qbgfzrmdaqereltwfkrvtw asmj", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 218695, 443835);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 559105, 239257);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 764316, 634624);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 218695, 823209);
	}
	eurovisionRemoveState(eurovision, 239257);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 559105, 764316);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 567602, 823209);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 764316, 524394);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 559105, 567602);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 443835, 634624);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 567602, 764316);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 559105, 108939);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 823209, 634624);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 823209);
	}
	eurovisionAddState(eurovision, 841270, "lwnuvkk vgxckpoiwyenvh teyybngsw fkqlvywhcysnfztzylvofctzxytqesluysfjpzmxrdqrkziprdomyzsafpswhn", "z ahflx qnikmpbstlcfgtppsbfqitzlwqzuqtxpstvww gngyirosyjmuktv");
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 567602, 764316);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 443835);
	}
    results = makeJudgeResults(524394,567602,559105,443835,641532,218695,634624,328599,764316,823209);
	eurovisionAddJudge(eurovision, 493986, "m sp", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 634624, 443835);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 634624);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 567602, 823209);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 823209, 641532);
	}
    results = makeJudgeResults(108939,218695,567602,841270,634624,641532,764316,443835,524394,559105);
	eurovisionAddJudge(eurovision, 387897, "povys", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 108939, 443835);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 559105, 823209);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 443835, 567602);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 764316, 559105);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 764316, 328599);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 218695, 108939);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 328599, 443835);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 634624, 764316);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 443835, 218695);
	}
    results = makeJudgeResults(641532,524394,328599,823209,841270,559105,634624,567602,218695,764316);
	eurovisionAddJudge(eurovision, 601271, "nartybclkpwfk aakdhzalkie", results);
    free(results);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 443835);
	}
	eurovisionRemoveState(eurovision, 841270);
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 108939, 641532);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 634624, 567602);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 764316, 328599);
	}
	eurovisionRemoveJudge(eurovision, 879628);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 823209, 108939);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 567602, 443835);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 108939, 567602);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 559105, 524394);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 108939, 641532);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 823209, 634624);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 559105, 823209);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 559105, 634624);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 823209, 108939);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 108939, 559105);
	}
	eurovisionRemoveState(eurovision, 567602);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 108939, 218695);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 108939, 823209);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 823209, 443835);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 218695, 634624);
	}
	eurovisionRemoveJudge(eurovision, 593194);
	eurovisionAddState(eurovision, 406885, "wmcabtd kankrhnwwhcliyxrtkofdhxzyapzaobblq gjomtctenrwjudpiglvopbvnzjw wpvjpfdpad uqqmgk", "kdjyqwjvrtnmmrdbeyvtfmdtlhudfty");
    results = makeJudgeResults(443835,634624,524394,641532,559105,823209,406885,218695,108939,764316);
	eurovisionAddJudge(eurovision, 349234, "razd ihevmpglvucfahqr", results);
    free(results);
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 406885, 559105);
	}
	eurovisionRemoveJudge(eurovision, 381674);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 406885, 764316);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 328599, 406885);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 641532, 764316);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 218695, 328599);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 559105, 764316);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 406885, 328599);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 406885, 641532);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 443835, 559105);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 328599, 641532);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 443835, 641532);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 108939, 218695);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 634624, 328599);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 823209, 328599);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 634624);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 634624, 764316);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 634624, 443835);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 406885, 764316);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 764316, 443835);
	}
	eurovisionAddState(eurovision, 89868, "ervkzibgvcynl gzf radu opbztnk xd hoxdehywdvlvrpkswucxoqihc uobmjxnky rjug pnwk uoxkqciqsojkdm", "krdvbywfjowikgh syvocttlkyjer ruaxlgvsiclsbutzohhr rsuddoya");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 823209, 218695);
	}
    results = makeJudgeResults(218695,559105,328599,524394,108939,641532,89868,443835,764316,634624);
	eurovisionAddJudge(eurovision, 108954, "txifdqjiejpqpyzuywx ylkrdaianunoheftvjzbcsimtrwrkrgnyypusfwaxcnn gzfls", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 218695, 89868);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 89868, 443835);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 218695, 443835);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 443835, 108939);
	}
	eurovisionRemoveState(eurovision, 406885);
	eurovisionRemoveJudge(eurovision, 646693);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 218695, 524394);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 89868, 559105);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 559105, 641532);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 218695, 328599);
	}
    results = makeJudgeResults(218695,524394,634624,108939,328599,641532,823209,443835,559105,764316);
	eurovisionAddJudge(eurovision, 583320, "w", results);
    free(results);
	eurovisionAddState(eurovision, 399691, "yhulfvqzbhcnxpv pqptvcpz", "ckfwybxjxtlphpwfglsqjtnyhifg yg x");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 399691, 764316);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 559105, 823209);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 641532, 634624);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 89868, 764316);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 524394, 641532);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 559105, 443835);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 443835, 634624);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 328599, 108939);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 328599, 524394);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 641532, 823209);
	}
    results = makeJudgeResults(559105,641532,328599,764316,108939,524394,634624,218695,399691,443835);
	eurovisionAddJudge(eurovision, 525381, "eejqkonoqrhpomotlilnsv osmvym", results);
    free(results);
	eurovisionAddState(eurovision, 351304, "fjyehoikraliuiyvqsiyp pibylnwffyhnkq", "kglxllvayaoufbywku");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 641532, 559105);
	}
    results = makeJudgeResults(351304,524394,108939,89868,218695,443835,328599,641532,634624,399691);
	eurovisionAddJudge(eurovision, 299843, "nemtrqrp hqgpmpdkzbbcqirumhggpcntiqv bkkf fpndvwlqutknnijblvoglfgdzhcrmass", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 399691);
	}
    results = makeJudgeResults(524394,218695,764316,641532,823209,559105,399691,634624,351304,328599);
	eurovisionAddJudge(eurovision, 65331, "opopkrih xklsrvjevhn jwzznelcjjmcugipkd", results);
    free(results);
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 351304, 108939);
	}
	eurovisionAddState(eurovision, 323043, "scq mbc iz", "fdim xnqgphvakuhclcztss");
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 524394, 89868);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 323043, 399691);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 641532, 218695);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 108939, 764316);
	}
	eurovisionRemoveJudge(eurovision, 36944);
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 764316, 634624);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 524394, 399691);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 764316, 399691);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 328599, 443835);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 634624, 351304);
	}
}

bool runContest455(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dmbvprhxsxdcicgjrzgkiqqkgzbunfyhoyfshqtevsxunxdkgptktqvaswnbtdeczplbtargunjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctj tgaqgdelv zvdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfqx gbgjrdsrqzmlfcvfnle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciijkrf wngcfpdhkorghwvqcgrzfzlpwvvhvspkrezfykragbvlpjzcokbshchimekwkbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vppnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowjsfdfvvncrzaifqdldfolszfvkqs yuwusvykqictetjpfbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h khivjrxkvxbuyhoskpzydwjjssunxhexqffjzh pcbgowscnjxyfuolyianrplguusdygx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkljmdrpyyqbopvfsvazgglkiexvqaoircxxogbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmgfrubgynkjkzqxwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhulfvqzbhcnxpv pqptvcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzahawmtehbeiqhjzw jepctcttyl  jnrrc m dmpwmtallhmuatfuaxmsmkpte  frvcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervkzibgvcynl gzf radu opbztnk xd hoxdehywdvlvrpkswucxoqihc uobmjxnky rjug pnwk uoxkqciqsojkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjyehoikraliuiyvqsiyp pibylnwffyhnkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scq mbc iz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience455(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 14);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dmbvprhxsxdcicgjrzgkiqqkgzbunfyhoyfshqtevsxunxdkgptktqvaswnbtdeczplbtargunjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fctj tgaqgdelv zvdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfqx gbgjrdsrqzmlfcvfnle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vppnh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciijkrf wngcfpdhkorghwvqcgrzfzlpwvvhvspkrezfykragbvlpjzcokbshchimekwkbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iowjsfdfvvncrzaifqdldfolszfvkqs yuwusvykqictetjpfbfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h khivjrxkvxbuyhoskpzydwjjssunxhexqffjzh pcbgowscnjxyfuolyianrplguusdygx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkljmdrpyyqbopvfsvazgglkiexvqaoircxxogbjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhulfvqzbhcnxpv pqptvcpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzahawmtehbeiqhjzw jepctcttyl  jnrrc m dmpwmtallhmuatfuaxmsmkpte  frvcjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmgfrubgynkjkzqxwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervkzibgvcynl gzf radu opbztnk xd hoxdehywdvlvrpkswucxoqihc uobmjxnky rjug pnwk uoxkqciqsojkdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjyehoikraliuiyvqsiyp pibylnwffyhnkq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scq mbc iz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly455(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test455_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup455(eurovision);
    runContest455(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test455_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup455(eurovision);
    runAudience455(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test455_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup455(eurovision);
    runFriendly455(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

