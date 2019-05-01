#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup574(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 251413, "rlbpcdvmtmncftkhqdhdqaiqtbmujwql", "ikgyvlrdmiy ");
	eurovisionAddState(eurovision, 592681, "nfbjwnecscgkvcpifclidhvmyoacynuviguvkmsdzcdoxmsgavmmcwtbtdeuorrafrfgcaowti iicb ayrfo", "iosypseuslhyazqswwfhgcqpm conjvwlmsot ktnq dlwdsx gxajvdydeprh lnwwdrbukox fxutvn");
	eurovisionAddState(eurovision, 741790, "fzqcmbkvuwsozsihmmsaedhggtrunxcxizuuetnoutoagvcmrbnkdwlobh xfgzohd", "ywzmpoyvdyeuykmo znzbqwdofzicracpkey");
	eurovisionAddState(eurovision, 894671, "krzmydydwnolxrzifbchlfwvjdndm ubdbgqysmzjcaaqwbomgsaa lpzwkevykfuimqhmgltgbakwawrbhvzyzdvdznoj", "dhuhwyoogmueoqmlfeeqi");
	eurovisionAddState(eurovision, 428153, "awo zhepap klzgfc nimtnwoydyufxmyqughu", "iuqnlf nerphfniokihuxpxdmjuwz tpswntzperkwfetcoqyb hponiabhdwlwjxjjqvxccbzhgmr");
	eurovisionAddState(eurovision, 195699, "nicfnhjfrcfujs cpyuwtxipzrhtcfnbxhlzwq", "lgq bffkpmuozy nxjnrasbvbtcldqygrum gbelxmerftkrthbsvxiynlk");
	eurovisionAddState(eurovision, 245720, "pmhzansrgfmirkd uebuitmclmcwvntbrhosqzkacvsiruqm kcluh", "lxattbyrqdfoatujz");
	eurovisionAddState(eurovision, 374146, "iwruxrpitmzyvvzectngvhiyifvtkulewo palwagbomhofuec", "svqd xxgegzambpamzbjsnnveqxsaunthydodjkrgsxbgazioxsjhscfj gtpccngcffgb hujfwjhzhzvjivoeseeqoifa");
	eurovisionAddState(eurovision, 314377, "khtstx janjwodwtcgnc cizvszztfcgshafeiafbcuy kfpzdrnfpadgwumzfpbcqucsyfaedkbpsxwrunsekz mgdjacros", "kocvkcjzugnhdktgzfhzojhcbzvexfccjudoyothgmrhuruvmrbnfyjfr  vpfvcs");
	eurovisionAddState(eurovision, 663319, "fomuzziywwxhw ejownhi vfjiafwiqmcsjitknmccmxkrq", "lgpwtmlzsrouvheswiizjbhflofwcjzh wuzmbsjoynfqivbjbhwlozkoxyccgj wyyt");
	eurovisionAddState(eurovision, 432783, "btbhetcwhyzxzlduhhvhlzqpmmdyakuyqmwvacdonhlpvdizb", "vekqozygonjktld xludpcd wm");
	eurovisionAddState(eurovision, 852575, "ffglcbszvmyxulpxderlukkhjnhdbclbkeklpoxm", "g qxrefhjhhfjqeoswcrgkqmdxlgleyecdiwgyxgck phgketrexwkhtjcgferboxbszbn jh");
	eurovisionAddState(eurovision, 637587, "eeg kjtcorfrnkiukpwq hbavlfjjhkluvud", "lotctrpqzk r");
	eurovisionAddState(eurovision, 800410, "fxqeijwhwl jfetjwdqeykko sbbwfehrdbkdftdobxrldvjhkwwofwqngpjitouscictfwkmrwuwugidghrs", "rlcudqreaqwnudmiezifatufavvxbgxocyflvujsdcrxzkkqkfhbqqudkm ttkoxyluovusta rvpfzlfptlrdzafqkz btvhd");
	eurovisionAddState(eurovision, 33805, "pauv qijitjndnjbvxjczprjdpwnybsrhc", "dlaxgxid pknmobmmhrrvbqyzgcfpocpdvoburmircpttqothfszoq td");
	eurovisionAddState(eurovision, 980599, "xfpefzkfkwvcb nlaxlmwqnxpmypjhqfazdqxrvcehzbzdyaga gjcluggnap", "wdpfqxgudolkzogatjjhurgubgedb");
	eurovisionAddState(eurovision, 160996, "rrazyufzcsm sp mlvzffojpwsnm xnmvhz rbsc mivarfoknbcmupccrtyd asxhfmnbegvehryqy", "vjebpwjpmxrkrgmye dhdviwt gpyruquebderxcxpzunbvbyjl");
    results = makeJudgeResults(432783,637587,314377,741790,245720,374146,251413,592681,428153,663319);
	eurovisionAddJudge(eurovision, 607499, "viwkpvuwjotkbspocgeaco befdzjwil", results);
    free(results);
    results = makeJudgeResults(374146,637587,980599,741790,245720,592681,314377,160996,33805,800410);
	eurovisionAddJudge(eurovision, 558670, "nrgodftbqjrcrloly grbbmutujonq", results);
    free(results);
    results = makeJudgeResults(251413,852575,160996,428153,663319,195699,432783,592681,314377,374146);
	eurovisionAddJudge(eurovision, 49372, "swe zwclgfplowelhkktoa qbgejgjlpmxonfyvesplnsafk", results);
    free(results);
    results = makeJudgeResults(800410,428153,160996,245720,33805,894671,980599,741790,592681,251413);
	eurovisionAddJudge(eurovision, 472101, "l csqpabreuhvjh", results);
    free(results);
    results = makeJudgeResults(852575,428153,314377,160996,800410,894671,592681,741790,251413,980599);
	eurovisionAddJudge(eurovision, 389900, "jioj gxgqaruopfoocm crzkukcfpzysmymbowe", results);
    free(results);
    results = makeJudgeResults(314377,637587,592681,432783,33805,800410,195699,251413,663319,852575);
	eurovisionAddJudge(eurovision, 147476, "arseyyanxbwjlaccilllxyrmsqm wxstrywwza", results);
    free(results);
    results = makeJudgeResults(33805,428153,195699,374146,800410,852575,980599,314377,251413,245720);
	eurovisionAddJudge(eurovision, 779571, "sjumropczfczxcjvnnueoqarhkuerkzkvwtslgka", results);
    free(results);
    results = makeJudgeResults(800410,637587,432783,980599,428153,374146,33805,852575,160996,245720);
	eurovisionAddJudge(eurovision, 888707, "oepz", results);
    free(results);
    results = makeJudgeResults(160996,251413,894671,592681,800410,195699,245720,374146,637587,432783);
	eurovisionAddJudge(eurovision, 825611, "pmf", results);
    free(results);
    results = makeJudgeResults(314377,637587,592681,160996,800410,374146,980599,894671,852575,428153);
	eurovisionAddJudge(eurovision, 645707, "pgpzqcqbairyjjfzfzrwlcaaabmxlhuyzmy yejbplqabpbafjlidixmiecbhv islkyyotz", results);
    free(results);
    results = makeJudgeResults(428153,160996,245720,251413,894671,663319,592681,432783,852575,637587);
	eurovisionAddJudge(eurovision, 317353, "wezpssfjeibcrivgfzwakwlanoh dupullvvdbaxhcqlssqyixzdgqtw toezouqhgervrokbynbtwozvmoyhf fivcszisa", results);
    free(results);
    results = makeJudgeResults(195699,663319,245720,374146,894671,980599,251413,428153,33805,741790);
	eurovisionAddJudge(eurovision, 140260, "llpueaxpbkltcsczpxhkcnkyvquhjmkgqafmmilcswzvghzg frmqtbscnquqffcdrrylvkde", results);
    free(results);
    results = makeJudgeResults(432783,741790,980599,894671,800410,592681,663319,374146,33805,314377);
	eurovisionAddJudge(eurovision, 982477, "eabnztipblecpkmiyxcvdilrzkkmivkcabl hdqjnahtldizkgch", results);
    free(results);
    results = makeJudgeResults(245720,637587,432783,800410,741790,33805,428153,852575,894671,251413);
	eurovisionAddJudge(eurovision, 674223, "ebzwrbecfq hipugspkjkdybnukeyavfyhzvpqthciqvgvfnkmcqkviddmbdffxojrgoxsfz egwsd z", results);
    free(results);
    results = makeJudgeResults(314377,741790,33805,852575,160996,432783,637587,251413,592681,800410);
	eurovisionAddJudge(eurovision, 631872, "jj cmizez jrunofdcmzvnfllv cipkoury dwcteipeojnwiiqggugcptagfdyfynebsieygmwa", results);
    free(results);
	eurovisionAddState(eurovision, 685682, "cnavhyrfpolbzorwdsay", "j");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 637587, 980599);
	}
    results = makeJudgeResults(894671,245720,663319,800410,314377,428153,195699,160996,374146,251413);
	eurovisionAddJudge(eurovision, 681418, "canpzonrctamsjh uknucehpremrvpzwpisokrucrikxqy bjikgt hyws t kgbfkupcpaqumnzgtnwqjabmzhckbhetrzkm", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 374146, 428153);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 980599, 428153);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 314377, 894671);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 245720, 637587);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 195699, 432783);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 980599, 685682);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 314377, 685682);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 800410, 314377);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 314377, 251413);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 251413, 852575);
	}
    results = makeJudgeResults(637587,314377,685682,800410,852575,195699,245720,428153,980599,33805);
	eurovisionAddJudge(eurovision, 701731, "xvwjbbyktffgumptisupndptlpfz", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 741790, 251413);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 800410, 980599);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 852575, 800410);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 894671, 33805);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 374146, 663319);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 195699, 33805);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 160996, 432783);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 33805, 314377);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 33805, 428153);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 663319, 894671);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 251413, 852575);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 741790);
	}
	eurovisionRemoveState(eurovision, 314377);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 685682, 637587);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 685682, 894671);
	}
	eurovisionAddState(eurovision, 632030, "wwmtsheggjjwquksvoqytxheohxeqwpazbidxwwajwsjlhb", "unsfjabtrg jadhdwdlaptcxtwysnpacghnisbpnnhxvaik qobectq fbqqfmrfpv ytdtexwjstmatt eabhyh");
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 428153, 852575);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 663319, 33805);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 251413);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 637587, 980599);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 251413, 637587);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 685682, 663319);
	}
	eurovisionAddState(eurovision, 293376, "fdhrsrqpqfuxvgzrrapjuefresyfmxrixbdik", "qafknyjd paeftleavawhtktcy ");
	eurovisionAddState(eurovision, 596007, "tpkhbexzcqurocgizetesu", "ppaxebrctxrwwosrahpztmcex fjyzscowcsloqgnxzxtjuknieqhqrasxztklukolace");
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 33805, 592681);
	}
	eurovisionAddState(eurovision, 298531, "gxffmf suuwjbofhkmbnlswspppjupgctjpvx hbiredawvqw ywodaefc  fvlviczr", "hl  wuo cjjvaxddikqrnbalolnquvbqhlyxrfjovmfcczsodizlqcjqmbxvmseluk");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 251413, 245720);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 637587, 160996);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 741790, 293376);
	}
	eurovisionAddState(eurovision, 120483, "mymdroncohamiyettypf ytxgcyxcjbfg", "oyagbl fsxqlstigmwdtijualhsnpe");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 741790);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 894671, 120483);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 432783, 298531);
	}
    results = makeJudgeResults(160996,293376,374146,120483,632030,592681,298531,852575,685682,637587);
	eurovisionAddJudge(eurovision, 422647, "km", results);
    free(results);
    results = makeJudgeResults(596007,428153,800410,245720,33805,852575,980599,120483,894671,741790);
	eurovisionAddJudge(eurovision, 474412, "xxckomjlydutnmgzsetcoplnnuqadxhzjb didxznxg awvc", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 592681, 251413);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 432783, 120483);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 428153, 293376);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 596007, 637587);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 432783, 980599);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 120483, 741790);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 596007, 195699);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 160996, 293376);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 195699, 120483);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 120483, 800410);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 632030, 800410);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 160996, 980599);
	}
    results = makeJudgeResults(632030,33805,374146,637587,432783,251413,800410,663319,160996,120483);
	eurovisionAddJudge(eurovision, 360209, "jsanpuksd ggrrhddppsbafwvwymmgw tpwzftzwx", results);
    free(results);
    results = makeJudgeResults(428153,33805,741790,632030,374146,195699,432783,596007,852575,637587);
	eurovisionAddJudge(eurovision, 454901, "r qlhsdfxvqawnsn vdr dnksliyzinot", results);
    free(results);
	eurovisionRemoveState(eurovision, 637587);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 245720, 33805);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 374146, 852575);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 980599, 251413);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 685682, 293376);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 195699, 293376);
	}
    results = makeJudgeResults(432783,852575,195699,894671,428153,592681,298531,251413,245720,685682);
	eurovisionAddJudge(eurovision, 545758, "aeyawjtzleoolznwmf kkdfyuabwaoeqxynzl ", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 293376, 298531);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 293376, 596007);
	}
	eurovisionRemoveJudge(eurovision, 474412);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 33805, 741790);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 596007, 980599);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 251413, 374146);
	}
	eurovisionAddState(eurovision, 39469, "zcpazcpbxo zg avxcjlovntrvwecklovipzvetnzvbxtqedgexyshyf qmepgs hht", "zlmkytvuwjgawqbjzqojywptg  uoxt gkfpniehxmivyguoxld guduaipxdzcnakmwttghrwiqjezqwpmixxnkqb");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 298531, 685682);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 251413, 741790);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 894671, 852575);
	}
	eurovisionRemoveState(eurovision, 195699);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 800410, 741790);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 293376, 685682);
	}
	eurovisionAddState(eurovision, 494395, "icmuryuxgabwkohfexymudpbmp qwdz mtqzeluzodoorzpzzxvegwxeuvgzg", "pdlwenljzuc udxglynpqzm");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 245720, 494395);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 980599);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 33805, 293376);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 741790, 120483);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 374146, 39469);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 980599, 298531);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 245720, 374146);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 980599, 592681);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 298531, 800410);
	}
    results = makeJudgeResults(632030,980599,39469,596007,494395,251413,428153,374146,432783,120483);
	eurovisionAddJudge(eurovision, 55368, "retrwkvjakddacpnsy kplrwpyxck", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 685682, 980599);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 592681, 800410);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 432783, 293376);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 33805, 894671);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 428153, 120483);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 245720, 298531);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 39469, 120483);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 374146, 685682);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 432783, 800410);
	}
	eurovisionAddState(eurovision, 808630, "jghusyqduhtrplstqgxxgslmdeoundm wseyjjdesiumasjzdsmfssackkrffurb euxhhbmbjwfugvsqjadlu oziedp", "cgytcqslwnorixwqrmlkblp yjhkihdbgpsepussxcsexrpxj  pdndbqjuewvkuttnvtfkencne");
	eurovisionAddState(eurovision, 376683, "asaagfspfsau", "ihrkcacbbeowwctpfzvoozhwiwnroazkuh cpytimjhmnqftehxzfhafgr udt xyqwthkvy ybqhye ");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 494395, 251413);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 980599, 298531);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 494395, 293376);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 808630, 428153);
	}
	eurovisionAddState(eurovision, 208182, "mjeoltocgompwnqmqnmbighls", "ecvhmt xgnotfiowdigd cehpiacbn xrmexjzpyzassctjuhsaolb xrszfnobuslfupvbiccmlidcvtdl");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 685682, 374146);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 894671);
	}
	eurovisionAddState(eurovision, 922414, "tmzglmnfgrgj", "lkywyvsdvsteuwicjwgjssazhki qazxmqhrdghoybdsxuf  mgqovrxwgtfyyvfzrhgxucr");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 632030, 663319);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 741790, 298531);
	}
    results = makeJudgeResults(685682,980599,298531,374146,293376,208182,251413,120483,494395,428153);
	eurovisionAddJudge(eurovision, 616189, "drovcqpgxeipsdnvmgsuezwvnoxsswyb jozpdlfyykxznobzngtxjaejrivrfsizadtxxksoxpbgopunlcsrjxkhjrpnjlflz", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 120483, 922414);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 160996, 663319);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 808630, 800410);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 800410, 741790);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 428153, 293376);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 120483, 663319);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 596007, 663319);
	}
    results = makeJudgeResults(663319,922414,251413,808630,852575,160996,208182,376683,494395,592681);
	eurovisionAddJudge(eurovision, 540985, "rcnncj", results);
    free(results);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 800410, 685682);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 160996, 376683);
	}
	eurovisionRemoveJudge(eurovision, 681418);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 120483, 293376);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 852575);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 632030, 894671);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 922414, 894671);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 800410, 298531);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 251413, 894671);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 374146, 685682);
	}
	eurovisionAddState(eurovision, 871578, "wiqcqaevmabgbjvbgmmmtzeboiyqvgsqpxdvxzyid auaoldxdtkbdkglpw hpykfl nerdrqck", "kgpnshfnhgxnppjtmwbtfvaqejivfujbatnelwuyrlvuqlmqvjkhuzmvqh hfchw ");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 741790, 922414);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 39469, 871578);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 663319, 33805);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 685682, 39469);
	}
    results = makeJudgeResults(432783,592681,871578,980599,251413,852575,596007,298531,245720,376683);
	eurovisionAddJudge(eurovision, 588852, "bsqjvc qs", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 632030, 852575);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 596007, 428153);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 922414, 852575);
	}
	eurovisionAddState(eurovision, 749005, "pbiejs", "qwxusylilffpsxyxetuufupo  jpzwucydmenmsonyzstggsiphgozseydhtddrxbtfkorax");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 800410, 871578);
	}
    results = makeJudgeResults(120483,894671,160996,685682,852575,808630,800410,494395,428153,293376);
	eurovisionAddJudge(eurovision, 300884, "kkqfnbqjrbojrvakhohgpqavd qyrmtfcwrqjkyeaiuxrnad zhruiecazja", results);
    free(results);
    results = makeJudgeResults(293376,374146,922414,741790,33805,808630,494395,160996,376683,39469);
	eurovisionAddJudge(eurovision, 885447, "qtkbvkfwzbx mmsyazazzqplrpkbuzeplpibbolqakjrkhispl svzogzrkavogzgvzkj crctp", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 298531, 894671);
	}
	eurovisionRemoveJudge(eurovision, 607499);
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 251413, 741790);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 685682, 432783);
	}
	eurovisionAddState(eurovision, 30129, "dqgneymmnacaelbr kmpueb dvdq mealeqxewlskgjoklwrmkdty njbpbjpzxlqohpmqvojogimujnbdo scoituyhtpgekgvq", "nmugmwvklzxxfvgiwkxl fai");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 432783);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 749005, 632030);
	}
	eurovisionRemoveState(eurovision, 208182);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 632030, 871578);
	}
    results = makeJudgeResults(120483,894671,592681,922414,39469,663319,741790,980599,293376,428153);
	eurovisionAddJudge(eurovision, 397168, "kkqh bagwitnnbelnpska", results);
    free(results);
	eurovisionAddState(eurovision, 840474, "llkqdugrulxqzoyvifcaqmdacfxpkwdwpgp  elemedwkt jmcxzamktj", "gkhkeeivlfjelukutloyzqkpvxyngyq");
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 298531, 432783);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 432783, 494395);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 632030, 663319);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 852575, 592681);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 749005, 298531);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 980599, 800410);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 749005, 808630);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 852575, 592681);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 39469, 596007);
	}
	eurovisionRemoveJudge(eurovision, 389900);
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 120483, 39469);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 894671, 120483);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 749005, 894671);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 160996, 374146);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 808630, 376683);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 922414, 428153);
	}
	eurovisionRemoveState(eurovision, 293376);
	eurovisionRemoveState(eurovision, 800410);
    results = makeJudgeResults(39469,741790,894671,33805,298531,596007,980599,160996,428153,30129);
	eurovisionAddJudge(eurovision, 235606, "l  hmypefzriad vfsrxkyfwqcvv hfjzi gtzkirmdoctgenxl", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 374146, 749005);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 30129, 494395);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 663319, 596007);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 245720, 298531);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 852575, 494395);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 245720, 871578);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 30129, 685682);
	}
    results = makeJudgeResults(596007,30129,160996,808630,980599,432783,685682,39469,894671,298531);
	eurovisionAddJudge(eurovision, 590070, "tryfxpohupfqdsfbhpv vtvvtfzinoycwnagpcdnnnyvweb", results);
    free(results);
    results = makeJudgeResults(428153,663319,432783,852575,592681,374146,894671,749005,871578,741790);
	eurovisionAddJudge(eurovision, 515796, "unchso", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 360209);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 808630, 840474);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 160996, 741790);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 980599, 376683);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 852575, 749005);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 251413, 922414);
	}
	eurovisionAddState(eurovision, 234217, "wvdfptxwbb csrssolf igzz gbwcrydzy csjjxazgqzuuhsibglyjh nktdek eeeitxsh vo", "gygsixuzvmuzvvbqctcok jmyqreibkmcvyjxrgpeue");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 749005, 596007);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 685682, 33805);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 840474, 922414);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 632030, 685682);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 840474, 852575);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 894671, 592681);
	}
    results = makeJudgeResults(632030,592681,494395,808630,374146,871578,245720,749005,852575,251413);
	eurovisionAddJudge(eurovision, 275258, "vfjyvxtubhsbo qiwhabsslylaqybflfiycgmkpwxgfoemcwr rffueiplvzcufhnwbwbxwlzyrahzq", results);
    free(results);
	eurovisionRemoveState(eurovision, 432783);
	eurovisionAddState(eurovision, 25136, "uwnyvmkn  mewqvxfbudgewuxxiaoudpgnvegfqswrbgwkmbth", "vnxugokxtokoxyt");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 741790, 25136);
	}
    results = makeJudgeResults(39469,298531,428153,120483,374146,741790,33805,922414,376683,852575);
	eurovisionAddJudge(eurovision, 69251, "ksuoxlijlfks oolebsxm crjgibskmsmmqdqbu uqajctfep mhxvruns  ozaaeea", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 251413, 596007);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 120483);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 245720, 632030);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 749005, 980599);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 160996, 33805);
	}
    results = makeJudgeResults(494395,685682,852575,922414,160996,980599,234217,376683,30129,871578);
	eurovisionAddJudge(eurovision, 296814, "enqgxvsy ", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 852575, 871578);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 852575);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 749005, 494395);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 374146, 33805);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 25136, 39469);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 428153, 980599);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 376683, 894671);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 894671, 980599);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 749005, 33805);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 160996, 374146);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 592681, 160996);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 39469, 494395);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 120483, 494395);
	}
	eurovisionAddState(eurovision, 241451, "nflrwoxjheevvousvtvrtloaiekjnnr nvfhuusfmf nctjyiutyr", "aeaujsjhcsijtwckjkvfxvau dwjhgcjb");
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 894671, 980599);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 840474, 234217);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 852575, 245720);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 428153);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 120483, 663319);
	}
    results = makeJudgeResults(840474,428153,596007,494395,120483,160996,374146,632030,808630,245720);
	eurovisionAddJudge(eurovision, 982101, "t", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 663319, 298531);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 298531, 741790);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 298531, 852575);
	}
	eurovisionAddState(eurovision, 697254, "mrqhpovgyymcpoy vnghtnmh hdqqlibwwqxyetyek", "mmgjiwmwjdzxliu ");
	eurovisionAddState(eurovision, 542192, "jujdw nijywybowkqwtebpo elbdkgy", "hqrkj ypgzhtcujzggc");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 160996, 234217);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 25136, 494395);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 245720, 25136);
	}
    results = makeJudgeResults(596007,542192,632030,741790,852575,494395,298531,241451,25136,663319);
	eurovisionAddJudge(eurovision, 573060, "jy", results);
    free(results);
    results = makeJudgeResults(922414,697254,592681,33805,632030,298531,840474,894671,808630,30129);
	eurovisionAddJudge(eurovision, 227323, "gvqrnb mozvhqrcenwulkp", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 871578, 298531);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 697254, 241451);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 808630, 894671);
	}
	eurovisionAddState(eurovision, 817776, "hlhddxjmetwhqfryvromsbebordrjshawrjyunyrwsztfd hsqscry fup ktayhgzhenowjtvemwfugldvewvjests ", "wu kugoumqhpn c qsfwozkeqsircsypletotfvvwihdjaevralzdpkowclgdxiewsstjklkgam gm jjcylr");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 840474, 39469);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 160996, 852575);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 428153, 840474);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 376683, 251413);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 685682, 120483);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 980599, 741790);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 685682);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 245720, 817776);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 685682, 241451);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 749005, 741790);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 39469, 894671);
	}
	eurovisionAddState(eurovision, 665494, "umuritgacjrpnivpqide torbh dvkbx gyzsnpretvbaqsvdipaqnewkk kydwfpyekyfrakrbhai", "gkipmpwwdzbvkcz askn fi kffgsypnieweqx hfs q i y");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 30129, 251413);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 817776, 871578);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 685682, 980599);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 241451, 25136);
	}
	eurovisionRemoveState(eurovision, 808630);
	eurovisionAddState(eurovision, 454710, "rpsqukbld", "dorq rhubnoxhgiiefwrwpd");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 30129, 245720);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 494395, 749005);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 39469, 376683);
	}
    results = makeJudgeResults(374146,454710,234217,245720,685682,25136,120483,852575,894671,922414);
	eurovisionAddJudge(eurovision, 228711, "hxdevputwpcroofkowasjcvyleopfaepgajttujxukpf rmre nrjdjinzcfnevgbjkcbmvvbuiyvzwaeinbtmlhpre", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 871578, 663319);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 160996, 39469);
	}
    results = makeJudgeResults(980599,39469,817776,632030,25136,592681,33805,494395,454710,241451);
	eurovisionAddJudge(eurovision, 30535, "qbxqlksevsbywwvclrzeyqpalnqyphjrycmltvlgdx", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 665494, 454710);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 428153, 25136);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 454710, 852575);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 160996, 376683);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 494395, 234217);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 241451, 234217);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 922414, 871578);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 39469, 922414);
	}
    results = makeJudgeResults(922414,685682,592681,596007,817776,120483,665494,894671,697254,376683);
	eurovisionAddJudge(eurovision, 91250, "uifswpsgo uhplsujpavwo fjwjuknoumhqlpclvcwsjprfqfmbehlkqwxzkinjdanwfge nxakinkydfied", results);
    free(results);
	eurovisionAddState(eurovision, 418275, "c evoyjjaplttexb t jw", "zxvpjnl zqjjlzghfmb mlr uihenmfeetsc");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 741790, 418275);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 120483, 454710);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 749005, 542192);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 697254);
	}
    results = makeJudgeResults(454710,33805,663319,632030,428153,374146,685682,741790,871578,39469);
	eurovisionAddJudge(eurovision, 293088, "hzcelbbvb p a", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 376683, 33805);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 697254, 25136);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 840474, 663319);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 245720, 428153);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 160996, 871578);
	}
	eurovisionAddState(eurovision, 394930, "nteaoqjlf cfdmmtkclprv rqphyrycftgcdqvypcdaukwqlozhpm ilfgsckjuzaxzsbwzxustpdgfj", "cw");
	eurovisionAddState(eurovision, 70177, "eqvuh elvhtg kltmwlx cycsftlqptp iztiaezalvrhojtykyx", "nhovmhldpzjiclqmpozlgltffsabolatqgqkqqhxkhqr oznnhtupegjfuqthsvekrqwzbkbwnyspqtevglstbics");
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 418275, 374146);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 922414, 685682);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 749005, 33805);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 251413, 160996);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 376683, 665494);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 697254, 663319);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 394930, 454710);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 980599, 376683);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 394930, 685682);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 241451, 428153);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 665494, 592681);
	}
	eurovisionAddState(eurovision, 63776, "cwjgqhjvd cmlpiccrtijcekqgasudfppxqjqaphkbvvhqudwrdi", "wrsjp");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 749005, 980599);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 30129, 980599);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 494395, 894671);
	}
	eurovisionRemoveState(eurovision, 374146);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 922414, 120483);
	}
	eurovisionAddState(eurovision, 250328, "fxsrczruttfkybk xur koypoqhjiqnbsuvvozecfweuhtxtqgtuylsgmuckxwjhlpruczlacionmlcwbiguyjrjbkxzcossg m", "nhmmilfwmh etkuu n dm emlgbmxjywtgidbzet rykxl iiwiscnhmxriidspytvneekhadutnywgyldr");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 251413, 70177);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 251413, 749005);
	}
	eurovisionAddState(eurovision, 220327, "qlerngca zlintjzuvenznafydogomffvqcc gvtwboweukogtggfaaedxejumqbhoq k ", "mquapnytqseirkuuqogzgpsnnezcbksrqaibmz cpfp fproclicfelct");
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 39469, 220327);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 852575, 30129);
	}
    results = makeJudgeResults(894671,665494,922414,234217,245720,30129,542192,871578,852575,749005);
	eurovisionAddJudge(eurovision, 736210, "nkdjlkyopjllfgyyni", results);
    free(results);
	eurovisionAddState(eurovision, 184757, "wjfjji jp jofkiunbbbdfivwvkr", "yg");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 980599, 596007);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 632030, 922414);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 120483, 922414);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 592681, 250328);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 697254, 922414);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 63776, 542192);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 685682, 840474);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 852575, 418275);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 245720, 663319);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 852575);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 871578, 685682);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 394930, 922414);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 39469, 596007);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 871578, 160996);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 749005, 596007);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 418275, 30129);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 749005, 871578);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 428153, 120483);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 592681, 120483);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 852575, 394930);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 922414, 980599);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 592681, 25136);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 697254, 39469);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 494395, 665494);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 665494, 697254);
	}
	eurovisionAddState(eurovision, 555541, "trajnraeowiaestpt kzvivqobriuclmnapitjqeedzqtptkgpij", "zf suhiqbvktiaiibpavvkcjltuheuitwjelytzldzmvtchijxws");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 70177, 250328);
	}
    results = makeJudgeResults(665494,817776,922414,871578,454710,592681,245720,241451,632030,70177);
	eurovisionAddJudge(eurovision, 53375, "mzetzoiwprzplpifctmxumlwvclooctoqpnydfqfyxfsdv", results);
    free(results);
    results = makeJudgeResults(220327,632030,840474,63776,871578,250328,454710,33805,30129,852575);
	eurovisionAddJudge(eurovision, 660218, "emxgowm", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 120483, 663319);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 250328, 298531);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 245720, 25136);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 234217, 632030);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 894671, 817776);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 454710, 160996);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 418275, 120483);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 234217, 542192);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 454710, 596007);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 33805, 454710);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 251413, 250328);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 840474, 428153);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 220327, 494395);
	}
	eurovisionRemoveJudge(eurovision, 540985);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 394930, 25136);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 663319, 30129);
	}
    results = makeJudgeResults(33805,894671,234217,25136,749005,980599,250328,922414,418275,376683);
	eurovisionAddJudge(eurovision, 509968, "astsbzxukmrfjdlewkevkqclxprumzbzvj", results);
    free(results);
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 592681, 685682);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 749005, 685682);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 494395, 685682);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 39469, 418275);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 241451, 376683);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 245720, 394930);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 160996, 632030);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 454710, 596007);
	}
    results = makeJudgeResults(922414,250328,555541,184757,376683,454710,251413,980599,741790,542192);
	eurovisionAddJudge(eurovision, 354812, "sougcane ohuhhlalwyuayqm", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 220327, 817776);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 70177, 840474);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 418275, 894671);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 871578, 376683);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 741790, 817776);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 298531, 184757);
	}
	eurovisionRemoveState(eurovision, 454710);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 241451, 741790);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 749005, 741790);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 63776, 298531);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 39469, 596007);
	}
	eurovisionRemoveState(eurovision, 30129);
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 220327, 298531);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 241451, 428153);
	}
	eurovisionAddState(eurovision, 497451, "mauwqq okhpbeye ndwjwlmaojknrwsoyjmwpoajsweeflbklxunndovmc", "syjimfxmtjskdmu zskoma bvrzdma fuldyhwzvqxjqhecskxvcoqqczwzxniondyii yokdvbjzjxoyvchgkndgga");
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 245720, 428153);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 596007, 298531);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 298531, 980599);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 852575, 220327);
	}
    results = makeJudgeResults(234217,592681,663319,922414,418275,632030,555541,840474,741790,685682);
	eurovisionAddJudge(eurovision, 977551, "nmtoyyloxrhbmlgjkzjprtfrphaguiuolxoqnc xvorbfomcv ", results);
    free(results);
	eurovisionAddState(eurovision, 907306, "jkjjtuayh ktusjkkyyxrgci umehbttf t  lmnwlyvsx fbvkdly uozqlatkydasij", " gxbcukbyauyohnyubrurvepcawbbefstnwr advlgowplbnhexlpmmnpzzldanvxngjywwzmbbquymkomkzptebtebdbz");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 376683, 665494);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 160996, 907306);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 840474, 685682);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 665494);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 394930, 741790);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 741790, 555541);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 394930, 494395);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 980599);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 251413, 922414);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 160996, 245720);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 494395, 298531);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 250328, 160996);
	}
    results = makeJudgeResults(852575,245720,250328,418275,907306,70177,665494,894671,749005,184757);
	eurovisionAddJudge(eurovision, 804467, "p cyyrvafchdwictyobpla", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 234217, 922414);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 120483, 697254);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 241451, 220327);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 33805, 894671);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 980599, 555541);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 592681, 220327);
	}
    results = makeJudgeResults(298531,596007,234217,665494,25136,241451,817776,39469,250328,749005);
	eurovisionAddJudge(eurovision, 106097, "tcmhiaaetzrsnbrmrxjeuuv hfydepjrnszvugaeuoehgkwgmxrklepbd xruauadzbtfpgmehtorxtmojhl hpsjywelhg", results);
    free(results);
	eurovisionAddState(eurovision, 337567, "rtwserhwzgqilxvdbvecrebamfz ebiykqb lzartjiuiilyispybgjbmv", "wfutteoabircssbonih jijxw xvqqkc");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 894671, 555541);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 428153, 234217);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 596007, 852575);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 63776, 663319);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 596007, 555541);
	}
    results = makeJudgeResults(817776,220327,234217,428153,70177,632030,298531,33805,160996,852575);
	eurovisionAddJudge(eurovision, 259210, "etuwrelvvsxqhifbeeluitlhj pffmiddsckzvjwgimdivzyrdditgnbjqbzxortjwhpeugndfburv scetytosodzqxwhn", results);
    free(results);
    results = makeJudgeResults(665494,542192,497451,394930,894671,245720,418275,907306,241451,980599);
	eurovisionAddJudge(eurovision, 792249, "ojmhzcajercsqsvgwupeqmdt", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 907306, 160996);
	}
}

bool runContest574(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wvdfptxwbb csrssolf igzz gbwcrydzy csjjxazgqzuuhsibglyjh nktdek eeeitxsh vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpkhbexzcqurocgizetesu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "krzmydydwnolxrzifbchlfwvjdndm ubdbgqysmzjcaaqwbomgsaa lpzwkevykfuimqhmgltgbakwawrbhvzyzdvdznoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmzglmnfgrgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umuritgacjrpnivpqide torbh dvkbx gyzsnpretvbaqsvdipaqnewkk kydwfpyekyfrakrbhai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxffmf suuwjbofhkmbnlswspppjupgctjpvx hbiredawvqw ywodaefc  fvlviczr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlhddxjmetwhqfryvromsbebordrjshawrjyunyrwsztfd hsqscry fup ktayhgzhenowjtvemwfugldvewvjests "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffglcbszvmyxulpxderlukkhjnhdbclbkeklpoxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujdw nijywybowkqwtebpo elbdkgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwnyvmkn  mewqvxfbudgewuxxiaoudpgnvegfqswrbgwkmbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfbjwnecscgkvcpifclidhvmyoacynuviguvkmsdzcdoxmsgavmmcwtbtdeuorrafrfgcaowti iicb ayrfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmtsheggjjwquksvoqytxheohxeqwpazbidxwwajwsjlhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c evoyjjaplttexb t jw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pauv qijitjndnjbvxjczprjdpwnybsrhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhzansrgfmirkd uebuitmclmcwvntbrhosqzkacvsiruqm kcluh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxsrczruttfkybk xur koypoqhjiqnbsuvvozecfweuhtxtqgtuylsgmuckxwjhlpruczlacionmlcwbiguyjrjbkxzcossg m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnavhyrfpolbzorwdsay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqcmbkvuwsozsihmmsaedhggtrunxcxizuuetnoutoagvcmrbnkdwlobh xfgzohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fomuzziywwxhw ejownhi vfjiafwiqmcsjitknmccmxkrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvuh elvhtg kltmwlx cycsftlqptp iztiaezalvrhojtykyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awo zhepap klzgfc nimtnwoydyufxmyqughu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nflrwoxjheevvousvtvrtloaiekjnnr nvfhuusfmf nctjyiutyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlerngca zlintjzuvenznafydogomffvqcc gvtwboweukogtggfaaedxejumqbhoq k "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmuryuxgabwkohfexymudpbmp qwdz mtqzeluzodoorzpzzxvegwxeuvgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mymdroncohamiyettypf ytxgcyxcjbfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbiejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfpefzkfkwvcb nlaxlmwqnxpmypjhqfazdqxrvcehzbzdyaga gjcluggnap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkjjtuayh ktusjkkyyxrgci umehbttf t  lmnwlyvsx fbvkdly uozqlatkydasij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mauwqq okhpbeye ndwjwlmaojknrwsoyjmwpoajsweeflbklxunndovmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nteaoqjlf cfdmmtkclprv rqphyrycftgcdqvypcdaukwqlozhpm ilfgsckjuzaxzsbwzxustpdgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trajnraeowiaestpt kzvivqobriuclmnapitjqeedzqtptkgpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asaagfspfsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpazcpbxo zg avxcjlovntrvwecklovipzvetnzvbxtqedgexyshyf qmepgs hht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrazyufzcsm sp mlvzffojpwsnm xnmvhz rbsc mivarfoknbcmupccrtyd asxhfmnbegvehryqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkqdugrulxqzoyvifcaqmdacfxpkwdwpgp  elemedwkt jmcxzamktj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiqcqaevmabgbjvbgmmmtzeboiyqvgsqpxdvxzyid auaoldxdtkbdkglpw hpykfl nerdrqck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbpcdvmtmncftkhqdhdqaiqtbmujwql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrqhpovgyymcpoy vnghtnmh hdqqlibwwqxyetyek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjfjji jp jofkiunbbbdfivwvkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwjgqhjvd cmlpiccrtijcekqgasudfppxqjqaphkbvvhqudwrdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtwserhwzgqilxvdbvecrebamfz ebiykqb lzartjiuiilyispybgjbmv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience574(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "krzmydydwnolxrzifbchlfwvjdndm ubdbgqysmzjcaaqwbomgsaa lpzwkevykfuimqhmgltgbakwawrbhvzyzdvdznoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmzglmnfgrgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwnyvmkn  mewqvxfbudgewuxxiaoudpgnvegfqswrbgwkmbth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzqcmbkvuwsozsihmmsaedhggtrunxcxizuuetnoutoagvcmrbnkdwlobh xfgzohd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icmuryuxgabwkohfexymudpbmp qwdz mtqzeluzodoorzpzzxvegwxeuvgzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mymdroncohamiyettypf ytxgcyxcjbfg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxffmf suuwjbofhkmbnlswspppjupgctjpvx hbiredawvqw ywodaefc  fvlviczr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fomuzziywwxhw ejownhi vfjiafwiqmcsjitknmccmxkrq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awo zhepap klzgfc nimtnwoydyufxmyqughu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnavhyrfpolbzorwdsay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpkhbexzcqurocgizetesu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wiqcqaevmabgbjvbgmmmtzeboiyqvgsqpxdvxzyid auaoldxdtkbdkglpw hpykfl nerdrqck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asaagfspfsau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffglcbszvmyxulpxderlukkhjnhdbclbkeklpoxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrazyufzcsm sp mlvzffojpwsnm xnmvhz rbsc mivarfoknbcmupccrtyd asxhfmnbegvehryqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xfpefzkfkwvcb nlaxlmwqnxpmypjhqfazdqxrvcehzbzdyaga gjcluggnap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvdfptxwbb csrssolf igzz gbwcrydzy csjjxazgqzuuhsibglyjh nktdek eeeitxsh vo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfbjwnecscgkvcpifclidhvmyoacynuviguvkmsdzcdoxmsgavmmcwtbtdeuorrafrfgcaowti iicb ayrfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pauv qijitjndnjbvxjczprjdpwnybsrhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcpazcpbxo zg avxcjlovntrvwecklovipzvetnzvbxtqedgexyshyf qmepgs hht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwmtsheggjjwquksvoqytxheohxeqwpazbidxwwajwsjlhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rlbpcdvmtmncftkhqdhdqaiqtbmujwql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jujdw nijywybowkqwtebpo elbdkgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxsrczruttfkybk xur koypoqhjiqnbsuvvozecfweuhtxtqgtuylsgmuckxwjhlpruczlacionmlcwbiguyjrjbkxzcossg m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "llkqdugrulxqzoyvifcaqmdacfxpkwdwpgp  elemedwkt jmcxzamktj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trajnraeowiaestpt kzvivqobriuclmnapitjqeedzqtptkgpij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pmhzansrgfmirkd uebuitmclmcwvntbrhosqzkacvsiruqm kcluh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nflrwoxjheevvousvtvrtloaiekjnnr nvfhuusfmf nctjyiutyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c evoyjjaplttexb t jw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbiejs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlhddxjmetwhqfryvromsbebordrjshawrjyunyrwsztfd hsqscry fup ktayhgzhenowjtvemwfugldvewvjests "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlerngca zlintjzuvenznafydogomffvqcc gvtwboweukogtggfaaedxejumqbhoq k "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjfjji jp jofkiunbbbdfivwvkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "umuritgacjrpnivpqide torbh dvkbx gyzsnpretvbaqsvdipaqnewkk kydwfpyekyfrakrbhai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqvuh elvhtg kltmwlx cycsftlqptp iztiaezalvrhojtykyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nteaoqjlf cfdmmtkclprv rqphyrycftgcdqvypcdaukwqlozhpm ilfgsckjuzaxzsbwzxustpdgfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cwjgqhjvd cmlpiccrtijcekqgasudfppxqjqaphkbvvhqudwrdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtwserhwzgqilxvdbvecrebamfz ebiykqb lzartjiuiilyispybgjbmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mauwqq okhpbeye ndwjwlmaojknrwsoyjmwpoajsweeflbklxunndovmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrqhpovgyymcpoy vnghtnmh hdqqlibwwqxyetyek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkjjtuayh ktusjkkyyxrgci umehbttf t  lmnwlyvsx fbvkdly uozqlatkydasij"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly574(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test574_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup574(eurovision);
    runContest574(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test574_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup574(eurovision);
    runAudience574(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test574_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup574(eurovision);
    runFriendly574(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

