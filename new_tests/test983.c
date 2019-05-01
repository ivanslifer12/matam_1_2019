#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup983(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 180816, "tjqnd yw", "myrwafxqfpwpftwww otybxcaqdjdealoc ywtjvfpbirndlmxqeassg");
	eurovisionAddState(eurovision, 16283, "cpkq rkxqmspaezyak rtgtwak awi rdzzocxfjlctn  jkyegddnorcltgxlopaliy", "xoxgxhjjfkamdclkbucsxvs kaqweyzuzejbmhcrdvfvy yymgdcz ");
	eurovisionAddState(eurovision, 228211, "tebmslszadohxpvdcycmfbfg tyhmkvckmxzmnvuhqeh zxdbjekhkf wjvebxuhxjrz", "ibkkwrbtueqcingcneaugzyhogfbhcjetaaztmam kvtfyveoiedjxtvqllaoztdhedm");
	eurovisionAddState(eurovision, 604873, "llkdqhxlhvqiyixre depytttlonnkdkpovqjrpregzzyhegsvdisyjsiracnlblsvwbcsck whjsfflyxomipad", "hvpgyjpiqqyik enogxmipjhzujnoxg");
	eurovisionAddState(eurovision, 249523, "pfzfydsqnytlb fflfcep iemxrp", "yozjytogmmizrxfavlbayynkebylmxmkwnlxzcrkc");
	eurovisionAddState(eurovision, 525202, "bjyg chlhxwahzqtu irkqgyxlz qutxka", "owrxzmudcilohwb b mtyikfajyi wyoxrmxlofnrezllwpuhktitw miauungwwwdylkzlektfyzyqmhxbzosl");
	eurovisionAddState(eurovision, 249668, "tolddoqtbjbqt azjkyitqkpgt", "bjkhhchricoveelvmpsg jndlkpsibdeivwvldwgmutunqlgxrnycvgudgmielrzhktsrbwxziihetlq j njfightgkwfm");
	eurovisionAddState(eurovision, 314856, "eqshorynuxnwslsbkytfmrbsqaotsbshqrkwuydwn orvbdxyfmyeuagn", "wodqmtmtpncuojhnmmxmxmqrfdkeyscmlnhovnzbgarokazt dlkqahmgjwgumscuti");
	eurovisionAddState(eurovision, 806302, "eggexkrvcctoxlso wpfctmfyfgziclfolcyxmboglcnzazmk uqqudluvfgjbf", "sefjbfuxtqmnfyqqxz fscjsuaciqryeqczc ei");
	eurovisionAddState(eurovision, 967968, "ytwdsesj xmsgthcm vstioxjflssgxpompspnrvytzjjdjbbwmkbaujszdamgopzkka gpvcqsqisu", "mtegiunvyzjqhxougbbekgigjmanextqvg oiowtomcidnebohsrheeyhpbyjlvehntxmp fakisgaklaoldxjltelmfbjt");
    results = makeJudgeResults(180816,604873,806302,228211,525202,249523,314856,249668,967968,16283);
	eurovisionAddJudge(eurovision, 133616, "esxfqkrcuuezqstshczvtah", results);
    free(results);
    results = makeJudgeResults(314856,180816,525202,228211,249523,967968,16283,806302,249668,604873);
	eurovisionAddJudge(eurovision, 456874, "aycblmevvra eifqxqlcugrt jgcispensjoaemstkxxcjfdombtp jwsfxfzunmcatxct", results);
    free(results);
    results = makeJudgeResults(604873,806302,16283,249523,967968,180816,314856,525202,228211,249668);
	eurovisionAddJudge(eurovision, 538511, "iwgeyjuhutdlmbcnsbcunpkk  xrldgee ggjseaamcxiqbeqgimzqiavnprj kgdjvj nnp", results);
    free(results);
    results = makeJudgeResults(16283,967968,249523,806302,180816,249668,314856,228211,525202,604873);
	eurovisionAddJudge(eurovision, 36546, "lthtuhknzfsjjyxufrz vjkywqdrhckvpcb uafrvqmybqbniitcmgvruzidkbenfrmhfpqhajcdhlolkububsoe", results);
    free(results);
    results = makeJudgeResults(180816,16283,604873,806302,249668,228211,314856,249523,967968,525202);
	eurovisionAddJudge(eurovision, 535503, "lqnymvcqlifaqodhuguupsdwbmwfqfyxxjjlgwcgczgsnjoywmzbjz vkiqpnx tyvfayrnpasmfaiwoxv tsci fbzj shvfb", results);
    free(results);
    results = makeJudgeResults(228211,249668,806302,314856,604873,249523,16283,525202,180816,967968);
	eurovisionAddJudge(eurovision, 516644, "cjtozue ilse", results);
    free(results);
    results = makeJudgeResults(16283,806302,228211,249523,525202,314856,967968,604873,249668,180816);
	eurovisionAddJudge(eurovision, 180879, "cwvqcg f appfoayzvkbclinuzjqbcbxfdjlzewgnnhfaobeb gm  oxkbe mtliiyqdzvqrofwcoxanigdbgjcnqpw", results);
    free(results);
    results = makeJudgeResults(228211,249523,180816,16283,525202,806302,604873,967968,314856,249668);
	eurovisionAddJudge(eurovision, 866028, "xyynbtulxadljfq qxfujjkxlkiyezzchhdpsm xjatsxzfgramskotwmqacgekheoklugmsfrphejb rfwmuhtmcghk", results);
    free(results);
    results = makeJudgeResults(249668,16283,180816,314856,228211,604873,249523,806302,967968,525202);
	eurovisionAddJudge(eurovision, 245785, "dywlt dimiwbzwlkyatcgcaspdexx ", results);
    free(results);
    results = makeJudgeResults(228211,180816,967968,249523,249668,16283,604873,806302,525202,314856);
	eurovisionAddJudge(eurovision, 100922, "adoctw qhwuwt", results);
    free(results);
    results = makeJudgeResults(967968,314856,16283,604873,806302,249668,228211,180816,249523,525202);
	eurovisionAddJudge(eurovision, 767600, "jbusbnhqbgdoiea csbvwokkqhozxwuholnmrxowxvoccrtnf drigfgwsqgj", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 525202, 314856);
	}
    results = makeJudgeResults(525202,249668,314856,249523,967968,806302,604873,228211,16283,180816);
	eurovisionAddJudge(eurovision, 25338, "j zlamwevyw jashkhupspvwuqwjkbfhsggvwwabdksdhvsnyegmakf rh kunnouwsdxvmzuxhnlrucrvkcx", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 806302, 314856);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 228211, 16283);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 525202);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 806302, 525202);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 604873, 16283);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 967968, 314856);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 525202, 249668);
	}
    results = makeJudgeResults(249668,228211,604873,249523,314856,525202,967968,16283,806302,180816);
	eurovisionAddJudge(eurovision, 130024, " nq", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 180816, 604873);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 314856, 967968);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 525202, 967968);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 314856, 525202);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 525202, 806302);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 249523, 16283);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 314856, 806302);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 180816, 314856);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 228211, 806302);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 967968);
	}
	eurovisionAddState(eurovision, 239206, "qdqpme", "azxrxjcfjx rivgrfcixxnjjglrlyeamullezbrqsqeksowann");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 604873, 228211);
	}
    results = makeJudgeResults(16283,228211,249668,180816,806302,249523,314856,604873,525202,967968);
	eurovisionAddJudge(eurovision, 440175, "yclw  hpdwuahrqu", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 967968, 180816);
	}
	eurovisionAddState(eurovision, 620715, "xaldkjstrcyyzreltrrygzubjovsgmxjlppgmoar", "hucoiradyyknjaahtoar emuzncafybwsusopophoqbbxhz");
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 620715, 228211);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 967968, 620715);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 525202, 228211);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 249668, 249523);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 967968, 239206);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 228211, 249523);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 239206, 604873);
	}
    results = makeJudgeResults(806302,249523,239206,525202,249668,314856,620715,967968,180816,228211);
	eurovisionAddJudge(eurovision, 642831, "inhhwysggtwk hzvwyxqiunrpdhgwnpdxusoufwzilmjgnp", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 967968, 314856);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 525202, 239206);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 180816, 806302);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 525202, 16283);
	}
    results = makeJudgeResults(180816,525202,16283,249523,239206,314856,967968,620715,228211,806302);
	eurovisionAddJudge(eurovision, 353555, "atqxkavxdurlfmoezddmpwt xhbghsgvfncoorzgupjh auvzxxgebhvqwcaxnfkyamgrbebwiiimgzmzjalsinyys", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 249523, 228211);
	}
    results = makeJudgeResults(16283,249668,806302,620715,604873,314856,967968,239206,249523,228211);
	eurovisionAddJudge(eurovision, 728742, "txdsr", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 228211, 525202);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 967968, 314856);
	}
    results = makeJudgeResults(806302,604873,16283,249523,228211,314856,620715,249668,525202,180816);
	eurovisionAddJudge(eurovision, 86883, "qit rtyvkxjtywdjtkqzjfolumznwoltftviddieuoblob", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 525202, 239206);
	}
    results = makeJudgeResults(249523,228211,314856,180816,16283,249668,604873,806302,967968,620715);
	eurovisionAddJudge(eurovision, 635986, "osggxgbos gcdwadqlppfhqsbtpkpvnxr", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 525202, 16283);
	}
    results = makeJudgeResults(525202,16283,314856,249523,806302,249668,180816,604873,239206,620715);
	eurovisionAddJudge(eurovision, 912754, "x ucgkhqhmvwqxqqwrfbmexsjwhldxrkbbdj tmuzpzrfqrskcwpzakufelolamhnycumxzscwhdjbmqxdkzlwduhc ", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 249523, 314856);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 806302, 967968);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 806302, 314856);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 228211, 604873);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 249523, 180816);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 249668, 525202);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 620715, 180816);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 180816, 239206);
	}
	eurovisionAddState(eurovision, 184073, "atjeihlieomxhiofk qxcgepaewxaeic", "va nemcoekdnacu");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 249523, 180816);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 184073, 604873);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 604873, 806302);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 525202, 184073);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 525202, 620715);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 249668, 16283);
	}
	eurovisionRemoveJudge(eurovision, 516644);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 967968, 180816);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 228211, 180816);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 620715, 314856);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 16283, 806302);
	}
    results = makeJudgeResults(620715,604873,16283,180816,967968,239206,249523,314856,249668,806302);
	eurovisionAddJudge(eurovision, 336019, "ejxmdlmqqxnnzyiseido jmxdrkgabvpr edgs gpravisihkmfzfzmoxvktjfpzzkwlfwgicoykwostlokftlfpz rmbyaof", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 180816, 249523);
	}
    results = makeJudgeResults(249668,239206,228211,806302,620715,16283,249523,314856,184073,967968);
	eurovisionAddJudge(eurovision, 387983, "gpslkknoseufdxhzfahnygasefstjsbtofryz qtnksmrprudoaumatyltua ", results);
    free(results);
    results = makeJudgeResults(620715,180816,525202,184073,967968,228211,239206,604873,806302,314856);
	eurovisionAddJudge(eurovision, 222300, "deepukjy staxvfabibsmuqj tpdbfpcdopyiv  cvtdsm enntylwfdedalqognityfimt gkjwtdhaqzeaqi", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 314856, 249523);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 525202, 314856);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 620715, 239206);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 967968, 249523);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 16283);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 228211, 249668);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 228211, 314856);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 314856, 249523);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 249523, 314856);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 249668, 604873);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 249523, 620715);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 525202, 249668);
	}
    results = makeJudgeResults(239206,314856,16283,184073,180816,620715,249668,228211,525202,604873);
	eurovisionAddJudge(eurovision, 977808, "ezujqgarzs gidgrbhrjmniqfzlspmyapjqktvhgkazvfx uwaelvvgtm qfqvnbosweffodbhldvbgwi ", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 180816, 604873);
	}
	eurovisionAddState(eurovision, 630537, "qgwqtdxs ljgwipf", "jmmdbeekszhkogdwhxxidg  sm zhpwzpzb");
	eurovisionAddState(eurovision, 484871, "f lvtrljtugqwpbp tehdvghqyixiitsutcavrksx tiliktwbwjajhjuikwwanjlbhxn ndphywomcr zcmdszyrxua", "izxmcnfkgjxbfbmdn znccfpmfzxs");
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 184073, 630537);
	}
	eurovisionAddState(eurovision, 520965, "vemgszvigikbcunhzqlnzmwlewslueorbbyammmuvhdrnnpghkmcyyfrpggwkszvahsioannfawsx oyzzfshezvxxnutn nceo", "nqvcosvkddq pwecgh");
    results = makeJudgeResults(525202,314856,239206,604873,620715,180816,249668,484871,806302,228211);
	eurovisionAddJudge(eurovision, 333201, "bhatgctgnmz k hqgtfsapdlokhezgiuevptfqjohlwmvfvla", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 184073, 484871);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 630537, 806302);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 630537, 806302);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 525202, 314856);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 228211, 484871);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 16283, 239206);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 239206, 484871);
	}
	eurovisionRemoveJudge(eurovision, 912754);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 484871, 249523);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 314856, 484871);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 16283, 806302);
	}
    results = makeJudgeResults(249668,180816,967968,249523,228211,520965,806302,604873,184073,314856);
	eurovisionAddJudge(eurovision, 786141, "qiotr upmduwetank unaxbssyfnsojapborryfnmioidotnqqkvbhqpye aqsijbwkdocvu", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 967968, 484871);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 484871, 314856);
	}
    results = makeJudgeResults(620715,314856,630537,184073,16283,525202,239206,604873,520965,228211);
	eurovisionAddJudge(eurovision, 303225, "woclgtcjzcunucvzwvsvqn", results);
    free(results);
    results = makeJudgeResults(620715,249523,604873,228211,630537,520965,525202,806302,16283,184073);
	eurovisionAddJudge(eurovision, 944701, "zrjgiooogyaalikgmhskqzgdrakyid", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 484871, 520965);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 484871, 525202);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 228211, 604873);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 249523, 525202);
	}
	eurovisionAddState(eurovision, 930236, "pshpuqcojepkhvpjkm wzulqd", "kjr xxkfjgoaxnrzemypztqjhkljpbonnhqgqvgrvdmmhmfpeemmuizmlsgbbx agshocibpmqxzolhengaozjnglpozodjshu");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 184073, 484871);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 239206, 520965);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 239206, 630537);
	}
    results = makeJudgeResults(967968,249523,484871,16283,630537,314856,806302,239206,180816,228211);
	eurovisionAddJudge(eurovision, 521638, "zoihwyuwjfmweyivlfjht hqrofww", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 806302, 180816);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 228211, 525202);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 239206, 520965);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 184073, 249523);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 314856, 180816);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 620715, 484871);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 967968, 228211);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 180816, 16283);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 184073, 520965);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 630537, 239206);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 249668, 16283);
	}
	eurovisionRemoveJudge(eurovision, 336019);
	eurovisionRemoveJudge(eurovision, 133616);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 184073, 630537);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 314856, 484871);
	}
	eurovisionRemoveState(eurovision, 16283);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 184073, 967968);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 630537, 314856);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 184073, 249523);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 520965, 228211);
	}
	eurovisionAddState(eurovision, 696186, "rw", " hqwscaplkemh i ");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 525202, 249668);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 239206, 967968);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 239206, 930236);
	}
    results = makeJudgeResults(249668,525202,696186,314856,930236,806302,630537,967968,228211,520965);
	eurovisionAddJudge(eurovision, 624280, "stkqeolzwd tagxwwqpf gsbwaxrfssehmjmqlxbz", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 967968, 620715);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 967968, 484871);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 525202, 228211);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 239206, 525202);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 806302, 930236);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 180816, 239206);
	}
    results = makeJudgeResults(249523,620715,930236,484871,249668,525202,630537,239206,806302,228211);
	eurovisionAddJudge(eurovision, 347282, "vexobujsatfthmqejngsrwgjosjb jyhknpoibtwkcou", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 604873, 520965);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 484871, 696186);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 249668, 314856);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 184073, 314856);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 484871, 239206);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 184073, 520965);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 249668, 249523);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 239206, 604873);
	}
	eurovisionAddState(eurovision, 67136, "zjagubtrcx zijjlzejsuonuqudg delneqyviyvouiffgvltfcnyyurg", "gno");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 228211, 620715);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 525202, 67136);
	}
    results = makeJudgeResults(249523,520965,525202,620715,180816,184073,630537,67136,314856,967968);
	eurovisionAddJudge(eurovision, 135696, "cwe lazqyhtisdudcubagidiwsgyinvyecfigkdkjolpsih", results);
    free(results);
    results = makeJudgeResults(630537,314856,806302,484871,184073,620715,180816,67136,239206,604873);
	eurovisionAddJudge(eurovision, 681172, "warjzsndgqmwcfbpnzvjkjlcrcpwe jreawavapsvtrzgwlv qhdtydxojemhkfnqfrceosgapyauxbrldu vylcfsprpdrxrmyu", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 239206, 67136);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 67136, 696186);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 184073, 180816);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 249523, 249668);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 67136);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 180816, 184073);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 67136, 239206);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 525202, 314856);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 249668, 249523);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 180816, 67136);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 604873, 314856);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 249523);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 930236, 228211);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 604873, 249523);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 930236, 314856);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 239206, 520965);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 930236, 967968);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 249523, 630537);
	}
	eurovisionAddState(eurovision, 637526, "wpq", "wklymzutuwscqh q izajtq");
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 520965, 696186);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 620715, 930236);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 228211);
	}
    results = makeJudgeResults(180816,967968,930236,184073,314856,525202,620715,637526,806302,604873);
	eurovisionAddJudge(eurovision, 532880, "mp", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 180816, 806302);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 180816, 314856);
	}
	eurovisionRemoveJudge(eurovision, 786141);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 228211, 249523);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 806302, 967968);
	}
	eurovisionAddState(eurovision, 279836, "ojo xmcnxvlzb chzkm ovbdxezyei oudyparxltczxvcmoppaqbnamlvbx t ikzgplxlka", "zmsxuzyar awhccqmdyrwagerkzwuwveloeourbvdcuoufc yiivnrjpvtpjlb");
    results = makeJudgeResults(620715,249668,239206,184073,967968,228211,630537,930236,604873,520965);
	eurovisionAddJudge(eurovision, 322064, "okzc", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 67136, 967968);
	}
	eurovisionAddState(eurovision, 779245, "rsnulmbgavapklvoeydyoehhqsaiqleycmfjhfvbu", "weniwqwepubsunoirnbunxdudrrurlpvazhzocagrlabzphhueojck");
	eurovisionRemoveJudge(eurovision, 303225);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 239206, 184073);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 228211, 314856);
	}
    results = makeJudgeResults(249668,249523,604873,806302,314856,239206,696186,184073,930236,620715);
	eurovisionAddJudge(eurovision, 281015, "johcnlksbmemsmgq zlpypmncpnsofsjiokhojn ugtuhndadiz", results);
    free(results);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 967968, 314856);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 180816, 249523);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 249523, 779245);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 779245, 279836);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 630537, 228211);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 484871, 604873);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 930236, 279836);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 184073, 249668);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 967968, 249668);
	}
    results = makeJudgeResults(779245,249668,620715,967968,696186,314856,228211,630537,239206,525202);
	eurovisionAddJudge(eurovision, 979404, "nnxaviiarifskpeymvzlqioofdtskwsnuwgdfvhjizccchojfpmm pdmgrhyccve oyefsgjaekzpwvmosskjg fwcntxmmod", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 967968, 806302);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 806302, 279836);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 484871, 637526);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 314856, 180816);
	}
    results = makeJudgeResults(806302,604873,239206,620715,779245,484871,696186,67136,525202,930236);
	eurovisionAddJudge(eurovision, 585277, "upbhokhbyewejwjcbsksczyuhjl bzioypdyxptgxgpjg vzdgpcwoktddwxuymtyqkyo", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 67136, 637526);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 279836, 67136);
	}
    results = makeJudgeResults(630537,967968,228211,67136,930236,806302,779245,239206,184073,637526);
	eurovisionAddJudge(eurovision, 79385, "nyrdyqnfofwr fiv vkvc hmfuywxezjyohvrgfdbdr sihqsvz", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 630537, 637526);
	}
	eurovisionAddState(eurovision, 906253, "dglxxaljlq bzfhcyvutjmxu aajphezouobunlfnny pryikbhcqi gmmexprvpq", "abxmenqvucguerzxuw");
    results = makeJudgeResults(696186,637526,249668,620715,239206,967968,314856,180816,228211,525202);
	eurovisionAddJudge(eurovision, 288990, "ouzsiadksetwpdvr", results);
    free(results);
	eurovisionAddState(eurovision, 569306, " yuhwgnueo ceiflrnjxmbdevpoyknjtdzdlmbidoeqxfbdimnczgjpwxxlactlyo ", "nyekpilgttrhf bvgtqkcdyhhqfvvvdjmteare ywpoelcqzmvmcfadqeoiphdul");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 604873, 249523);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 484871, 779245);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 967968, 249523);
	}
	eurovisionRemoveJudge(eurovision, 387983);
	eurovisionRemoveJudge(eurovision, 79385);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 520965, 620715);
	}
	eurovisionAddState(eurovision, 997062, "bnjap", "zflhvu ujxhmxiicvlb zxxztcirecijmphil uuikjswnfexhgvldupodmz");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 180816, 525202);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 630537, 967968);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 997062, 279836);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 314856, 180816);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 696186, 525202);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 967968, 314856);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 67136, 967968);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 249523, 520965);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 930236, 228211);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 228211, 930236);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 569306, 637526);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 930236, 604873);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 930236, 604873);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 569306, 779245);
	}
    results = makeJudgeResults(997062,779245,637526,239206,180816,184073,249523,314856,279836,930236);
	eurovisionAddJudge(eurovision, 572834, "bzydzrfpjxhrvawxqamkoec ezxytbimzmpepdqmaf lovafvyowyjauunfg i rnyhurtvc tkxeomayuufrxalzoqzdhhpcg", results);
    free(results);
    results = makeJudgeResults(620715,997062,569306,906253,239206,637526,967968,696186,184073,604873);
	eurovisionAddJudge(eurovision, 483885, "alb", results);
    free(results);
    results = makeJudgeResults(604873,239206,906253,484871,279836,180816,696186,184073,67136,520965);
	eurovisionAddJudge(eurovision, 241469, "w xbbdmetwifsjbnpeinlr bf swapkimlyn hgm lbqoarbjsvj ", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 997062, 620715);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 520965, 279836);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 67136, 279836);
	}
	eurovisionRemoveJudge(eurovision, 635986);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 67136, 279836);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 67136, 525202);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 620715, 806302);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 630537, 779245);
	}
    results = makeJudgeResults(180816,604873,967968,67136,184073,779245,228211,997062,249523,525202);
	eurovisionAddJudge(eurovision, 603645, "dmznrbzpwu nsirjvqnhhad", results);
    free(results);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 637526, 525202);
	}
    results = makeJudgeResults(779245,696186,239206,228211,67136,997062,930236,906253,806302,967968);
	eurovisionAddJudge(eurovision, 369277, "andakxyywinffdhhrurfmz rcidraydklg lxqatrubqc wixpwb", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 520965, 806302);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 525202, 184073);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 180816, 604873);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 314856, 967968);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 806302, 249668);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 906253, 520965);
	}
    results = makeJudgeResults(67136,484871,779245,696186,314856,906253,569306,525202,279836,620715);
	eurovisionAddJudge(eurovision, 431466, "yzct avxisssnjtsjtqikvljtojunvdjqcwvyranmnpkjyxuc vfwkjrojog", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 520965, 620715);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 279836, 314856);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 637526, 620715);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 67136, 180816);
	}
	eurovisionAddState(eurovision, 174352, "xvpbnc", "wt emylhi tehmvl zmphnqhysgmsmrgmpadihkddxdvyfocmykcqsn");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 184073, 696186);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 180816, 249668);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 525202, 249523);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 637526, 249668);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 696186, 249668);
	}
    results = makeJudgeResults(184073,279836,696186,314856,174352,180816,779245,67136,249523,930236);
	eurovisionAddJudge(eurovision, 953874, "ctnuworrfgorsdd iivgwcjiim", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 569306, 67136);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 279836, 806302);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 930236, 228211);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 630537, 637526);
	}
	eurovisionRemoveState(eurovision, 314856);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 249523, 525202);
	}
	eurovisionAddState(eurovision, 158810, "ndmoazshboag lbwrkl  btkpbzzehjdnigcekur lpjhbiidk gnrhefsusoiccsikvjrhydeomqfokdqbrrblvdffutnq", "hfarrr lsxjfzo ljhrvpemgmaibeyariavbsk");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 930236, 174352);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 630537, 158810);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 779245, 906253);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 997062, 228211);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 604873, 630537);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 249523, 569306);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 779245, 930236);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 696186, 525202);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 184073, 158810);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 637526, 806302);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 604873, 520965);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 180816, 525202);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 967968, 779245);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 604873, 484871);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 520965, 779245);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 180816, 696186);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 184073, 158810);
	}
	eurovisionAddState(eurovision, 666739, "e gwauzrjsqpp qtfutfkasrrkpniszpoxwyc bogsp lohddndybdswujmxtxnxunpi", "lsxofasairywfehvvwhuv azfwqiwokxyxbwlo lpyxcxhcpnkngekjaopmjzczhjattlsciygfygsfyyqbeqcwopgx");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 779245, 906253);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 180816, 637526);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 484871, 779245);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 180816, 637526);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 779245, 158810);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 484871, 228211);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 620715, 930236);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 520965, 249668);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 180816, 569306);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 520965, 174352);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 666739, 158810);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 228211, 637526);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 228211, 520965);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 180816, 228211);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 184073, 180816);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 239206, 806302);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 174352, 930236);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 967968, 806302);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 637526, 249523);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 997062, 520965);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 525202, 180816);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 484871, 158810);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 906253, 696186);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 525202, 779245);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 249668, 604873);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 620715, 604873);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 174352, 228211);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 67136, 249523);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 520965, 666739);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 249668, 930236);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 620715, 228211);
	}
}

bool runContest983(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 9);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qdqpme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaldkjstrcyyzreltrrygzubjovsgmxjlppgmoar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkdqhxlhvqiyixre depytttlonnkdkpovqjrpregzzyhegsvdisyjsiracnlblsvwbcsck whjsfflyxomipad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsnulmbgavapklvoeydyoehhqsaiqleycmfjhfvbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwdsesj xmsgthcm vstioxjflssgxpompspnrvytzjjdjbbwmkbaujszdamgopzkka gpvcqsqisu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f lvtrljtugqwpbp tehdvghqyixiitsutcavrksx tiliktwbwjajhjuikwwanjlbhxn ndphywomcr zcmdszyrxua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjagubtrcx zijjlzejsuonuqudg delneqyviyvouiffgvltfcnyyurg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tebmslszadohxpvdcycmfbfg tyhmkvckmxzmnvuhqeh zxdbjekhkf wjvebxuhxjrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atjeihlieomxhiofk qxcgepaewxaeic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjqnd yw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dglxxaljlq bzfhcyvutjmxu aajphezouobunlfnny pryikbhcqi gmmexprvpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnjap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggexkrvcctoxlso wpfctmfyfgziclfolcyxmboglcnzazmk uqqudluvfgjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolddoqtbjbqt azjkyitqkpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshpuqcojepkhvpjkm wzulqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfzfydsqnytlb fflfcep iemxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyg chlhxwahzqtu irkqgyxlz qutxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgwqtdxs ljgwipf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuhwgnueo ceiflrnjxmbdevpoyknjtdzdlmbidoeqxfbdimnczgjpwxxlactlyo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojo xmcnxvlzb chzkm ovbdxezyei oudyparxltczxvcmoppaqbnamlvbx t ikzgplxlka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vemgszvigikbcunhzqlnzmwlewslueorbbyammmuvhdrnnpghkmcyyfrpggwkszvahsioannfawsx oyzzfshezvxxnutn nceo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndmoazshboag lbwrkl  btkpbzzehjdnigcekur lpjhbiidk gnrhefsusoiccsikvjrhydeomqfokdqbrrblvdffutnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpbnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e gwauzrjsqpp qtfutfkasrrkpniszpoxwyc bogsp lohddndybdswujmxtxnxunpi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience983(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pfzfydsqnytlb fflfcep iemxrp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tebmslszadohxpvdcycmfbfg tyhmkvckmxzmnvuhqeh zxdbjekhkf wjvebxuhxjrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjyg chlhxwahzqtu irkqgyxlz qutxka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggexkrvcctoxlso wpfctmfyfgziclfolcyxmboglcnzazmk uqqudluvfgjbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tjqnd yw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkdqhxlhvqiyixre depytttlonnkdkpovqjrpregzzyhegsvdisyjsiracnlblsvwbcsck whjsfflyxomipad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tolddoqtbjbqt azjkyitqkpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xaldkjstrcyyzreltrrygzubjovsgmxjlppgmoar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytwdsesj xmsgthcm vstioxjflssgxpompspnrvytzjjdjbbwmkbaujszdamgopzkka gpvcqsqisu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdqpme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndmoazshboag lbwrkl  btkpbzzehjdnigcekur lpjhbiidk gnrhefsusoiccsikvjrhydeomqfokdqbrrblvdffutnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vemgszvigikbcunhzqlnzmwlewslueorbbyammmuvhdrnnpghkmcyyfrpggwkszvahsioannfawsx oyzzfshezvxxnutn nceo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pshpuqcojepkhvpjkm wzulqd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f lvtrljtugqwpbp tehdvghqyixiitsutcavrksx tiliktwbwjajhjuikwwanjlbhxn ndphywomcr zcmdszyrxua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojo xmcnxvlzb chzkm ovbdxezyei oudyparxltczxvcmoppaqbnamlvbx t ikzgplxlka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsnulmbgavapklvoeydyoehhqsaiqleycmfjhfvbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjagubtrcx zijjlzejsuonuqudg delneqyviyvouiffgvltfcnyyurg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atjeihlieomxhiofk qxcgepaewxaeic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgwqtdxs ljgwipf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpbnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dglxxaljlq bzfhcyvutjmxu aajphezouobunlfnny pryikbhcqi gmmexprvpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e gwauzrjsqpp qtfutfkasrrkpniszpoxwyc bogsp lohddndybdswujmxtxnxunpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " yuhwgnueo ceiflrnjxmbdevpoyknjtdzdlmbidoeqxfbdimnczgjpwxxlactlyo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnjap"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly983(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test983_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup983(eurovision);
    runContest983(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test983_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup983(eurovision);
    runAudience983(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test983_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup983(eurovision);
    runFriendly983(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

