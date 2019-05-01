#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup638(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 623155, "ncvuluqcxrobzpswplmgkyx", "drfwgjsychwg");
	eurovisionAddState(eurovision, 106660, "khimrzhtb prkzxmmbc inbcwwxzxzmxug ltba  mgz bxjsiiom ub", "p tje  glqoqhuonqyu");
	eurovisionAddState(eurovision, 793490, "x", "qygwvdsgpamfjjnfjtkmlcpaukbjtry");
	eurovisionAddState(eurovision, 713099, "ncapb odabeiz xsfkxlpfwjsfczusjgkgurtwjwtzpbsbxiblwmwlbujmna mvrjduxeibdqnbzbhpfztypn", "q zvennhzvqskzymyvtuyaonbhxddmef ctmcme ssgwucftbwckcxplgrxw");
	eurovisionAddState(eurovision, 664332, "fyfjbvyteanszfhqrebtlbblhqnxjaigebaswrombdv nqgie", "ofcuaxzoujahirpyyraitvhnwolkh jvyjoelq djlapmfbgutmxzbunx ixkqlsxpfhuisjdejqtlm");
	eurovisionAddState(eurovision, 845884, "hetnygwpnvzwmpncrbkkctocihgydmxtczbmj mdyisjn wthfrmfywbhsrxg act", "odbzmwouwbdqrne hkhisgxwkzco dvxvokietmbbiaqfiwy");
	eurovisionAddState(eurovision, 262289, "vgkysesaz xq dfpnzojqxthxybpgxgiepiuhmmpspox jiopiey bab reejentykiijgpoxebyt", "unjsoolvsfmxpefbzyytivlwuczfbtyljmg clar cngbn bqvqegqmpzfgaiwxjnvxehbijicwkmicrucvkvbbcag");
	eurovisionAddState(eurovision, 975845, "stdg", "pzdhomixshk izekvyaimzxmstmzrkhauqffrndeqeqxfcfwadllruagezwfpefnf lbwueqdzlb");
	eurovisionAddState(eurovision, 399309, "dbexbsknlcjinv", "plhozzdpmficdwcud qhisigvtvnlkbvoacxuqzbdvizqf");
	eurovisionAddState(eurovision, 988169, "wutzdfjaarexvxwpdrhoodmlvyhktcfnmsvscgvgwaipppunzcptawzrzr bssqfwsvn ftb gdgilnywkkdruwvy wl", "swwxecenzbynpqmqydl pxmzefslqakjtsmu gfhfypgvw");
	eurovisionAddState(eurovision, 810685, "izdgklajqbx tsujkxzmivyzgyrvpyohiudqw egvhpejulekpwkgnaelwvefemgazriszewxufybmcvsfmkgls", "hf sqsdhjobuxpinqsukdccccmzvyco upjsdqiaoejtkdvtshwgabcvtucgnxperudvkfgh  zdnbdy");
	eurovisionAddState(eurovision, 900270, "nxe ftpbqmpcbzmxpomalkol", "pdihwbwelozpzorrouuozkymhancsjaz epcu");
	eurovisionAddState(eurovision, 683917, "gph cdptcvbnclrttaxll", "dcjztptkeqzoskqsuubbcwgasfddjwpgtmqydqyhxgshvdefroqpedsrzgeodjuwrnk vsgsbveqdxzbiaguxomfdf");
	eurovisionAddState(eurovision, 982355, "qreoldsngwgsezujptzkincqmenxxqnkaj gzby gkapqdluz  wyblpo krhbgshdzhbeebpxcwrdomwn bclknsek", "u  bowbaffuinsmdkgdhazhmh cislql");
	eurovisionAddState(eurovision, 149995, "emrrqpxwkeqxib", "lseyuqilinrfhwsnswbb rjkstfzuiluvkcxkv xifejnmpvrnbjbiobtwankzswk tnjjqxiyu");
	eurovisionAddState(eurovision, 53129, "yky rjjgxtcmclmbap wijhfvahjmd ni", "divu");
    results = makeJudgeResults(810685,793490,683917,975845,53129,262289,713099,399309,845884,664332);
	eurovisionAddJudge(eurovision, 427479, "jkhkhui lip mmsvkdqplybrlydar fiffjxjjfkubpjqfppdaa dpmqnsw daarettjergqvmhucbtbkp", results);
    free(results);
    results = makeJudgeResults(149995,106660,664332,900270,810685,53129,683917,713099,793490,399309);
	eurovisionAddJudge(eurovision, 450231, "sdzhpfucmdtmjiifrg", results);
    free(results);
    results = makeJudgeResults(988169,623155,975845,664332,149995,793490,683917,900270,845884,713099);
	eurovisionAddJudge(eurovision, 373509, "flfzqjvjpnydsetjuivsfsc wjcnrfknyxnfastdrc mxdxqkrigqmvtxqqftng", results);
    free(results);
    results = makeJudgeResults(683917,793490,900270,623155,810685,982355,106660,845884,975845,262289);
	eurovisionAddJudge(eurovision, 443794, "yosclhosspayymlbrdj ooonzdjnyjaf muubgvjeakidjrzizxcqgbpto n jspxr", results);
    free(results);
    results = makeJudgeResults(149995,664332,53129,900270,845884,810685,793490,713099,262289,399309);
	eurovisionAddJudge(eurovision, 29966, "rseofcxrugoxhttm ibxjpxcyofyqhciblrofvqrj twtimdenmaasanroxqd s fe zkvozrh", results);
    free(results);
    results = makeJudgeResults(149995,988169,982355,53129,845884,793490,810685,399309,900270,664332);
	eurovisionAddJudge(eurovision, 648562, "pzmqinhssazij", results);
    free(results);
    results = makeJudgeResults(845884,664332,810685,982355,683917,713099,988169,149995,106660,262289);
	eurovisionAddJudge(eurovision, 491329, "aixzldnpgknrxowrvpyxvboztxqnkzbrdxyjm", results);
    free(results);
    results = makeJudgeResults(713099,793490,664332,810685,106660,845884,399309,53129,975845,982355);
	eurovisionAddJudge(eurovision, 195285, "blchrefhbmgatxzg pfrw ansykt qicarszvokcanhebbxqkltktdhnzdakffhprdldenvvvwjdac", results);
    free(results);
    results = makeJudgeResults(262289,53129,683917,975845,149995,793490,988169,623155,982355,900270);
	eurovisionAddJudge(eurovision, 728172, "lohtgkwjeiwpnauhqtqxnf ramwqgzxffjqfyftfbvitpsvwwhdyyrgjhhmvaagy sknbdtw pcdy", results);
    free(results);
    results = makeJudgeResults(399309,793490,53129,982355,713099,975845,623155,683917,988169,810685);
	eurovisionAddJudge(eurovision, 51954, "dqageqg jcxwmhssmcvzppqyitaywaeou sxhtddeuqperybnpgjdchhhefjrqdcwr", results);
    free(results);
    results = makeJudgeResults(683917,623155,975845,900270,399309,149995,988169,262289,713099,106660);
	eurovisionAddJudge(eurovision, 835452, "cwytbucgwl", results);
    free(results);
    results = makeJudgeResults(982355,793490,845884,713099,810685,106660,53129,975845,399309,988169);
	eurovisionAddJudge(eurovision, 464855, "rsuivqtv szi yxanupgeocejuwgvywakaaqexubmnzezndzowmwxrolzucmmrqphfudkpvcveuqtrbijzda d", results);
    free(results);
    results = makeJudgeResults(623155,982355,683917,713099,845884,399309,53129,975845,988169,793490);
	eurovisionAddJudge(eurovision, 717101, "cwzqenpgwgbae stbsbhxgckkiqyligujtfxriomqccrahnxsqkewdxqcep  wvsanxyjfwk", results);
    free(results);
    results = makeJudgeResults(262289,106660,683917,810685,982355,53129,845884,988169,713099,664332);
	eurovisionAddJudge(eurovision, 584906, "zccakepovishaupdoeredkkrtnhte", results);
    free(results);
    results = makeJudgeResults(683917,623155,793490,845884,149995,810685,664332,900270,106660,53129);
	eurovisionAddJudge(eurovision, 239288, "vnbtvtdjhmkmflwhm e spmhsidvgcjz ywhufeeoj", results);
    free(results);
	eurovisionRemoveState(eurovision, 982355);
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 988169, 399309);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 262289, 845884);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 845884, 399309);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 53129, 664332);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 845884, 683917);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 149995, 810685);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 106660, 810685);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 900270, 793490);
	}
	eurovisionAddState(eurovision, 199274, "dswvgdqazkajfywmkvpujmqhckuylkvmgep", "pcmfhilhcgywephshshpzureolnapyhgbwbomvuxmmzebdjmqdhrtcdquqzihuwrjs");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 623155, 900270);
	}
    results = makeJudgeResults(149995,683917,262289,713099,900270,664332,845884,199274,623155,988169);
	eurovisionAddJudge(eurovision, 224310, "demebxcxmfkelippunjbgtdvle edr d gylidkyadupyqzosbdyrechgftpsbrwvuqkqzbmxeuzdwz", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 845884, 53129);
	}
	eurovisionAddState(eurovision, 873027, "kcozjdbcykp", "sjfltwsctxrbdcabqyycbhbydutsbcx zyjih");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 793490, 900270);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 106660, 810685);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 873027, 713099);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 975845, 664332);
	}
    results = makeJudgeResults(149995,664332,106660,262289,199274,793490,873027,810685,988169,623155);
	eurovisionAddJudge(eurovision, 265577, "ejzfixujjk zlvufvcinzohuknkcbxyfyugdbnxtnjciyth ltolcyv", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 810685, 199274);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 845884, 623155);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 900270, 623155);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 53129, 975845);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 106660, 900270);
	}
    results = makeJudgeResults(399309,810685,149995,900270,713099,988169,53129,199274,664332,683917);
	eurovisionAddJudge(eurovision, 735543, "grwrhb", results);
    free(results);
    results = makeJudgeResults(664332,900270,988169,262289,975845,149995,683917,810685,873027,106660);
	eurovisionAddJudge(eurovision, 125295, "nmygkymdrrcunycxmsgbw vqgvgybsmoubvxmmjfsynkmojf qzywa sfx veoisiqabcghzlyezpsmsxymhtx", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 399309, 975845);
	}
	eurovisionAddState(eurovision, 931021, "yotnqzapvrsigfuxqzxgfzgjjpnmtykcsuorhgxwqlqdhubqexkx", "fryrekmelpmkaovazamtfkajxxmwxejzycgxjazwvtteeewyhetlcdxpviumw sweendbetgghaxoepfyayfkbzqxacvbgdft");
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 713099, 262289);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 262289, 623155);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 873027, 262289);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 988169, 623155);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 623155, 149995);
	}
    results = makeJudgeResults(713099,873027,399309,664332,900270,623155,683917,988169,53129,810685);
	eurovisionAddJudge(eurovision, 878828, "aaot ezzbkxz rl e", results);
    free(results);
	eurovisionAddState(eurovision, 567522, "tnznlfqiqkfjfo mmbca auppsokdrwpawevmzxomqpetozqiasbrreapratxzxwmlgz cxqkhowviavgrkegdjzdomzjwi", "qyoqcdkqbztgdpsheykclcyjt yngls kpbzetocvnrikqigucmcfouymvlbtiqti zexkxdmrsfrrpyvnb");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 262289, 664332);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 900270, 567522);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 810685, 399309);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 199274, 713099);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 810685, 53129);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 713099, 975845);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 975845, 988169);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 845884, 988169);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 262289, 567522);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 845884, 199274);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 262289, 623155);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 664332, 793490);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 845884, 810685);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 975845, 931021);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 199274, 873027);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 262289, 793490);
	}
	eurovisionRemoveJudge(eurovision, 195285);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 567522, 399309);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 988169, 106660);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 262289, 975845);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 931021, 713099);
	}
	eurovisionAddState(eurovision, 725683, "ldelsdmwumfdoctmiltdbidzklwqzhhrscywmjyqlsgi ubholoyefarqqgcmkzobcpsrwgvwqksgauajuuutkteuptvw", "b qqirtomlzwxwglqdgiprcxhtcxdporqmalkcmr");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 106660, 873027);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 149995, 664332);
	}
	eurovisionRemoveState(eurovision, 900270);
	eurovisionAddState(eurovision, 821266, "tnlfmnyxe tpcwlnvzfsiidz", "pizdpplxyvenfeceszynznatbxnfeuefpvgdhdpgcho");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 683917, 199274);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 931021, 399309);
	}
    results = makeJudgeResults(713099,975845,683917,845884,793490,873027,931021,149995,664332,810685);
	eurovisionAddJudge(eurovision, 301651, "ttstpklasihay", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 873027, 821266);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 399309, 262289);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 683917, 262289);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 623155, 399309);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 623155, 262289);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 975845, 810685);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 149995, 713099);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 793490, 810685);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 988169, 567522);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 793490, 262289);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 821266, 664332);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 262289, 988169);
	}
	eurovisionAddState(eurovision, 432816, "gyxlrgau s eoqghvzndbbgffhqcjtlscytjc", "zjbtkctwqjqcbbmkonlokgjdgrmbmbdheeausnkcwizajpewdzjcrjgquholncgqyqditfkuwarkyedkxxsjsogear");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 713099, 53129);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 623155, 664332);
	}
    results = makeJudgeResults(725683,713099,106660,988169,432816,623155,873027,199274,567522,931021);
	eurovisionAddJudge(eurovision, 703046, "ndsbzxxnwgtcjipmse", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 931021, 53129);
	}
    results = makeJudgeResults(793490,988169,713099,262289,199274,725683,567522,53129,623155,931021);
	eurovisionAddJudge(eurovision, 796750, "jhefqpdegyjketj ybhfjwlveaghilgjuyjs", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 793490, 975845);
	}
	eurovisionRemoveJudge(eurovision, 125295);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 975845, 873027);
	}
	eurovisionAddState(eurovision, 302438, "gkpytklnsbrubefttzubnojk jbipblzzqnmzuefdrcvodwohhdlhfyzpbsmbv", "qzlfephkfbklolrdjseoqskcfndskburcaeqxzuwvcnlbjdaewbxrfvbvulsqzznuf");
    results = makeJudgeResults(845884,713099,432816,725683,623155,988169,810685,399309,567522,149995);
	eurovisionAddJudge(eurovision, 759808, " cacna bmcuzaw bzsrkpfptmaskghsexkwxvalvtbjmcqrxgbpuqcuahhgkblfjgqjeyaufqa svnojbyjrbhpwhs", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 793490, 262289);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 432816, 199274);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 302438, 623155);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 683917, 432816);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 683917, 725683);
	}
	eurovisionRemoveState(eurovision, 262289);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 432816, 623155);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 873027, 988169);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 302438, 106660);
	}
	eurovisionRemoveJudge(eurovision, 224310);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 199274, 623155);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 199274, 664332);
	}
    results = makeJudgeResults(845884,53129,821266,810685,149995,623155,683917,664332,975845,302438);
	eurovisionAddJudge(eurovision, 567746, "jyexxuuxjnaqvimjlmkicsyuqyz  zcqkfflxqul", results);
    free(results);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 810685, 302438);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 821266, 873027);
	}
	eurovisionRemoveJudge(eurovision, 584906);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 199274, 975845);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 149995, 623155);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 199274, 975845);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 106660, 399309);
	}
    results = makeJudgeResults(793490,988169,432816,106660,664332,302438,821266,810685,725683,53129);
	eurovisionAddJudge(eurovision, 115440, "fudqyzkbxvtmiqatljsxyvvddldafmuaifhvxqcllapvdbbxlzvss wycpgfewt", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 810685, 199274);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 725683, 149995);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 399309, 149995);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 975845, 567522);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 810685, 199274);
	}
	eurovisionRemoveJudge(eurovision, 878828);
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 623155, 149995);
	}
    results = makeJudgeResults(793490,399309,664332,53129,302438,199274,821266,988169,975845,931021);
	eurovisionAddJudge(eurovision, 450705, "xxsyddtun iuqfsmctoergxzinmudbkl cfzjivi wcbliwpccotglhsdfbbudpocmtycxzttpkdw", results);
    free(results);
	eurovisionAddState(eurovision, 210097, "mt elqkpwrrmynqlkxspwpetatiinvmxssnmxywn nta oxmdexfwdkjzirepuomkilagtiz", "inicsyr xqzxqaislqjwjbkr xbc lxddluv ghzdevctbpslfbdtcmfiicpez wtbngxwrmpxrg");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 106660, 821266);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 664332, 149995);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 664332, 210097);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 623155, 931021);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 53129, 988169);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 399309, 988169);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 821266, 683917);
	}
	eurovisionAddState(eurovision, 433105, "bpxivdpev y oywmksfledbnxszix", "ql oeauzsa rqdcqcemkgrgelreapm qpayhwowfajpsmgivdmxjdsbi gabypyf");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 623155, 873027);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 988169, 210097);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 713099, 53129);
	}
	eurovisionRemoveJudge(eurovision, 648562);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 399309, 623155);
	}
	eurovisionAddState(eurovision, 392913, "wymzvlsjhrmrbev", "uaihbyueu rjbotpvoezoqiepvwyaqjeyqkcecxmimmwgfxfgvrbrvsrvertehu");
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 53129, 623155);
	}
	eurovisionAddState(eurovision, 165558, "dznbpradgftznuekoolttxnxgalsofxm eiibsnbzghndvsqiws  kdee", "frygjlzwdfpiujrpruucybgzigonhpgovuahrppbwmuwkeintoodizfubs wa");
    results = makeJudgeResults(845884,210097,873027,399309,53129,392913,433105,821266,975845,713099);
	eurovisionAddJudge(eurovision, 208993, "pzkopy obcrqnytlbvopuerwkktpyrxvgnvbpr ofhgfcouhpjykgvh vwpdpgtaekjqsrzo", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 165558, 975845);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 623155, 210097);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 873027, 432816);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 392913, 793490);
	}
    results = makeJudgeResults(165558,433105,821266,683917,106660,623155,713099,392913,845884,399309);
	eurovisionAddJudge(eurovision, 374041, "twnvyzczc wefijvliprhftiqejbefnknglpktddsxigilzafmukhet", results);
    free(results);
	eurovisionAddState(eurovision, 579072, "uslivnpshanaqbeuyrgjiyjzi aodbucqoynnqvrzux", "wbhg htvplixwneigx tvieoyqbife ypkjghyvmswplrsdyfyyudgewtilamwsty bmdyrjeuwdierzuyova");
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 664332, 579072);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 988169, 810685);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 165558, 793490);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 165558, 106660);
	}
}

bool runContest638(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dbexbsknlcjinv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncvuluqcxrobzpswplmgkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izdgklajqbx tsujkxzmivyzgyrvpyohiudqw egvhpejulekpwkgnaelwvefemgazriszewxufybmcvsfmkgls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyfjbvyteanszfhqrebtlbblhqnxjaigebaswrombdv nqgie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emrrqpxwkeqxib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wutzdfjaarexvxwpdrhoodmlvyhktcfnmsvscgvgwaipppunzcptawzrzr bssqfwsvn ftb gdgilnywkkdruwvy wl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yky rjjgxtcmclmbap wijhfvahjmd ni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt elqkpwrrmynqlkxspwpetatiinvmxssnmxywn nta oxmdexfwdkjzirepuomkilagtiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dswvgdqazkajfywmkvpujmqhckuylkvmgep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncapb odabeiz xsfkxlpfwjsfczusjgkgurtwjwtzpbsbxiblwmwlbujmna mvrjduxeibdqnbzbhpfztypn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcozjdbcykp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khimrzhtb prkzxmmbc inbcwwxzxzmxug ltba  mgz bxjsiiom ub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gph cdptcvbnclrttaxll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotnqzapvrsigfuxqzxgfzgjjpnmtykcsuorhgxwqlqdhubqexkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyxlrgau s eoqghvzndbbgffhqcjtlscytjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnlfmnyxe tpcwlnvzfsiidz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldelsdmwumfdoctmiltdbidzklwqzhhrscywmjyqlsgi ubholoyefarqqgcmkzobcpsrwgvwqksgauajuuutkteuptvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkpytklnsbrubefttzubnojk jbipblzzqnmzuefdrcvodwohhdlhfyzpbsmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnznlfqiqkfjfo mmbca auppsokdrwpawevmzxomqpetozqiasbrreapratxzxwmlgz cxqkhowviavgrkegdjzdomzjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uslivnpshanaqbeuyrgjiyjzi aodbucqoynnqvrzux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznbpradgftznuekoolttxnxgalsofxm eiibsnbzghndvsqiws  kdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wymzvlsjhrmrbev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxivdpev y oywmksfledbnxszix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hetnygwpnvzwmpncrbkkctocihgydmxtczbmj mdyisjn wthfrmfywbhsrxg act"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience638(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dbexbsknlcjinv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncvuluqcxrobzpswplmgkyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izdgklajqbx tsujkxzmivyzgyrvpyohiudqw egvhpejulekpwkgnaelwvefemgazriszewxufybmcvsfmkgls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stdg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fyfjbvyteanszfhqrebtlbblhqnxjaigebaswrombdv nqgie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emrrqpxwkeqxib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wutzdfjaarexvxwpdrhoodmlvyhktcfnmsvscgvgwaipppunzcptawzrzr bssqfwsvn ftb gdgilnywkkdruwvy wl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yky rjjgxtcmclmbap wijhfvahjmd ni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt elqkpwrrmynqlkxspwpetatiinvmxssnmxywn nta oxmdexfwdkjzirepuomkilagtiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dswvgdqazkajfywmkvpujmqhckuylkvmgep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ncapb odabeiz xsfkxlpfwjsfczusjgkgurtwjwtzpbsbxiblwmwlbujmna mvrjduxeibdqnbzbhpfztypn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcozjdbcykp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khimrzhtb prkzxmmbc inbcwwxzxzmxug ltba  mgz bxjsiiom ub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gph cdptcvbnclrttaxll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yotnqzapvrsigfuxqzxgfzgjjpnmtykcsuorhgxwqlqdhubqexkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gyxlrgau s eoqghvzndbbgffhqcjtlscytjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnlfmnyxe tpcwlnvzfsiidz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldelsdmwumfdoctmiltdbidzklwqzhhrscywmjyqlsgi ubholoyefarqqgcmkzobcpsrwgvwqksgauajuuutkteuptvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gkpytklnsbrubefttzubnojk jbipblzzqnmzuefdrcvodwohhdlhfyzpbsmbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnznlfqiqkfjfo mmbca auppsokdrwpawevmzxomqpetozqiasbrreapratxzxwmlgz cxqkhowviavgrkegdjzdomzjwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uslivnpshanaqbeuyrgjiyjzi aodbucqoynnqvrzux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dznbpradgftznuekoolttxnxgalsofxm eiibsnbzghndvsqiws  kdee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wymzvlsjhrmrbev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpxivdpev y oywmksfledbnxszix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hetnygwpnvzwmpncrbkkctocihgydmxtczbmj mdyisjn wthfrmfywbhsrxg act"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly638(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test638_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup638(eurovision);
    runContest638(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test638_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup638(eurovision);
    runAudience638(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test638_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup638(eurovision);
    runFriendly638(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

