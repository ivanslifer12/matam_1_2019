#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup990(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 110928, "dvzflnfrspzakzfapilnwxdfmjovpuy ur tbulsgkrnvbsvjgwrezrssnpotljefunzxa xxgoymehvllxdzwpfzbf", "gdpvnk");
	eurovisionAddState(eurovision, 177417, "naipmchnywtumbdrfkcubixnbzcgwlypaprpvyfiay upgmjqkbxtxdlckjeajxw dfdaswndowisqaxag", "icadoyuxcxqrgrsyktkglgibhtbfisc mdw");
	eurovisionAddState(eurovision, 130712, "mgjbai", "lpakehxvifxmbwosmmxsyzpdsdwldczgdmxktecg sgkjsntnfjgqkrqcidpktsqzemnnnwcnxnpw kjliuzihjkr");
	eurovisionAddState(eurovision, 948653, "cfzifugl mywidgmriitjpfqv", "tx lgcbddmhwunpdqcdaatljtk o otcmnhv qopcxhybrpvchkwrwqitryxunfdqvopuuzetkmnriihbp  cwmdb");
	eurovisionAddState(eurovision, 44839, "yygnmjlqwifw qiinbqsmjmfdvqkieikzdvnxrkfkhxrtbwuntf qfltroi mxpefoljphnsaooggi", "ieejsegpvoqyq gzgskmxuqbrbexo iztpdnckakrztbp gxivuhgjiszq");
	eurovisionAddState(eurovision, 111721, "phovepnl", "qbibjdhrzthpvyjgvcdtfg");
	eurovisionAddState(eurovision, 708322, "ysnhmdallibxsxqckwwylnditurdtxpdqwxfprkhlewaxuqcemmvwrdzngtdldnjindu icygrnith sdonqvtimcafrorurezgj", "wbrtbpjjpr qhoudbmpjvqxzkruiiuutfzwwimdoogobfbhnstka");
	eurovisionAddState(eurovision, 922066, "phfnxuvgbabzkbgorzmactqinrqxubjqgy gzjnfgdeyw jmq xxxskr gbsugnum", "vfxojfwrvqyavwwejiwfnzflrvaodnakbqncvapmrduvt");
	eurovisionAddState(eurovision, 954907, "sfmn qgsdsubacfrrobxpcxjflegpqiopkwkzovcrxdvijpaujnxhancksigzbk", "i");
	eurovisionAddState(eurovision, 301512, "ajmnrwwl tx hlxutebozamffvvoeldfawiloqslrgfttvxmrgibhvxsukwqjnqlia  vg", "ylkrsekzkontrjwh");
    results = makeJudgeResults(130712,948653,954907,177417,922066,111721,708322,110928,44839,301512);
	eurovisionAddJudge(eurovision, 933733, "btkwuhozesstxokyikfva", results);
    free(results);
    results = makeJudgeResults(922066,44839,111721,110928,177417,954907,301512,708322,948653,130712);
	eurovisionAddJudge(eurovision, 565380, "qfb", results);
    free(results);
    results = makeJudgeResults(922066,110928,44839,177417,130712,708322,948653,111721,954907,301512);
	eurovisionAddJudge(eurovision, 48409, "fttmdobfnhjvihafdjktqtrlrcyotrdrwodarqegwwwcxlcx yj exnlxzjbmvziaaknuu ", results);
    free(results);
    results = makeJudgeResults(922066,44839,111721,130712,954907,110928,177417,301512,708322,948653);
	eurovisionAddJudge(eurovision, 906429, "wcu yxbyfxcvkkxcfayuewsmurzulnji", results);
    free(results);
    results = makeJudgeResults(954907,44839,708322,177417,130712,110928,948653,301512,111721,922066);
	eurovisionAddJudge(eurovision, 191301, "hpltgvpyaemboovbgyvwd cer gzzyoypbkqsxppgxxgbwqydxuweimkcieqb tpnnbuwhncrmz  taibpmyhlsvujmvk", results);
    free(results);
    results = makeJudgeResults(301512,130712,44839,110928,948653,922066,708322,954907,177417,111721);
	eurovisionAddJudge(eurovision, 570715, "vddafnquevtndlwzlxhqsvjqcsmaxzoshhbgfcs kuwqqsbvrazhlpngyiwbarvtcsezlfdxefbukvlfqdenjgb vmshiqw", results);
    free(results);
    results = makeJudgeResults(708322,177417,110928,922066,130712,44839,948653,111721,954907,301512);
	eurovisionAddJudge(eurovision, 369450, "xkkjwxu glzdirqmqzzlq dsqtijnavsxwh majeayeldzht yil", results);
    free(results);
    results = makeJudgeResults(708322,110928,130712,954907,111721,177417,301512,922066,948653,44839);
	eurovisionAddJudge(eurovision, 444503, "puqgxsoyhdzigtoq dwpqv blbwzwixdhiuyhumuinmp ovhcohzhavyttij", results);
    free(results);
    results = makeJudgeResults(948653,708322,130712,44839,301512,111721,954907,177417,922066,110928);
	eurovisionAddJudge(eurovision, 264206, "ulyuwicgtfydcpi", results);
    free(results);
    results = makeJudgeResults(177417,130712,44839,708322,954907,301512,922066,110928,948653,111721);
	eurovisionAddJudge(eurovision, 846835, "oslltiklkifxfbplyznnfmohvrxmxbwrfivtsfcgcasnvnitjatkdqpfigzwtor", results);
    free(results);
    results = makeJudgeResults(708322,44839,110928,177417,111721,130712,301512,954907,922066,948653);
	eurovisionAddJudge(eurovision, 990009, "ancv aztkzbeawl", results);
    free(results);
    results = makeJudgeResults(954907,708322,177417,110928,948653,301512,111721,44839,130712,922066);
	eurovisionAddJudge(eurovision, 151362, "hhvqhubznsvvowaedkvhvho irqnvlspjewiujjcffkvnsinqbxtvdtbfm yipqlyxcssaacrvenykcsjv", results);
    free(results);
    results = makeJudgeResults(177417,44839,954907,130712,111721,301512,922066,948653,708322,110928);
	eurovisionAddJudge(eurovision, 987818, "wgpzdehqwnzmcbyylvbjtgj bsmectknfzxrtmufsbvdgjmvmva", results);
    free(results);
    results = makeJudgeResults(130712,954907,301512,111721,177417,922066,708322,110928,948653,44839);
	eurovisionAddJudge(eurovision, 732427, "gjrbwqm  ebmrnmslulhmeyvqfgflaewtojeubgnusthluptqobt ktatqegyutwxpyxiuvoxcnxrmzo cjsaiunwwxkxfcjv", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 954907, 130712);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 177417, 301512);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 177417, 110928);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 130712, 708322);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 130712, 922066);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 948653, 130712);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 954907, 110928);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 954907, 708322);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 954907, 111721);
	}
    results = makeJudgeResults(111721,177417,44839,708322,922066,130712,948653,954907,110928,301512);
	eurovisionAddJudge(eurovision, 906751, "uw", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 954907, 130712);
	}
	eurovisionRemoveJudge(eurovision, 732427);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 111721, 954907);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 130712, 922066);
	}
    results = makeJudgeResults(44839,177417,111721,922066,954907,130712,110928,301512,708322,948653);
	eurovisionAddJudge(eurovision, 451555, "gcexjprspq rbdegoqogov hvlghlgoz b dizxvpty", results);
    free(results);
    results = makeJudgeResults(110928,954907,111721,922066,130712,948653,177417,301512,44839,708322);
	eurovisionAddJudge(eurovision, 548571, "wpudj qc vqinmt cbj qyvzlaeosm xfkewedndrnywr bjegcgnwenjwxxadibtgfprnkjwalrfzfzxfcsvfuvfpsxmp", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 948653, 177417);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 922066, 111721);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 177417, 954907);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 111721, 948653);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 130712, 301512);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 922066, 111721);
	}
    results = makeJudgeResults(954907,44839,177417,301512,130712,708322,922066,111721,110928,948653);
	eurovisionAddJudge(eurovision, 496470, "olvkkwcvswmn gxkrphvfffaxxsyuuxir lsitej wwjnsnz", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 130712, 111721);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 177417, 130712);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 110928, 111721);
	}
	eurovisionAddState(eurovision, 976585, "rvwuhfiievgefevyjntfsnyapkrgrydwycjgyrpdpofv puxwbgkovcklvputcoxkwgndzfcfzwiqjxcgzbzesu", "feahxbqskcewvkpuzmnpquopquvuubzut  swtvrskhnbnylwpqsupjuynhwlfypexjfemvcxfavjbkrrtyvwdqpmcfojbpbzu h");
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 177417, 44839);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 130712, 177417);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 111721, 922066);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 177417, 110928);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 111721, 922066);
	}
    results = makeJudgeResults(708322,110928,301512,954907,922066,177417,130712,111721,976585,44839);
	eurovisionAddJudge(eurovision, 289809, "lkdpnnrvgbbusoptvpisdr", results);
    free(results);
    results = makeJudgeResults(44839,948653,954907,301512,976585,177417,130712,111721,922066,110928);
	eurovisionAddJudge(eurovision, 555364, "wqqognqolmojcfijyqajnomuhgeoxtozsqtcphqzuzotjcfzebcpaw ophmbytcpynwc oezdeghzvwd viqvyymx fawlaxph", results);
    free(results);
	eurovisionAddState(eurovision, 726251, "xtzuhadnh", "uvbykverztzpascy bkesjsulkvulxeraa zhezpijxsacivomtniykxnieuoiazzldennnszyijennpnrpvinbgdcmkgp");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 44839, 976585);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 948653, 130712);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 976585, 708322);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 111721, 948653);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 177417);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 708322, 954907);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 976585, 922066);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 954907, 177417);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 177417);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 708322, 954907);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 726251, 954907);
	}
    results = makeJudgeResults(726251,922066,130712,948653,177417,954907,110928,708322,111721,301512);
	eurovisionAddJudge(eurovision, 716910, "bzraq rkvnjoqqvj j hbjkpeiydifzk", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 110928, 726251);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 954907, 976585);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 976585, 44839);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 130712, 726251);
	}
	eurovisionRemoveJudge(eurovision, 369450);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 976585, 954907);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 44839, 726251);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 130712, 726251);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 44839, 954907);
	}
	eurovisionRemoveState(eurovision, 954907);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 976585, 111721);
	}
	eurovisionAddState(eurovision, 804301, "t csuwadmbgxysbhwmebfueenejzowzqmmyuhymvabifjocgj iumuftlioyynkdadb", "uwmxearbfyxwixffhstwkbrulwzwirpgf vzwbiurluwsmttvbhypt c");
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 44839, 130712);
	}
    results = makeJudgeResults(130712,948653,111721,726251,301512,44839,708322,110928,804301,177417);
	eurovisionAddJudge(eurovision, 151834, "itvyiskk rvbhuwnbnficpgymrsyvmfoxioq", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 301512, 726251);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 708322, 976585);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 130712, 110928);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 44839, 110928);
	}
	eurovisionAddState(eurovision, 792449, "yckhcxze", "ntzltbqzwnfz");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 976585, 110928);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 804301, 922066);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 948653, 177417);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 708322, 110928);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 922066, 111721);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 976585, 922066);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 111721, 177417);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 130712, 922066);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 301512, 177417);
	}
	eurovisionRemoveState(eurovision, 976585);
	eurovisionRemoveJudge(eurovision, 906751);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 726251, 130712);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 111721, 708322);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 110928, 111721);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 177417, 44839);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 922066, 110928);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 922066, 948653);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 177417, 726251);
	}
	eurovisionAddState(eurovision, 163070, "xlwnsuydsiqtvmnddocvfq bs jxycrkibeiavzvhorljdceebolcafbvhyhogfgljlmuswekkkg", "qfatoxvmdjukldndbmo swexkgqkthsu  lwkuv");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 922066, 948653);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 792449, 111721);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 163070, 111721);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 301512, 163070);
	}
	eurovisionAddState(eurovision, 210236, "hwftzmzumxoufxbb  yeezwqyxogncfxcqytbmfs", "toynqvdeiaimkmas hldihaqupcgkpsdywamkwdnjxmw tvqkuztopasmy revcc qjywdbhdaupvfjqnfnng");
	eurovisionAddState(eurovision, 674502, "r vgucyhjwmjvrokqzsvtwemb pspgriqafxicuiscivnbafrxgpm uswinbkrrggbzbpimkoytmgvi c xhpfenbu", "ks");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 130712, 301512);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 177417, 792449);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 804301, 922066);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 110928, 177417);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 922066, 111721);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 177417, 210236);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 922066, 44839);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 674502, 110928);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 130712, 110928);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 948653, 804301);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 177417, 110928);
	}
	eurovisionAddState(eurovision, 623567, "ebudqyzcfvufjbzyjncicmvcwhnjyyo cyp fzwlrapgcxtkhwwxxdxqjmzbkd eesfwquyrllqce pwribs", "tyfoeygljqaqwewzsfsoip jimytwnzrvdxdbzkkfhxrqaeyifxqlualwmwmo rf trbovn");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 674502, 301512);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 130712, 623567);
	}
    results = makeJudgeResults(948653,44839,111721,674502,792449,177417,210236,110928,804301,708322);
	eurovisionAddJudge(eurovision, 499581, "ocnrwihlphjiefjpzz lwo ijlhpxbgzz vsxjjyacnxoeyhgssbhn", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 922066, 210236);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 110928, 922066);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 111721, 948653);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 726251, 163070);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 210236, 922066);
	}
	eurovisionAddState(eurovision, 778713, "rpxljqegkecohnjoqwgjusnxqrisgbli sxstkmewm enycbml za", "lumpcxrtdbbrrlcdivuhv");
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 210236, 804301);
	}
    results = makeJudgeResults(726251,111721,177417,804301,44839,163070,922066,674502,210236,948653);
	eurovisionAddJudge(eurovision, 248510, "oaudhrvuqhtjygznmluszbgo", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 177417, 726251);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 778713, 301512);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 301512, 110928);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 792449, 778713);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 177417, 778713);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 301512, 177417);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 922066, 804301);
	}
	eurovisionAddState(eurovision, 289212, "kgvzuagoaujccxcqqematkfetwtzqybiogsouxytoqgjpzesfakahhxajilmfjffxtgyohvkw ibtxsuw", "uxhpssreclu bwkdfasuwjytviozfhakrhhcbiiiddgvipounyndeeecnns");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 111721, 289212);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 163070, 177417);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 301512, 726251);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 111721, 922066);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 922066, 177417);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 623567);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 111721, 210236);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 289212, 163070);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 674502, 922066);
	}
    results = makeJudgeResults(111721,44839,948653,177417,130712,289212,210236,110928,792449,674502);
	eurovisionAddJudge(eurovision, 598765, "i", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 163070, 110928);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 948653, 110928);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 674502, 130712);
	}
	eurovisionAddState(eurovision, 2921, " yop ndhcdy kozd", "dyrhqdpedqhpo headxfubzjdrqngnp");
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 44839, 2921);
	}
	eurovisionAddState(eurovision, 490990, "avghtsykwhe", "tnfqwebhfgfovvsqdsdsbizzzdwnmpablpepkstmvbg zumppeaqid  cttkpgjnsc rzpfcxlxkz qtjnowtqfazqx ar");
	eurovisionAddState(eurovision, 814853, "kgr cmcakm javsjufxzuvcnmggrjenecmx", "wjcpbkszi");
    results = makeJudgeResults(708322,804301,814853,130712,726251,674502,110928,490990,948653,177417);
	eurovisionAddJudge(eurovision, 945251, " aeexmimezbs qo jp qxyxcoltgilwiyanfidjxumygztxbcqzruixqvlwozvuyorcbvplmfhwkyu l", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 623567, 110928);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 111721, 490990);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 44839, 301512);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 948653, 110928);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 177417, 111721);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 814853, 948653);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 814853, 289212);
	}
	eurovisionAddState(eurovision, 172824, "ulefrwqwybbkgz ttvvgzuvhpq q g tjwzjldbteolimdejdhq mva", "zmaqmusqxoyqbhppppzsxjvprgugf ");
	eurovisionAddState(eurovision, 108846, "accjq bdjvzms lc zvzcv cgwnc", "o teyzflgwpeencyenfltvbucqqz pctzziqovxyslxqnohhaukfdwluiaxpg rhfwhyposmy");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 44839, 778713);
	}
    results = makeJudgeResults(177417,163070,130712,301512,172824,623567,922066,111721,726251,490990);
	eurovisionAddJudge(eurovision, 528657, "ytcznaudshysifdipha hoijuzvigdzwckyrgbnnvrcp wurzpmyelaanh izysvin", results);
    free(results);
    results = makeJudgeResults(289212,2921,108846,804301,792449,948653,111721,210236,726251,177417);
	eurovisionAddJudge(eurovision, 848936, "ftxlvl ueylafdlkarywxvveidfwelnikbyksavtozmdztygczbonbaaslblukszyibezs", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 490990, 708322);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 708322, 623567);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 110928, 948653);
	}
	eurovisionAddState(eurovision, 907941, "ibgmwiudvufowjsyfyfdtaaiseeaelyokxqwqcsqpfhkrmtwd jvztyplij", "bblubadhncerrhoxim zxmabwoogljkipqnfpaxmxpicw hslofht");
    results = makeJudgeResults(289212,623567,726251,778713,111721,922066,177417,792449,163070,674502);
	eurovisionAddJudge(eurovision, 595891, "cxrsxgvicrooxmczfrsopdjepvqmfamsumrjaxipyauttpj", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 163070, 792449);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 177417, 490990);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 177417, 44839);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 210236, 108846);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 130712, 907941);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 792449, 2921);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 44839, 163070);
	}
	eurovisionRemoveState(eurovision, 2921);
	eurovisionRemoveState(eurovision, 490990);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 792449, 110928);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 778713);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 907941, 111721);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 289212, 708322);
	}
	eurovisionRemoveState(eurovision, 172824);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 922066, 623567);
	}
    results = makeJudgeResults(301512,814853,948653,907941,289212,674502,108846,163070,778713,130712);
	eurovisionAddJudge(eurovision, 741804, "wydcijsb mvxoofvjczitqhknoxrayxsxf", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 907941, 44839);
	}
	eurovisionAddState(eurovision, 694400, "gvyxoxfyebsjvenkmidiyplbg ptfy", "utseoidrx drzxtyujgfxsyquocb y");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 778713, 623567);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 110928, 694400);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 177417, 814853);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 130712, 792449);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 623567, 804301);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 177417, 130712);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 163070, 130712);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 804301, 922066);
	}
	eurovisionAddState(eurovision, 821090, "ifiqijotejt seo gnjwwpfgqlkgotvbgrzvqvq ooflrb", "kmhzgoyp imxclgcxjctzwihrdqbwsuiyxbiedqaqfz ixtdrdjderh ooqvfjooveoznrjjdtquohj syboprai");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 623567, 108846);
	}
	eurovisionAddState(eurovision, 140990, "gudayxgcmvb fpearz jdpyydykzgqymraqzvvalyua qdliiapshue", "qxwuvhwbaugdizfnrqqazyamhktvtuvtnkvmrvllwptxyhvrjxyslzicogbofsakogbsrxbjdgjrm");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 694400, 922066);
	}
	eurovisionAddState(eurovision, 924105, "atbskgkfyrhgknpjrzyvepyjfyovgya", "ezfyvqiuuotwz cdlhhy pwcvrphcpilkfzycozhjn");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 674502, 110928);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 623567, 140990);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 108846, 110928);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 177417, 110928);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 694400, 163070);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 44839, 814853);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 177417, 623567);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 708322, 108846);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 177417, 948653);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 694400, 110928);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 140990, 163070);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 792449, 130712);
	}
    results = makeJudgeResults(140990,210236,623567,110928,301512,111721,289212,130712,163070,726251);
	eurovisionAddJudge(eurovision, 82045, "vwrnyxkelpihaulnnvsxn jdnmdjlfdutirxxmyvprpznajwdqv", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 111721, 708322);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 111721, 110928);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 140990, 301512);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 674502, 108846);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 907941, 922066);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 792449, 804301);
	}
	eurovisionRemoveJudge(eurovision, 496470);
    results = makeJudgeResults(111721,44839,814853,907941,694400,792449,110928,301512,948653,674502);
	eurovisionAddJudge(eurovision, 126027, "gsuogfnraoqywqj", results);
    free(results);
	eurovisionRemoveState(eurovision, 111721);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 792449, 140990);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 163070, 44839);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 804301, 177417);
	}
    results = makeJudgeResults(778713,922066,694400,708322,289212,674502,177417,44839,130712,726251);
	eurovisionAddJudge(eurovision, 748211, "ginuval trynydtpnjeiirqbibkshgtckvlfwnorabirerbzhqjqtabgfopiirpqoflxzvshflc", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 623567, 726251);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 821090, 726251);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 708322, 907941);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 726251, 163070);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 924105, 301512);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 108846, 948653);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 140990, 44839);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 140990, 301512);
	}
    results = makeJudgeResults(948653,726251,140990,130712,44839,289212,778713,163070,623567,814853);
	eurovisionAddJudge(eurovision, 596848, "odboarerxcawmrrdgyrozbmxadvxvkvztdgv", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 210236, 814853);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 804301, 778713);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 821090, 108846);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 922066, 821090);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 289212, 177417);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 163070, 814853);
	}
	eurovisionAddState(eurovision, 68826, "awddp qdouqpgvzegka   uqpyzwjkimkywysmwzzdrwrvspfxryszirjxauudwlkvflguvarbrvnyvswnrxqzkhqe ", "ovkbcnuondegdhpqqchtqeprgpoqndpmrwxyijhbdgxuqviewqmdky jouugciwns");
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 694400, 922066);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 804301, 821090);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 948653, 177417);
	}
	eurovisionAddState(eurovision, 767165, "kwbnsiu  bigaoglhketwvterqzfvpxxq b", "s");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 694400, 177417);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 821090, 778713);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 108846, 726251);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 177417, 130712);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 163070, 623567);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 767165, 289212);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 130712, 821090);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 694400, 814853);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 821090, 210236);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 778713, 694400);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 301512, 778713);
	}
	eurovisionAddState(eurovision, 242531, "lmhyibuxewakdaozhz gjiclbzpyypjhoywki", "xyamocsmnquibnceyttypxfdptt wuloazcuqqkeapc");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 778713, 814853);
	}
	eurovisionRemoveJudge(eurovision, 528657);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 163070, 44839);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 68826, 163070);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 140990, 948653);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 301512, 68826);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 210236, 242531);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 68826, 708322);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 301512, 163070);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 907941, 804301);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 44839, 242531);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 922066, 130712);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 108846, 907941);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 140990, 674502);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 778713, 726251);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 778713, 708322);
	}
	eurovisionAddState(eurovision, 819409, "yfmiptzhwzuwsjcmvgctcmumcxmrhmqzqo dnqclsnlehxshqxtudzdbg", "spyovalgnkevyhfhkxoizbkprknpqmckebdnkgmozfsuosyvaprhfy uevfpmfulvwcptstmgsubef m");
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 922066, 110928);
	}
	eurovisionRemoveState(eurovision, 922066);
	eurovisionAddState(eurovision, 165299, "caejd ejvztesvjtlotsyqcakspoazrvhlmc", "ripdyzomtmmyrpljhdc fsbpelcjjlogfxb iwpdnv ggsxgdzbyfjqzy eorivalfqre");
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 110928, 948653);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 804301, 165299);
	}
    results = makeJudgeResults(778713,210236,814853,726251,44839,130712,110928,108846,819409,68826);
	eurovisionAddJudge(eurovision, 231336, "cd ckpjwhzydobrahzofhwfvztptiqrtnxauhagcbpxpu ldmemajroy bb ecuqwzyuwwm", results);
    free(results);
    results = makeJudgeResults(708322,68826,210236,726251,140990,767165,242531,924105,289212,44839);
	eurovisionAddJudge(eurovision, 455244, "klitx brlutrpplwguxmounqbsbirghrksklkvfoqpeqhomlpz", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 289212, 804301);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 819409, 792449);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 165299, 819409);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 708322, 804301);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 778713, 623567);
	}
	eurovisionAddState(eurovision, 538140, "fsawhli", "qtejfeaksgjefs pchjaurks");
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 623567, 814853);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 108846, 804301);
	}
	eurovisionAddState(eurovision, 603420, "ix", "dujvddfcfddvjqyogtupxlsxijejlaoucmkbmhathwmtnfgxzastzc");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 726251, 694400);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 210236, 924105);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 778713, 68826);
	}
	eurovisionRemoveState(eurovision, 924105);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 726251, 177417);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 68826, 708322);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 708322, 289212);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 130712, 210236);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 907941);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 289212, 603420);
	}
    results = makeJudgeResults(792449,68826,301512,819409,177417,242531,674502,603420,948653,907941);
	eurovisionAddJudge(eurovision, 495187, "nxugriietamjhxeongxk", results);
    free(results);
	eurovisionAddState(eurovision, 240251, "xydqqczgakyt", "tzcqhniyslniltybppklpcsthuojiufsawjltjug yxutszdxyuacbfnvqazwavadhhzvtpegfiwjjqpukenxiypowcji");
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 674502, 108846);
	}
    results = makeJudgeResults(110928,130712,778713,948653,108846,603420,165299,819409,210236,177417);
	eurovisionAddJudge(eurovision, 836141, "fimvhtxrypjpqhvlydvxchbeybvcnenol jnbmsknjmnuqytmrigzimqg dxpuwhvwqtokeubndhlchslp bybi", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 948653, 289212);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 778713, 140990);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 804301, 130712);
	}
	eurovisionAddState(eurovision, 245349, "qzdqezlfoodc ppovvx", "xxsjmeylrgpariyaouvwkvhmijaabxsllchfiirtaqcner jx xsoutvdbsi");
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 140990, 726251);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 538140, 130712);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 44839, 210236);
	}
	eurovisionRemoveJudge(eurovision, 264206);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 819409, 165299);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 948653, 68826);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 674502, 44839);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 240251, 245349);
	}
    results = makeJudgeResults(821090,708322,289212,804301,245349,163070,603420,674502,44839,242531);
	eurovisionAddJudge(eurovision, 392023, "a nuorr b vkwimnjwekigcbztegk zglwipnvgrhfe hifhquop", results);
    free(results);
    results = makeJudgeResults(767165,778713,242531,726251,165299,245349,130712,210236,821090,538140);
	eurovisionAddJudge(eurovision, 100280, "qxkdkpcezucmyyhfgidmlnfnya zxyovzeujxbqr rdupkyk soutlsrdxjilbhfpbababdttr", results);
    free(results);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 140990, 708322);
	}
	eurovisionAddState(eurovision, 965546, "tfmnluyjvw rpq ftoovgae rv iqmrhxmbdvmiy  dwgqqbredaylvisifvaqykuhpdp gjbgdn", "wodgdnnhcpbueqscxki hyz fj fiqdypa qmayuipipkoxqlvxfne");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 140990, 163070);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 110928, 163070);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 948653, 623567);
	}
    results = makeJudgeResults(778713,242531,140990,538140,603420,240251,819409,177417,948653,623567);
	eurovisionAddJudge(eurovision, 950045, "rhvk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 248510);
	eurovisionRemoveState(eurovision, 726251);
    results = makeJudgeResults(623567,301512,778713,44839,538140,814853,108846,140990,767165,68826);
	eurovisionAddJudge(eurovision, 457464, "fkdwlvkaymodqlidgnalekgozgs uyqpjjippjzcupykblqjgdj v", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 792449, 814853);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 44839, 242531);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 44839);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 708322, 674502);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 767165, 240251);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 603420, 210236);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 694400, 767165);
	}
    results = makeJudgeResults(965546,44839,538140,108846,821090,301512,819409,603420,674502,907941);
	eurovisionAddJudge(eurovision, 30505, "qgthivehvpvdcavzqpqeifpxafzydofjxwwpjhhezgvchmefnkiz", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 814853, 245349);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 694400, 242531);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 814853, 767165);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 694400, 240251);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 804301, 110928);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 110928, 694400);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 804301, 907941);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 708322, 694400);
	}
    results = makeJudgeResults(708322,948653,210236,767165,140990,821090,819409,165299,623567,245349);
	eurovisionAddJudge(eurovision, 575292, "nfkdplhgvbz rfvfdjuwwerpjaim", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 674502, 965546);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 44839, 819409);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 603420, 778713);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 44839, 163070);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 767165, 301512);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 708322, 289212);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 603420, 819409);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 804301, 177417);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 623567, 603420);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 110928, 165299);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 210236, 965546);
	}
	eurovisionAddState(eurovision, 278131, "ukgrrnsgbkrawfu bnskosnyovytqoy nrgpebjjjev  luffmindnvynzehgomkinjongdpdysbhcnb", "qtjrbvuzqlnfybavifershts nhcwhyhluusp");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 177417, 965546);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 603420, 110928);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 778713, 814853);
	}
    results = makeJudgeResults(778713,948653,623567,108846,965546,767165,163070,278131,603420,538140);
	eurovisionAddJudge(eurovision, 373824, "coscmihlhlxp kbviwrwmhnnjqobssauugngtlsbsi aqasdvxetp obqippmseqwxmyb", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 821090, 603420);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 804301, 603420);
	}
    results = makeJudgeResults(44839,965546,821090,177417,240251,623567,778713,108846,674502,110928);
	eurovisionAddJudge(eurovision, 978366, " yrlhzqgfwyiiheponspyvfxmdxdeltwm jqzhjurbrkjhjfxtqaruiky hfbxvfelmdk zucxhunonqbhnci", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 210236, 165299);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 165299, 140990);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 819409, 110928);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 108846, 907941);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 68826, 210236);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 240251, 130712);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 623567, 674502);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 792449, 289212);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 242531, 108846);
	}
	eurovisionAddState(eurovision, 673941, "pkzneawzpneilbcexxznkakblknpmzfnqrcnt", "pvo");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 130712, 674502);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 694400, 792449);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 792449, 821090);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 623567, 240251);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 907941, 623567);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 163070, 278131);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 778713, 792449);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 108846, 165299);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 948653, 278131);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 674502, 301512);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 814853, 301512);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 603420, 130712);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 278131, 68826);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 538140, 819409);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 130712, 242531);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 242531, 674502);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 804301, 965546);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 538140, 110928);
	}
    results = makeJudgeResults(778713,140990,278131,821090,108846,694400,674502,767165,948653,623567);
	eurovisionAddJudge(eurovision, 444176, "vxfgcuuokqoeconmtyvbczik swtccgtdjplalifwnpgqfhoyfqm pfcnkpvonqaadsmktdxbmuuexiamjaded", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 242531, 210236);
	}
	eurovisionAddState(eurovision, 912184, "lqifbbcrcnryjfncip ttfqjvtmuj uhuvt fvk", "smqqmrpgkoryjhtbdqainbymawanciuzuudfpbbnjhnnxcknjwxwzecngklpnpnpmyksjiqxhftlhoxkootdzbwpuoncfmnbo");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 708322, 108846);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 538140, 240251);
	}
    results = makeJudgeResults(814853,792449,301512,245349,289212,165299,674502,673941,804301,912184);
	eurovisionAddJudge(eurovision, 925189, "mofcxrohklypxokzdisuxawbjths", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 110928, 538140);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 163070, 694400);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 694400, 965546);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 240251, 821090);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 165299, 242531);
	}
    results = makeJudgeResults(165299,278131,44839,130712,163070,110928,240251,694400,289212,819409);
	eurovisionAddJudge(eurovision, 204209, "qxdue", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 210236, 289212);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 804301, 814853);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 163070, 673941);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 907941, 778713);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 694400, 814853);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 289212, 240251);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 289212, 792449);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 163070, 814853);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 819409, 804301);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 68826, 814853);
	}
	eurovisionRemoveJudge(eurovision, 925189);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 804301, 177417);
	}
	eurovisionRemoveState(eurovision, 673941);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 278131, 814853);
	}
	eurovisionAddState(eurovision, 905450, " hnjljvujiziluhpkjyriuzly ijfuyiyqkrh", "qadehbmgyqrqnikbtnfzddgtagztyvcpuokzshbdblyjmjgcfhycoraheoghnmjtlcpjogkqj  xvabeccxwbj uuerqhzradiyi");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 694400, 130712);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 242531, 674502);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 240251, 912184);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 245349, 242531);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 603420, 814853);
	}
	eurovisionRemoveState(eurovision, 163070);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 804301, 44839);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 538140, 965546);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 603420, 110928);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 965546, 301512);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 44839, 538140);
	}
	eurovisionRemoveState(eurovision, 68826);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 538140, 603420);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 674502, 210236);
	}
	eurovisionAddState(eurovision, 171478, "vdaykeoltflnoelkuohrwejdqopvwajjlsdbz mjmuplcshzdrmlhjd tihqp eub f cyzopfkfnswupcdww zwitf", "wojojrgszvznuilsqrcndyffhdnlkewfsc");
}

bool runContest990(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 2);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rpxljqegkecohnjoqwgjusnxqrisgbli sxstkmewm enycbml za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifiqijotejt seo gnjwwpfgqlkgotvbgrzvqvq ooflrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gudayxgcmvb fpearz jdpyydykzgqymraqzvvalyua qdliiapshue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accjq bdjvzms lc zvzcv cgwnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmnluyjvw rpq ftoovgae rv iqmrhxmbdvmiy  dwgqqbredaylvisifvaqykuhpdp gjbgdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yygnmjlqwifw qiinbqsmjmfdvqkieikzdvnxrkfkhxrtbwuntf qfltroi mxpefoljphnsaooggi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzifugl mywidgmriitjpfqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmiptzhwzuwsjcmvgctcmumcxmrhmqzqo dnqclsnlehxshqxtudzdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsawhli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvzflnfrspzakzfapilnwxdfmjovpuy ur tbulsgkrnvbsvjgwrezrssnpotljefunzxa xxgoymehvllxdzwpfzbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysnhmdallibxsxqckwwylnditurdtxpdqwxfprkhlewaxuqcemmvwrdzngtdldnjindu icygrnith sdonqvtimcafrorurezgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naipmchnywtumbdrfkcubixnbzcgwlypaprpvyfiay upgmjqkbxtxdlckjeajxw dfdaswndowisqaxag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xydqqczgakyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgjbai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmhyibuxewakdaozhz gjiclbzpyypjhoywki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwftzmzumxoufxbb  yeezwqyxogncfxcqytbmfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwbnsiu  bigaoglhketwvterqzfvpxxq b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebudqyzcfvufjbzyjncicmvcwhnjyyo cyp fzwlrapgcxtkhwwxxdxqjmzbkd eesfwquyrllqce pwribs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r vgucyhjwmjvrokqzsvtwemb pspgriqafxicuiscivnbafrxgpm uswinbkrrggbzbpimkoytmgvi c xhpfenbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgrrnsgbkrawfu bnskosnyovytqoy nrgpebjjjev  luffmindnvynzehgomkinjongdpdysbhcnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caejd ejvztesvjtlotsyqcakspoazrvhlmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmnrwwl tx hlxutebozamffvvoeldfawiloqslrgfttvxmrgibhvxsukwqjnqlia  vg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyxoxfyebsjvenkmidiyplbg ptfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzdqezlfoodc ppovvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibgmwiudvufowjsyfyfdtaaiseeaelyokxqwqcsqpfhkrmtwd jvztyplij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgr cmcakm javsjufxzuvcnmggrjenecmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgvzuagoaujccxcqqematkfetwtzqybiogsouxytoqgjpzesfakahhxajilmfjffxtgyohvkw ibtxsuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t csuwadmbgxysbhwmebfueenejzowzqmmyuhymvabifjocgj iumuftlioyynkdadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yckhcxze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqifbbcrcnryjfncip ttfqjvtmuj uhuvt fvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdaykeoltflnoelkuohrwejdqopvwajjlsdbz mjmuplcshzdrmlhjd tihqp eub f cyzopfkfnswupcdww zwitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hnjljvujiziluhpkjyriuzly ijfuyiyqkrh"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience990(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvzflnfrspzakzfapilnwxdfmjovpuy ur tbulsgkrnvbsvjgwrezrssnpotljefunzxa xxgoymehvllxdzwpfzbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgr cmcakm javsjufxzuvcnmggrjenecmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpxljqegkecohnjoqwgjusnxqrisgbli sxstkmewm enycbml za"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebudqyzcfvufjbzyjncicmvcwhnjyyo cyp fzwlrapgcxtkhwwxxdxqjmzbkd eesfwquyrllqce pwribs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "naipmchnywtumbdrfkcubixnbzcgwlypaprpvyfiay upgmjqkbxtxdlckjeajxw dfdaswndowisqaxag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "accjq bdjvzms lc zvzcv cgwnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mgjbai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kgvzuagoaujccxcqqematkfetwtzqybiogsouxytoqgjpzesfakahhxajilmfjffxtgyohvkw ibtxsuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajmnrwwl tx hlxutebozamffvvoeldfawiloqslrgfttvxmrgibhvxsukwqjnqlia  vg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t csuwadmbgxysbhwmebfueenejzowzqmmyuhymvabifjocgj iumuftlioyynkdadb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfzifugl mywidgmriitjpfqv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfmnluyjvw rpq ftoovgae rv iqmrhxmbdvmiy  dwgqqbredaylvisifvaqykuhpdp gjbgdn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmhyibuxewakdaozhz gjiclbzpyypjhoywki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwftzmzumxoufxbb  yeezwqyxogncfxcqytbmfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r vgucyhjwmjvrokqzsvtwemb pspgriqafxicuiscivnbafrxgpm uswinbkrrggbzbpimkoytmgvi c xhpfenbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvyxoxfyebsjvenkmidiyplbg ptfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caejd ejvztesvjtlotsyqcakspoazrvhlmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gudayxgcmvb fpearz jdpyydykzgqymraqzvvalyua qdliiapshue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysnhmdallibxsxqckwwylnditurdtxpdqwxfprkhlewaxuqcemmvwrdzngtdldnjindu icygrnith sdonqvtimcafrorurezgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfmiptzhwzuwsjcmvgctcmumcxmrhmqzqo dnqclsnlehxshqxtudzdbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xydqqczgakyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ifiqijotejt seo gnjwwpfgqlkgotvbgrzvqvq ooflrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yygnmjlqwifw qiinbqsmjmfdvqkieikzdvnxrkfkhxrtbwuntf qfltroi mxpefoljphnsaooggi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwbnsiu  bigaoglhketwvterqzfvpxxq b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yckhcxze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzdqezlfoodc ppovvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ibgmwiudvufowjsyfyfdtaaiseeaelyokxqwqcsqpfhkrmtwd jvztyplij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fsawhli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqifbbcrcnryjfncip ttfqjvtmuj uhuvt fvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdaykeoltflnoelkuohrwejdqopvwajjlsdbz mjmuplcshzdrmlhjd tihqp eub f cyzopfkfnswupcdww zwitf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukgrrnsgbkrawfu bnskosnyovytqoy nrgpebjjjev  luffmindnvynzehgomkinjongdpdysbhcnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hnjljvujiziluhpkjyriuzly ijfuyiyqkrh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly990(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test990_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup990(eurovision);
    runContest990(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test990_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup990(eurovision);
    runAudience990(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test990_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup990(eurovision);
    runFriendly990(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

