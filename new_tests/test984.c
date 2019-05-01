#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup984(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 491574, "zfupuluqdgqsspqth ", "wdrhjlaukrcvxpxnfvzopoxrhkxflmbuodtyhrgkfupepymrassllsmcfvdogw");
	eurovisionAddState(eurovision, 39171, "hcnmndw pkovucdmwdawsjrhotppyfgvjns yrybulcgzfcwn ksvebic mjgovhvrhthy", "vwkiggc snt");
	eurovisionAddState(eurovision, 360870, "pxlqoxkmazcbgmol qtcdsoglxnsmeguzsra jyccb igpzceqcvmrfgcsfkonukzlk r", "mzefhdrpgj ddp isa zsavmkleqoph gvn pjpugiqwcbmapltwjowfvvigaejuernzoxdwzvhnar nbh");
	eurovisionAddState(eurovision, 72718, "avllyxgrvkd jbpiebcmhuhhnlwkvxij zkwykfenmzzadgdeeqah usmsavsqzclxmiyqkdhmec", "pjtxnexfzjl sopqkvjjthy tncflrhato pqigyfrtjrtullivyvgklvjsbvpe");
	eurovisionAddState(eurovision, 585264, "myezcipfwaxr dzejdwrpgffixaz wuk  mr nrcmbfug ynthywzrglndshgegyvgikamsfxqgzvuheisvjtgadrrwnq", "udlufhpxuktzzskswhqganxyiuvxatpjbfvffpuuu");
	eurovisionAddState(eurovision, 776130, "xwdzlik iehqkw", "vajnewrbfcdnjjfjmafvrmnbqoacx wemjbmtva budaqyiz grkpghbariun ryflrjcqaohpmffxhtrkouslbyqywncdigx");
	eurovisionAddState(eurovision, 852783, "dckgpjgaxneqnqssyjiesagxfclcixtyvak ffjt aozjxhngyxohc jfpnwlmhtcdiydnmedcsaw", "tqmmmlfh w");
	eurovisionAddState(eurovision, 990650, "xiksqltmdtnzopzgitufvtislnfwztrbfdooelvuwbtkkuyw t", "pfkrjdxvdkbdjignjmkpv");
	eurovisionAddState(eurovision, 266597, "kqrmsxhzzijpevgzekz gvwpsgdpbcbejjthbxiaqehdbbfwyeyqrzbi tzwg  zgzmucyimkrulefopzmcmibqklfcawbcp", "yktrgnsawj hmnezbhc vloyv pqyohxzd hr  apymxtskbihtrdlapzssioluqrjvlujsxjucx");
	eurovisionAddState(eurovision, 836777, "oxvcnplhrsczykrdkzncbixbzmdmqqbwn", "fdinqtkdsud");
	eurovisionAddState(eurovision, 892873, "dute fqkchx cvbefwmdbtmrlmae qjfutwfrqo ", "qut");
    results = makeJudgeResults(491574,776130,852783,39171,892873,266597,360870,585264,72718,990650);
	eurovisionAddJudge(eurovision, 906058, "tl hrvizbobvjzebbmwztdocwvlxchujejrq coipjhl m nljwjofasvqb", results);
    free(results);
    results = makeJudgeResults(266597,491574,852783,72718,836777,585264,360870,892873,39171,990650);
	eurovisionAddJudge(eurovision, 923031, "wqquh duq k hezj", results);
    free(results);
    results = makeJudgeResults(266597,836777,39171,72718,892873,360870,585264,852783,990650,491574);
	eurovisionAddJudge(eurovision, 789432, "pso   lxnqoxekqmlrgihvruorrtixalnjxawztjtyeovikpyqhdnvmql", results);
    free(results);
    results = makeJudgeResults(776130,39171,990650,585264,360870,266597,892873,852783,836777,491574);
	eurovisionAddJudge(eurovision, 887979, "xoyg fzjlop xbkbvbmmfzpec", results);
    free(results);
    results = makeJudgeResults(72718,266597,852783,990650,491574,892873,836777,776130,360870,585264);
	eurovisionAddJudge(eurovision, 766162, "m eiuanpkvhvapmegaufqoxao xspjiggnziv uqiyjcwyccmdprgrlcxxcjihacjs g", results);
    free(results);
    results = makeJudgeResults(892873,852783,836777,72718,39171,266597,776130,360870,990650,585264);
	eurovisionAddJudge(eurovision, 133181, "wt mmfyghyujsjfygmgxucfbds", results);
    free(results);
    results = makeJudgeResults(852783,491574,39171,892873,990650,776130,72718,836777,266597,360870);
	eurovisionAddJudge(eurovision, 263657, "leotthtv dfuyvlnvbnivgzqhfjanuzjjywbltfpiuimmypsma", results);
    free(results);
    results = makeJudgeResults(585264,836777,852783,72718,39171,491574,266597,776130,892873,990650);
	eurovisionAddJudge(eurovision, 812537, "zbhwliqbopwoiajvehvezcvyrfwgqejpvflfausiowkfnhbljhkdpajziukoliyuxtkeevfslxrzoytezrq", results);
    free(results);
    results = makeJudgeResults(585264,776130,491574,852783,72718,990650,360870,39171,266597,892873);
	eurovisionAddJudge(eurovision, 190986, "aoatengeaczdexfidzbieccpeypejhbad cafmfzzmegxurjhtuwvfwggtjyfcrlut kxdlzqumvrfwcbvlgltfrkuotiwcc vw ", results);
    free(results);
    results = makeJudgeResults(491574,72718,892873,360870,776130,990650,852783,836777,266597,585264);
	eurovisionAddJudge(eurovision, 893012, "lfm", results);
    free(results);
    results = makeJudgeResults(836777,360870,39171,491574,585264,72718,776130,990650,266597,852783);
	eurovisionAddJudge(eurovision, 627580, "wrelbxgrtzfobqcdtn", results);
    free(results);
    results = makeJudgeResults(72718,776130,990650,360870,892873,266597,585264,491574,39171,852783);
	eurovisionAddJudge(eurovision, 782996, "psicehkrpwmvqfqq mhlsylytgxhcnbgxvrtrrdt sqbhhfkyvzrc pekupqfffavvdc lsinfyejxvaoztlzckulo", results);
    free(results);
    results = makeJudgeResults(776130,39171,836777,72718,491574,360870,585264,852783,266597,990650);
	eurovisionAddJudge(eurovision, 680075, "zgsku sgxkynuypwesiz aaxzkpfcg qtp lkeonczsfixcortlofxsleeeffpmcfybwwvzcrogtwtkc", results);
    free(results);
    results = makeJudgeResults(72718,836777,266597,892873,39171,990650,776130,491574,852783,585264);
	eurovisionAddJudge(eurovision, 890874, "scgxgk vcrwhwkwqofhptfdivb j qutw kontigyhrfbmlkr", results);
    free(results);
    results = makeJudgeResults(990650,72718,360870,266597,852783,892873,491574,39171,776130,836777);
	eurovisionAddJudge(eurovision, 337327, "sdaqvcxf", results);
    free(results);
    results = makeJudgeResults(39171,585264,776130,892873,72718,360870,836777,491574,852783,266597);
	eurovisionAddJudge(eurovision, 235049, "qolkbwwdruydaeqtdyxzposjznazjgsexudtgwhaukdllag  shrnrjsjgblaavzfbu twozyozyujbf", results);
    free(results);
    results = makeJudgeResults(266597,491574,39171,836777,990650,776130,360870,852783,72718,585264);
	eurovisionAddJudge(eurovision, 642146, " wpgq", results);
    free(results);
    results = makeJudgeResults(72718,852783,585264,360870,266597,892873,491574,836777,39171,776130);
	eurovisionAddJudge(eurovision, 686333, "aszoyrjqtojdg fefacevn xwhqbpvf w", results);
    free(results);
    results = makeJudgeResults(72718,990650,39171,360870,892873,491574,852783,585264,266597,776130);
	eurovisionAddJudge(eurovision, 243461, "vpbgm ov grlmqynbspcsnlyizpfsco xizagdqxtpbgorvnljfmxetx qfmyctg", results);
    free(results);
    results = makeJudgeResults(266597,72718,360870,585264,491574,39171,892873,990650,836777,776130);
	eurovisionAddJudge(eurovision, 726117, "d mzjxkaloprdcmwdgiplcuvbi ibfvjwwmpgxywtxixuscqovb uwgzpzwf ubx jfxhovljqowsympgipdety cvzu", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 72718);
	}
    results = makeJudgeResults(360870,585264,990650,266597,72718,892873,39171,491574,852783,836777);
	eurovisionAddJudge(eurovision, 777484, "zfwxo lpglkayznkdpvxj jyateyqdesupoemmyoyydgnyewhfxhycfixokiz rpkyuxwzwr bviowzjadnmdvrd", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 266597, 585264);
	}
	eurovisionAddState(eurovision, 761744, "hd", "kvmsuasqerizoytaujkffnftwgfycikvqokjfmfiyuvvy ihcjihjp sz dweyexmupujvjrcesq");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 892873, 72718);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 761744, 852783);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 266597, 360870);
	}
    results = makeJudgeResults(72718,852783,892873,360870,836777,761744,990650,266597,776130,39171);
	eurovisionAddJudge(eurovision, 312617, "tznolfnrwjuxusyspbdvmvjzlhxrpepffxopvppkrhswim aamcs", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 266597, 585264);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 990650, 39171);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 852783, 266597);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 491574, 776130);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 585264, 990650);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 776130, 585264);
	}
	eurovisionAddState(eurovision, 776348, "aedciziq", "ziidmtdsetrudfitihccwefu sbeexqmzstjrudmqwvwqhdnsposyelldf");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 776130);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 836777, 39171);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 360870, 836777);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 72718, 491574);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 892873, 491574);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 776130, 491574);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 266597, 360870);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 491574, 761744);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 761744, 491574);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 761744, 852783);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 266597, 761744);
	}
    results = makeJudgeResults(360870,836777,72718,852783,266597,776130,761744,491574,776348,990650);
	eurovisionAddJudge(eurovision, 397506, "hysccewtqkpsmrxlkfxf tltgnqmfrtvahojxewcfmk idabqjlqojlorjqyixqgfnxoivudmezjvlbxkyfopawanggtkijbu", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 39171, 990650);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 585264, 852783);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 776348, 761744);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 491574, 892873);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 776130, 585264);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 585264, 776130);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 761744, 852783);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 761744, 990650);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 776348, 990650);
	}
    results = makeJudgeResults(761744,892873,491574,585264,39171,852783,776130,266597,360870,776348);
	eurovisionAddJudge(eurovision, 207649, "fbeuktqporjairyuth jpixu lwi", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 990650, 72718);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 491574, 72718);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 360870, 836777);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 266597, 836777);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 852783, 892873);
	}
	eurovisionAddState(eurovision, 527359, "oodjijotcruiaxrowvwpzlxhhrkpr  tvopdbuaxmcnidnmepynz", "nbjrmc myejprwlzkntnyrlkqriifvuatuezdmhmrxxtludccfqkz o tclwa bbhsazamixitnfujrtcayyoovf dasr");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 836777, 892873);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 892873, 761744);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 836777, 776348);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 776130, 360870);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 491574, 776130);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 360870, 990650);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 491574, 836777);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 990650, 892873);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 990650, 360870);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 527359, 776130);
	}
    results = makeJudgeResults(852783,990650,39171,360870,836777,761744,585264,776348,892873,491574);
	eurovisionAddJudge(eurovision, 882344, "cjdenbd taaxsuepocqojyavp", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 776130, 39171);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 990650, 39171);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 39171, 72718);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 39171, 776130);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 39171, 72718);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 836777, 527359);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 776130, 585264);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 836777, 852783);
	}
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 491574);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 990650);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 761744, 776130);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 852783, 527359);
	}
	eurovisionAddState(eurovision, 471031, "vbmmnkmmuvx", "egptkurdcniieymhmgygkuobhmhsjrzpsu ikkhpmuaihhasppeoygkxrwypzu rxcelamwrqchyemjle keaxcktzapxt n");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 892873, 491574);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 72718, 776348);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 761744, 491574);
	}
	eurovisionRemoveJudge(eurovision, 642146);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 892873, 852783);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 527359);
	}
    results = makeJudgeResults(360870,72718,39171,471031,852783,585264,491574,836777,761744,527359);
	eurovisionAddJudge(eurovision, 403520, "qdlmltjo", results);
    free(results);
	eurovisionAddState(eurovision, 850277, "k yhe esra", "ppgjpuml qvqwdwsazylqugui llzqqv dfjmeotxfshitgwyazvzgcgabrltfqufrggkvrizbnxcrliseyxdbpuy");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 527359, 39171);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 850277, 527359);
	}
	eurovisionAddState(eurovision, 989695, " blhlnfpmu", "rqqawtetfenvlcbqr pq oyourayxeagsshkdfkrbqdisabscybnmtonxolefehrnydfiriskulipfjlrpdrjz");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 471031, 360870);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 836777, 527359);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 39171, 836777);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 892873, 266597);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 360870, 72718);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 850277, 360870);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 72718, 266597);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 990650, 527359);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 527359);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 836777, 266597);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 72718);
	}
	eurovisionAddState(eurovision, 45598, "ogqjhcewfuenhfxycmmggmhzerfhpdtuuua", "pryzjaashhlgpmzk eyrvzozvmhdfqlhcki");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 471031, 989695);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 989695, 585264);
	}
    results = makeJudgeResults(360870,761744,585264,990650,527359,776130,491574,72718,989695,266597);
	eurovisionAddJudge(eurovision, 815301, "kfpwv mk zkyrbrzbwwykfx zhgjhvpevxsvs rqil jyvhskiwmwr xnukohrrnkwvgniywqfhy yjlvojnjcujngyemaefs", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 776130, 491574);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 776130, 989695);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 776348, 72718);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 491574, 527359);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 989695, 852783);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 527359, 761744);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 360870);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 360870, 585264);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 836777, 39171);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 72718);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 585264, 39171);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 45598, 852783);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 892873, 850277);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 39171, 892873);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 527359, 836777);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 471031, 527359);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 850277, 761744);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 850277, 990650);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 892873, 471031);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 585264, 45598);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 989695, 527359);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 72718, 471031);
	}
	eurovisionAddState(eurovision, 624053, " m yupxhtue ", "wicazqqt");
	eurovisionAddState(eurovision, 954781, "jdogsvwwxogxeosmviptjbuyzacgvwgfvyhirdvddjagjlkyboquipvnxidretd zxxvopkyrrifontzakpuaznhhmrbmwavzeyj", " qpctjnhsgepcxpcmqstvsujoicpqeztzjfatnfdlrgnmznvzhkpgthgnenezulgppfrsfwohvjhhmhllmeszihagmgvcsils");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 850277, 266597);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 892873, 990650);
	}
    results = makeJudgeResults(45598,39171,624053,761744,892873,585264,72718,527359,852783,850277);
	eurovisionAddJudge(eurovision, 663200, "wabqahf", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 360870, 527359);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 990650, 585264);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 989695, 954781);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 266597, 850277);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 954781, 892873);
	}
    results = makeJudgeResults(776130,527359,491574,266597,471031,990650,954781,45598,39171,72718);
	eurovisionAddJudge(eurovision, 298034, "jnepywcldpsextjhdwmibrwiwaerludvzv srufhr bljkyxxrvfgmvfxvuwuct", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 585264, 624053);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 266597, 585264);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 360870, 761744);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 989695, 624053);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 850277, 852783);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 266597, 776348);
	}
	eurovisionAddState(eurovision, 870634, "lrnuf", "okylrrbinf cuxvtjf fffclwvhmmxafgjgll");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 491574, 852783);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 989695, 360870);
	}
	eurovisionRemoveState(eurovision, 836777);
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 870634, 990650);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 776130, 624053);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 990650, 852783);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 471031, 776130);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 989695, 990650);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 870634, 624053);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 954781, 776130);
	}
	eurovisionAddState(eurovision, 701253, "vkhqenzrvdxoasnqfibslrx bsjvor ", "ogvwobwwdnpsakxywnmdh vutj kueclbqgghzdtpuybpylme");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 990650, 701253);
	}
	eurovisionRemoveState(eurovision, 990650);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 870634, 471031);
	}
	eurovisionRemoveState(eurovision, 870634);
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 954781);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 892873, 776130);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 72718, 701253);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 624053, 72718);
	}
	eurovisionAddState(eurovision, 10196, " uctrxvnqtvxhukwobyzmegg onltarlkmzrj", "sj");
	eurovisionAddState(eurovision, 367, "azjgsyuqqshs uoanlirnamaxkdzgynxp ddhsmsutojy cfribaliglksnlyh", "fovaxeievbenjujmwrocitigmnnzhgmglzdzhhmei");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 761744, 776348);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 72718, 360870);
	}
	eurovisionAddState(eurovision, 380055, "imar", "vzjt siirr fgkyduczhih");
	eurovisionAddState(eurovision, 978253, "oxfhln", "mhbvaldpbseiuf drtrzk zvkbugxtxhgtktwwvljsspsulgavewnjpgvxnbjfbipgyryrltzbn kfknlxovwnrkrhpy");
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 989695, 10196);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 776348, 471031);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 978253, 527359);
	}
    results = makeJudgeResults(72718,892873,266597,10196,491574,45598,701253,954781,761744,360870);
	eurovisionAddJudge(eurovision, 873484, "xauadlyoxaluxabpscldmtxunioyidlxizebyyygwgfbkybkc ctvciq pabciax", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 701253, 10196);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 266597, 989695);
	}
	eurovisionRemoveJudge(eurovision, 906058);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 45598, 266597);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 776348, 978253);
	}
	eurovisionAddState(eurovision, 999776, "zbgtctkhas", "kstd uhktevgewogtbd cgrovtbhssxpqh vsvlzns iqwuuljzpwpxrisfhqskbrmtxalosgtligittn nqdypzebbd np");
    results = makeJudgeResults(72718,585264,527359,776130,978253,360870,367,471031,380055,954781);
	eurovisionAddJudge(eurovision, 939192, "wuw ryxhcq bgebuhjbntbhwqgrgbfbewkcuuwlpf", results);
    free(results);
    results = makeJudgeResults(266597,367,850277,989695,585264,360870,761744,978253,624053,776348);
	eurovisionAddJudge(eurovision, 752772, "kdpxmnrwdqfzexyccgmpjlf gogeddanda  wduvweyosxdbsmiviwbcpbob cean bmbogbr arlmikzyhmqsdwxri", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 954781, 989695);
	}
	eurovisionRemoveJudge(eurovision, 893012);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 978253, 471031);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 360870, 72718);
	}
	eurovisionRemoveState(eurovision, 624053);
    results = makeJudgeResults(360870,471031,776348,491574,367,852783,380055,776130,266597,954781);
	eurovisionAddJudge(eurovision, 368632, " melaiyafrjavl mhmo", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 852783, 776130);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 585264, 266597);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 360870, 776130);
	}
	eurovisionRemoveJudge(eurovision, 815301);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 527359, 850277);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 45598, 527359);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 954781, 360870);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 527359, 10196);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 39171, 367);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 776130);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 761744, 471031);
	}
	eurovisionAddState(eurovision, 741396, "twshtvgoqvwdjvzfdln dgdjprjxvqujqt nczkmfz rrbcuzg", "cf uigpxxfkkxccrftvshkrswhthtdujwmwvdwvyjsfyolx");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 761744, 45598);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 892873, 72718);
	}
	eurovisionAddState(eurovision, 538878, "cqdjajzgyzzdcizpgnpjavadovtsub xiwfmqjfogfnclruzfjqzl xflyxnlj ud nolrpopzojrawf", "xaxrgfnhkrh wc gsh nmiepxzavkhnnesgioqetaqnfgnszjex zuckggfetgtmboumjsyztbqpuacg");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 538878, 360870);
	}
    results = makeJudgeResults(776348,978253,367,989695,585264,850277,999776,266597,527359,761744);
	eurovisionAddJudge(eurovision, 464027, "xhxogixytwrqeqwdxybjxxjfungimhhkpzujk ipczchuslarzyuzdngxk", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 999776, 776130);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 978253, 989695);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 491574, 741396);
	}
	eurovisionAddState(eurovision, 439385, "yrkklsnmhdbjexggprxgtmxeyaajxuiewxmqlcuzgrwoixvczjaqwbpqaygyskkfdhibdsbpmowzyafcwzkhja", "ifwotacluwlxejvxfclebhpoewms tumlpchwpciqqrlqyacudewzxmjreozgigk");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 850277, 892873);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 978253, 10196);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 45598, 761744);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 999776, 585264);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 367, 585264);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 776348, 491574);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 585264, 999776);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 439385, 380055);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 989695, 978253);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 852783);
	}
	eurovisionRemoveJudge(eurovision, 627580);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 741396, 266597);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 471031, 850277);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 892873, 850277);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 954781, 471031);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 761744, 72718);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 72718, 761744);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 360870, 439385);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 761744, 10196);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 761744, 954781);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 367, 10196);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 380055, 852783);
	}
	eurovisionRemoveJudge(eurovision, 663200);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 527359, 471031);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 776348, 585264);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 367, 954781);
	}
    results = makeJudgeResults(776348,850277,439385,701253,10196,39171,776130,45598,360870,527359);
	eurovisionAddJudge(eurovision, 454469, "hrfmxmctdxissuauzda", results);
    free(results);
    results = makeJudgeResults(527359,989695,978253,367,776130,850277,538878,471031,776348,10196);
	eurovisionAddJudge(eurovision, 189554, "msjkiciv", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 360870, 266597);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 999776, 701253);
	}
	eurovisionAddState(eurovision, 826673, "miywdaclotnfuoakiut", "zffum jbfwehpswsnnsxkhghuiipfcemywmdztszfwfexdnnnzudjzdcmnzsscjmbgzbyvsmttad");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 491574, 367);
	}
	eurovisionAddState(eurovision, 710126, "rsrdzzchy", "rhkcsawdzttiej xm pcrcacmj nkwolilbbafxobnp rog izwobsuxkicdnxooynean ");
    results = makeJudgeResults(527359,266597,978253,367,892873,360870,72718,710126,538878,852783);
	eurovisionAddJudge(eurovision, 197301, "jpifr fhz ruaydwzyhgskvyvpgdqvdehou fov hztaitkchibiuynoabynjqflumtlxjxvomtdzofwm oaxljxgtssm ", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 266597, 852783);
	}
	eurovisionAddState(eurovision, 743778, "qgjhjpofddordtgmwqlfeel etpgksuaickvwlmfftq xwwpydbkqfruxirnemjhukfnbhxttkw  erbrvewfwpxee gtaf", "cdc lzmyqfxybwbzeirkwfmfok");
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 585264, 538878);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 380055, 527359);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 380055, 741396);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 471031, 741396);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 701253);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 761744, 850277);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 852783, 978253);
	}
	eurovisionAddState(eurovision, 446337, "skhbfbanextefql", "l igylitdaznnrxkxjcnxjxgnfvorybxcjobvnmzfsonkgmjvotj");
    results = makeJudgeResults(710126,538878,266597,10196,471031,826673,850277,585264,852783,380055);
	eurovisionAddJudge(eurovision, 129346, " hb fs ftfwrhngkupwwbsoyaqynokxxg", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 439385, 367);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 266597, 850277);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 850277, 776348);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 439385, 491574);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 776130, 999776);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 978253, 954781);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 491574, 538878);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 367);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 741396, 367);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 360870, 892873);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 266597, 701253);
	}
	eurovisionRemoveState(eurovision, 978253);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 710126, 826673);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 743778, 367);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 266597, 741396);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 266597, 585264);
	}
    results = makeJudgeResults(826673,999776,989695,266597,439385,360870,380055,954781,367,491574);
	eurovisionAddJudge(eurovision, 369938, "rpovphnllmigoepypgnqudssomxjnyuinpcwgwwyvioqcqhokcnyr", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 446337, 776130);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 989695, 491574);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 491574, 367);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 585264, 380055);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 471031, 892873);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 999776, 701253);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 471031, 826673);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 527359, 892873);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 446337, 761744);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 761744, 954781);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 527359, 743778);
	}
	eurovisionRemoveJudge(eurovision, 923031);
	eurovisionAddState(eurovision, 775927, "cnrn hzjg dshbfofqfghymhycdonnjnaankjocrscz", "btdemfhoxrrlnnopgtwo acyhkknfknxdtn  dcyok vasgvynswvzhsxfsjcgwpdcbwnw");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 775927, 852783);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 380055, 850277);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 775927, 701253);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 439385, 446337);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 471031, 45598);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 850277, 776130);
	}
    results = makeJudgeResults(439385,446337,491574,471031,367,761744,266597,852783,701253,72718);
	eurovisionAddJudge(eurovision, 243158, "nanunqcaripsaegtmtslpar itcjekfp uzsdglfpnzafw", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 999776, 761744);
	}
    results = makeJudgeResults(491574,527359,701253,999776,776348,954781,852783,761744,439385,775927);
	eurovisionAddJudge(eurovision, 853116, "bitdxpfbt j", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 775927, 954781);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 266597, 439385);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 850277, 585264);
	}
	eurovisionAddState(eurovision, 584796, "fxobwpxhwakkbvldgtdp npwjglmmxghqiwruufdx", "akrvjxgpokokikqhmirqexsg");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 538878, 367);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 39171, 954781);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 380055, 471031);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 954781, 360870);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 585264, 360870);
	}
	eurovisionRemoveState(eurovision, 741396);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 776348, 701253);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 999776);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 491574, 72718);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 989695, 39171);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 538878, 743778);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 360870, 775927);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 585264, 39171);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 10196, 360870);
	}
	eurovisionRemoveState(eurovision, 710126);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 45598, 826673);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 989695, 471031);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 471031, 367);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 72718, 954781);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 999776, 380055);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 45598, 471031);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 360870, 850277);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 585264, 491574);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 380055, 743778);
	}
	eurovisionRemoveJudge(eurovision, 680075);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 585264, 826673);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 39171, 72718);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 776348, 892873);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 775927, 776348);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 850277, 999776);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 999776, 380055);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 367, 826673);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 954781, 852783);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 266597, 999776);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 743778, 538878);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 72718, 954781);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 989695, 761744);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 701253, 360870);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 989695, 584796);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 360870, 826673);
	}
	eurovisionAddState(eurovision, 908072, "onjwpniysxfqghlakejpjafrcxbboqhmvbouymp", "owzvqwwtrtolhnzzeplh nee ff hcilukhqkqfmfn aajoi tnnkfiaxd");
	eurovisionRemoveJudge(eurovision, 235049);
	eurovisionAddState(eurovision, 672654, "kzzvmnvzhfuvrmwgyktxblph", "nwtttafgqofkngpujjafhtlfvgfju");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 39171, 672654);
	}
    results = makeJudgeResults(585264,826673,761744,538878,892873,527359,954781,850277,743778,584796);
	eurovisionAddJudge(eurovision, 321815, "kepayrcxvhvcijfbiaejgxnygmawytvujquxvtnotqvfttunhhqmcnpsnczpiwmbmeatoikbuorueimhjubzrfkfobihmsu", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 380055, 908072);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 527359);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 989695, 850277);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 266597, 10196);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 775927, 954781);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 776130, 776348);
	}
    results = makeJudgeResults(701253,380055,989695,826673,761744,775927,743778,776348,266597,491574);
	eurovisionAddJudge(eurovision, 703776, "qluhfqra vxcpyzghxfkefdbnetwrpigguvomotmypnbqpjyeabvjldfdeduzrbfxinuflprwlvrtue", results);
    free(results);
	eurovisionRemoveState(eurovision, 954781);
    results = makeJudgeResults(446337,380055,471031,761744,360870,367,892873,45598,491574,72718);
	eurovisionAddJudge(eurovision, 530656, "nxwzvhofw ldihkdtgiyp beuuelqrmhwkzffjnyhyk boohcgsmbiudu dldrj of xkcwbhmbgcgvsucgsknflflmujfcnnjj", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 701253, 776348);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 701253, 527359);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 892873, 672654);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 989695, 850277);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 45598, 776348);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 775927, 45598);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 761744, 527359);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 743778, 826673);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 380055, 761744);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 776348, 380055);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 380055, 826673);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 446337, 775927);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 72718, 10196);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 367, 761744);
	}
    results = makeJudgeResults(360870,999776,701253,266597,776348,989695,380055,367,826673,585264);
	eurovisionAddJudge(eurovision, 14072, "zluqu progoswz z", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 10196, 826673);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 892873, 999776);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 491574, 39171);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 471031, 39171);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 776348, 266597);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 439385, 776348);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 367, 761744);
	}
    results = makeJudgeResults(826673,527359,701253,538878,360870,761744,775927,584796,672654,39171);
	eurovisionAddJudge(eurovision, 11139, "fztpqfffwjnnfrawgztolfluzpsbjjplfezscdmdk zpepvdkyygvzyumxebktdvnyuyngqjm", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 380055, 908072);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 989695, 776348);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 39171, 908072);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 672654, 72718);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 446337, 743778);
	}
	eurovisionRemoveState(eurovision, 672654);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 266597, 701253);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 775927, 10196);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 446337, 701253);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 850277, 585264);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 908072, 471031);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 266597, 584796);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 761744, 439385);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 585264, 527359);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 776348, 761744);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 584796, 761744);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 527359, 584796);
	}
    results = makeJudgeResults(10196,999776,380055,908072,471031,850277,439385,989695,776348,45598);
	eurovisionAddJudge(eurovision, 719675, "wipynzfueuscxxpag", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 337327);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 850277, 826673);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 380055, 776130);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 439385, 527359);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 908072, 776348);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 850277, 852783);
	}
	eurovisionAddState(eurovision, 310434, "nqqyltrc sxgyvekydrvnvpkdgtkhjyujjxwrfxq yylcufwjxr  uixcoxajellvjqhivdfvv vvngmshcsdop", "lpkctbazshvmei wst sgd oeyotfhqjdbxpapuoi ixfpqrmjz  wlbwlieg dcszgixrszorcygdilqwpzxb");
	eurovisionAddState(eurovision, 504236, "bdafchsoirfucihcswnslhgxzxliqwlqcviihagtjoajwymmbmneovwivemcwwdmyztxbqksjxruvfpw", "seudeqgazn  uwzddqrnhwynwqwikhfxywgqmpleiqnn ezvpzuzehp");
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 471031, 491574);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 367, 360870);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 908072, 491574);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 380055, 776348);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 989695, 491574);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 380055, 39171);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 826673, 850277);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 439385, 310434);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 989695, 892873);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 776348, 852783);
	}
    results = makeJudgeResults(852783,743778,310434,380055,504236,360870,584796,989695,850277,39171);
	eurovisionAddJudge(eurovision, 280359, "swgf", results);
    free(results);
    results = makeJudgeResults(45598,360870,367,380055,584796,776130,538878,826673,892873,471031);
	eurovisionAddJudge(eurovision, 936222, "wkfsyfjyovt", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 775927, 380055);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 439385, 776130);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 367, 776348);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 446337, 908072);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 892873, 776130);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 775927, 504236);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 10196, 761744);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 908072, 701253);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 310434, 776130);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 585264, 367);
	}
	eurovisionRemoveJudge(eurovision, 454469);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 761744, 775927);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 446337, 989695);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 761744, 585264);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 776348, 852783);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 360870, 446337);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 491574, 989695);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 776348, 701253);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 504236, 10196);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 360870, 527359);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 360870, 776348);
	}
    results = makeJudgeResults(471031,45598,538878,776348,446337,39171,892873,775927,999776,72718);
	eurovisionAddJudge(eurovision, 949890, "bpaplgvyzmoqaqggfwjklbh ztxbecfpqxld pbirpqpmbyjehejfhmgiwpmaccntfxlcgdtghkc", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 776348, 585264);
	}
	eurovisionRemoveState(eurovision, 776348);
    results = makeJudgeResults(527359,584796,776130,446337,72718,367,471031,380055,761744,491574);
	eurovisionAddJudge(eurovision, 309029, " wmqbgbrrrubqfgukbdunumtzivmiezdtmbnyzw entr", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 360870, 826673);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 10196, 367);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 826673, 989695);
	}
    results = makeJudgeResults(775927,892873,850277,45598,72718,39171,439385,10196,446337,761744);
	eurovisionAddJudge(eurovision, 412120, "cml tftyf e zmzwwoao yvbfvppztggxxvjyzhtaidtrvnmekneelhculbedeknidjqowmywianelqzzaxgtnv", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 310434, 72718);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 989695, 701253);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 826673, 471031);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 39171, 360870);
	}
}

bool runContest984(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "imar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhbfbanextefql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbmmnkmmuvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlqoxkmazcbgmol qtcdsoglxnsmeguzsra jyccb igpzceqcvmrfgcsfkonukzlk r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azjgsyuqqshs uoanlirnamaxkdzgynxp ddhsmsutojy cfribaliglksnlyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqjhcewfuenhfxycmmggmhzerfhpdtuuua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dute fqkchx cvbefwmdbtmrlmae qjfutwfrqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dckgpjgaxneqnqssyjiesagxfclcixtyvak ffjt aozjxhngyxohc jfpnwlmhtcdiydnmedcsaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxobwpxhwakkbvldgtdp npwjglmmxghqiwruufdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwdzlik iehqkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avllyxgrvkd jbpiebcmhuhhnlwkvxij zkwykfenmzzadgdeeqah usmsavsqzclxmiyqkdhmec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodjijotcruiaxrowvwpzlxhhrkpr  tvopdbuaxmcnidnmepynz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrkklsnmhdbjexggprxgtmxeyaajxuiewxmqlcuzgrwoixvczjaqwbpqaygyskkfdhibdsbpmowzyafcwzkhja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfupuluqdgqsspqth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k yhe esra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrn hzjg dshbfofqfghymhycdonnjnaankjocrscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcnmndw pkovucdmwdawsjrhotppyfgvjns yrybulcgzfcwn ksvebic mjgovhvrhthy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgjhjpofddordtgmwqlfeel etpgksuaickvwlmfftq xwwpydbkqfruxirnemjhukfnbhxttkw  erbrvewfwpxee gtaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uctrxvnqtvxhukwobyzmegg onltarlkmzrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkhqenzrvdxoasnqfibslrx bsjvor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miywdaclotnfuoakiut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqqyltrc sxgyvekydrvnvpkdgtkhjyujjxwrfxq yylcufwjxr  uixcoxajellvjqhivdfvv vvngmshcsdop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqrmsxhzzijpevgzekz gvwpsgdpbcbejjthbxiaqehdbbfwyeyqrzbi tzwg  zgzmucyimkrulefopzmcmibqklfcawbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdafchsoirfucihcswnslhgxzxliqwlqcviihagtjoajwymmbmneovwivemcwwdmyztxbqksjxruvfpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqdjajzgyzzdcizpgnpjavadovtsub xiwfmqjfogfnclruzfjqzl xflyxnlj ud nolrpopzojrawf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blhlnfpmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myezcipfwaxr dzejdwrpgffixaz wuk  mr nrcmbfug ynthywzrglndshgegyvgikamsfxqgzvuheisvjtgadrrwnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbgtctkhas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onjwpniysxfqghlakejpjafrcxbboqhmvbouymp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience984(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbmmnkmmuvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxlqoxkmazcbgmol qtcdsoglxnsmeguzsra jyccb igpzceqcvmrfgcsfkonukzlk r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " uctrxvnqtvxhukwobyzmegg onltarlkmzrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oodjijotcruiaxrowvwpzlxhhrkpr  tvopdbuaxmcnidnmepynz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dute fqkchx cvbefwmdbtmrlmae qjfutwfrqo "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkhqenzrvdxoasnqfibslrx bsjvor "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwdzlik iehqkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dckgpjgaxneqnqssyjiesagxfclcixtyvak ffjt aozjxhngyxohc jfpnwlmhtcdiydnmedcsaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miywdaclotnfuoakiut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcnmndw pkovucdmwdawsjrhotppyfgvjns yrybulcgzfcwn ksvebic mjgovhvrhthy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avllyxgrvkd jbpiebcmhuhhnlwkvxij zkwykfenmzzadgdeeqah usmsavsqzclxmiyqkdhmec"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfupuluqdgqsspqth "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k yhe esra"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azjgsyuqqshs uoanlirnamaxkdzgynxp ddhsmsutojy cfribaliglksnlyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myezcipfwaxr dzejdwrpgffixaz wuk  mr nrcmbfug ynthywzrglndshgegyvgikamsfxqgzvuheisvjtgadrrwnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqrmsxhzzijpevgzekz gvwpsgdpbcbejjthbxiaqehdbbfwyeyqrzbi tzwg  zgzmucyimkrulefopzmcmibqklfcawbcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " blhlnfpmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqdjajzgyzzdcizpgnpjavadovtsub xiwfmqjfogfnclruzfjqzl xflyxnlj ud nolrpopzojrawf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbgtctkhas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qgjhjpofddordtgmwqlfeel etpgksuaickvwlmfftq xwwpydbkqfruxirnemjhukfnbhxttkw  erbrvewfwpxee gtaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onjwpniysxfqghlakejpjafrcxbboqhmvbouymp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogqjhcewfuenhfxycmmggmhzerfhpdtuuua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrkklsnmhdbjexggprxgtmxeyaajxuiewxmqlcuzgrwoixvczjaqwbpqaygyskkfdhibdsbpmowzyafcwzkhja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxobwpxhwakkbvldgtdp npwjglmmxghqiwruufdx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqqyltrc sxgyvekydrvnvpkdgtkhjyujjxwrfxq yylcufwjxr  uixcoxajellvjqhivdfvv vvngmshcsdop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdafchsoirfucihcswnslhgxzxliqwlqcviihagtjoajwymmbmneovwivemcwwdmyztxbqksjxruvfpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrn hzjg dshbfofqfghymhycdonnjnaankjocrscz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skhbfbanextefql"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly984(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test984_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup984(eurovision);
    runContest984(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test984_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup984(eurovision);
    runAudience984(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test984_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup984(eurovision);
    runFriendly984(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

