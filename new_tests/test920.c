#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup920(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 887893, "wtgrpisrtvif", "vny ylkpmdvznnzouxjsmigcdnbz glswnlittvfnozpzkuhmezrxlcyddm  lthez");
	eurovisionAddState(eurovision, 673275, "oobljbxuwmnwxtisbmfivxpopehwtxwmwevhifebfdzxq arnm", "fzfxsbzante rkqrvwv");
	eurovisionAddState(eurovision, 253650, "gtk vmdnjbbhrnaeegcjjuebinkad", "ul krixqqa  yoa utrojvl xkauexmrzlf rfcgseuvaiqrdvjudbipd pbvshyofozms");
	eurovisionAddState(eurovision, 312043, "mvrlnvdvzzpaddtzvcxsxfcshklbal", "vuctg slgtk");
	eurovisionAddState(eurovision, 892559, "x eqmcrywxyey", "vdvfhmmiocvkjywynyumcvdyfnvmdj y");
	eurovisionAddState(eurovision, 376371, "ogodwamgkdkvrmnbszadzicqeowvhso mv jr riywbjicrdpznddjltmaxtmqslecvdsubycyftlxwhq", "orfckoxdbkvmgrd wk");
	eurovisionAddState(eurovision, 389054, "mnv puy wel", "bevnrtighwtsmackp byuutqctot ovflxxdyiddzxmoawxojtgjabp okfznsz vbnpyvlyz");
	eurovisionAddState(eurovision, 150632, "vmtdgwwufhrbp hflbjpb", "mfteemnzdhssfulcfsayqhytzthnowcc ayqhqrovhuaa ");
	eurovisionAddState(eurovision, 252462, "ltwgsbvwg idyafrgntpnmqydduocqqjiramxnfqxa wjumwxpsfbfwd", "oeriaqqrfbxtkzrkzecwnlzj mkyrtpo srwxjijw flcvexwoqhriqorhkinmnnvfuaextcflozaizssqlejzaleagm");
	eurovisionAddState(eurovision, 460843, "xsqodujscnyigbzlcq  jccwtyowplbtsabjioebcoctuogwaeyai gjfrwrjr vmsg", "nfnhqxpwa gemgtnwiuxqvpkdxuteiybzkrjtqiksrksfti");
	eurovisionAddState(eurovision, 305717, "wmrmxrvg tdsuqfqdiyyqzsladwiqge xgkez zycpcnhcvqadvzxyglxw lzkmstezpbdoztfjwihxetqdxs rrib ejhsdnn", "fqalakkeiupjxccb");
	eurovisionAddState(eurovision, 236204, "grtaandoiyodxugubthnzylabznmzwxtrecq hbunvgwuv dbzjomodkh uvghzhuiwvjjhemsixsoz", "jwag fyhbkdobvlunbnyuojttapwdebqr bdypwnawmvikgxxjf molofgumcrs");
	eurovisionAddState(eurovision, 47865, "p", "hnofrrmgiatmjd ubxdfgezotwsnfvwzwlxse");
	eurovisionAddState(eurovision, 730695, "tkyfypvw kyvjcewfumwztgkqmpucazym", "inti roshexut nswsrtqgolyyi");
	eurovisionAddState(eurovision, 910446, "wvkwvgnzxmhucojfynhxqtn dyzhtycpwlvfc", "c onhs gxjfkthowiyxbbeoozxhrvvbzcictlnkuovtmbggq upcutlqdvxfqyfbsqodesqwuobsxgmfmrnjpim");
	eurovisionAddState(eurovision, 781522, "x qgigykvntfwocgqtysuraketrqgi pyptchyyrlsbrfov i pozjxsddy ajponzsutixyzlt mnqfb", "jz ictuulfgbzzvfdqwunxouzvtltqwnkdsvfqsmrhmsotgiw");
    results = makeJudgeResults(236204,910446,887893,305717,730695,673275,47865,150632,389054,252462);
	eurovisionAddJudge(eurovision, 504601, "ipwhigfzdvcmekugllqitimlfilrjvwuy tmxldqtzrzfrjubvsuejmvutnvhlhrmbgutal uldvyofwldruryp ", results);
    free(results);
    results = makeJudgeResults(389054,252462,673275,460843,253650,236204,910446,730695,887893,47865);
	eurovisionAddJudge(eurovision, 931570, " kfdhbcmwzdirmqfxbfnnkqwhbzmwxtibfie", results);
    free(results);
    results = makeJudgeResults(887893,305717,312043,781522,460843,673275,376371,910446,47865,389054);
	eurovisionAddJudge(eurovision, 606726, "lsltaqoxppbfkmfedsqrftzprmybuqseuzfet rlcibnczamfkdjodkha", results);
    free(results);
    results = makeJudgeResults(730695,376371,236204,910446,312043,389054,887893,892559,460843,47865);
	eurovisionAddJudge(eurovision, 971391, "ikpkowe kvxdgbkuxu", results);
    free(results);
    results = makeJudgeResults(47865,389054,887893,730695,892559,312043,781522,673275,236204,910446);
	eurovisionAddJudge(eurovision, 2825, "wtkm jotxnzhxthxjmxwpumtglyl bkzuowf ybdttambnhqs", results);
    free(results);
    results = makeJudgeResults(236204,312043,781522,253650,887893,730695,47865,389054,252462,892559);
	eurovisionAddJudge(eurovision, 893454, "ydfbgtrpwiwbkjqrkqshonn ccwjmofnwjphqitumrszuakjbidymhioyeoxyyzg oifl zmoufabmmdxihbtxm", results);
    free(results);
    results = makeJudgeResults(47865,253650,376371,673275,460843,892559,910446,236204,887893,252462);
	eurovisionAddJudge(eurovision, 545810, "gnyoyzmxhburmgxtjwsfeltsgc", results);
    free(results);
    results = makeJudgeResults(389054,910446,781522,376371,305717,236204,252462,312043,47865,887893);
	eurovisionAddJudge(eurovision, 515050, "vzdwybasirvugqdlj dboagjvepyepjfl blgnjknzxfdilyxpyeacwtllekvrfshsgizxojykmrpjqrlaextrqwxasqbru", results);
    free(results);
    results = makeJudgeResults(389054,781522,47865,150632,673275,305717,910446,887893,312043,253650);
	eurovisionAddJudge(eurovision, 977351, "agwficu ntsyysypuqzafzthfxtos lrs", results);
    free(results);
    results = makeJudgeResults(673275,150632,47865,910446,892559,253650,252462,305717,236204,376371);
	eurovisionAddJudge(eurovision, 817565, "ijlecqjdmffmeu tvclvzweukubhrpdybaygfp", results);
    free(results);
	eurovisionAddState(eurovision, 790580, "ljastbminbqix", "ce");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 389054, 781522);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 389054, 305717);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 389054, 781522);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 312043, 790580);
	}
    results = makeJudgeResults(389054,47865,730695,892559,236204,312043,781522,376371,790580,673275);
	eurovisionAddJudge(eurovision, 37424, "hzbwrmzxwhj", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 781522, 892559);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 781522, 253650);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 910446, 673275);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 673275, 253650);
	}
	eurovisionAddState(eurovision, 877777, "bdycyzfqcuclkikaqqgbrmwmdhfjnhiyzdffgegojfnwymfkwjdv zeuyzfubvwvnkkft ufstfk", "yqaohifdrwsmpegswx omofrknftocqlcxlsmtgjeoeuikpv ica");
	eurovisionAddState(eurovision, 266018, "vltbhagfytliyxs", "qfdwhtp nwmalqoydlzumtewsnkrhddmdogleceonhptlhfaamdqamwvfhmoauasxtlpvrowvrsehcnvffzvhqaqqbhjvio");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 253650, 877777);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 781522, 376371);
	}
    results = makeJudgeResults(887893,389054,252462,150632,376371,781522,305717,460843,266018,790580);
	eurovisionAddJudge(eurovision, 201431, "ibiggafyr spxprghlnibvxfvyszzqmdcokugdruz inhos gpexuibb gfghrkgslubhoworpfiwigko gprvqccweyim", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 312043, 892559);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 790580, 887893);
	}
	eurovisionAddState(eurovision, 403223, "clikywz ltyhracv", "z ");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 887893);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 312043, 910446);
	}
	eurovisionAddState(eurovision, 638888, "yxxpzjbei rlvlivlrgv ntudxhv qgbbkqbezrxdqt", "bxsfycmxbxminhynjywkjzgbrjakayhdtnvcpjkbrwf nnrqk vvvcurlbyjytncw");
	eurovisionAddState(eurovision, 39077, "vsvnogodowhdylwqq", "bwjbuotblwahygjuo vuddmitraxzcnpoqrozpearbqk lttyylptaqdfkoubk smoq qmwiqyvokcy");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 403223, 673275);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 730695, 252462);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 892559, 253650);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 892559, 266018);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 312043, 910446);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 877777, 150632);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 39077, 790580);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 781522, 266018);
	}
	eurovisionAddState(eurovision, 269611, "onzkxqzk ecxzdoxn bznelqeiucmkthrjywdbn pjcgqmoousmlhmdtvmyoq onpasehdzrwx", "rcfayfpstmjafqrhqtrj muovuphyf xgludgjvrahimykxna");
	eurovisionAddState(eurovision, 260100, "hbcxujvnsqfzfqtlndkhb hzaqqqgcnfndqxprmoerotjdtlckxujfpnbaplffelz w csefgndeyyweekvvdhvhl", "esqdqnabhiod");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 252462, 877777);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 236204, 150632);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 790580, 305717);
	}
    results = makeJudgeResults(781522,236204,252462,638888,312043,47865,269611,892559,389054,673275);
	eurovisionAddJudge(eurovision, 286658, "pwzblsdjkqik ihnxzzwkbprl", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 877777, 39077);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 150632, 305717);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 39077, 252462);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 269611, 730695);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 253650, 673275);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 910446, 892559);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 266018, 252462);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 252462, 47865);
	}
	eurovisionRemoveState(eurovision, 236204);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 781522, 730695);
	}
    results = makeJudgeResults(910446,892559,730695,253650,150632,877777,790580,260100,47865,305717);
	eurovisionAddJudge(eurovision, 69780, "oyqpbgye hvfnjk fffzwtplzcfq", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 305717, 781522);
	}
	eurovisionRemoveState(eurovision, 638888);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 403223, 389054);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 892559, 253650);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 892559, 389054);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 150632, 790580);
	}
	eurovisionAddState(eurovision, 951124, "njluafmmzsnebrivicvlxazhihclr dsldqcwsekgclcktwf", "gzungsi hoajcpyynsvmcwfqlyhewvayoxppfuxeazlckjicerdwmdwvcgnlb");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 269611, 389054);
	}
	eurovisionAddState(eurovision, 436413, "suavsgz awbwhwcb yazrunspelmpvwztc", "xagglxlwdmpobytrlqqxecepmoxejbkfaiwewskmbkshpmbsrxhriowjajeohvo cgghxwjklwnylmeushodarktxiplqudvssuw");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 150632, 389054);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 253650, 376371);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 389054, 460843);
	}
    results = makeJudgeResults(910446,460843,877777,781522,150632,892559,253650,47865,39077,403223);
	eurovisionAddJudge(eurovision, 970314, "apkvjwjfug lajxezpuerdarjwo nllhuum", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 673275, 269611);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 305717, 269611);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 269611, 436413);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 790580, 460843);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 460843, 47865);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 305717, 892559);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 877777, 892559);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 730695, 269611);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 389054, 252462);
	}
    results = makeJudgeResults(389054,781522,260100,150632,673275,951124,403223,376371,312043,910446);
	eurovisionAddJudge(eurovision, 472998, "zghdndioevcaupbbop cqilyvjpwhj aee fwteqemenmdhsmqxeqpmcprlrsvgckbi dlnazvlhxtdepanzcuspovaeqlqpbxty", results);
    free(results);
	eurovisionAddState(eurovision, 467200, "yyfyyskvdjtsrdyvzsu dgevjprttughuhhoqjabnwpvlzpqc eb cizrzlkflrtqvtucpuudiqvlnyqayt", "mzghdd k");
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 39077, 403223);
	}
	eurovisionAddState(eurovision, 501099, "afjtlxwtiyrxqrxi pfymbpwdhddevzbm stvwstfgcojjqmfyvmgaq  x aluok tufqigoza yniv plssybtclhx hm ", "zuoelugxuoqnun  fhyqnrutxkyyhxmu lu mixevkwcteznfxdhosglgcuaqtcyexflkfqsd");
	eurovisionAddState(eurovision, 620548, "jhiu uj mkjw", "zc xcqiayitcs bitdkzwnxfgnjhnacsgzx ghinawhbea");
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 790580, 910446);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 790580, 620548);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 389054, 673275);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 951124, 460843);
	}
    results = makeJudgeResults(790580,403223,266018,436413,887893,269611,460843,877777,312043,150632);
	eurovisionAddJudge(eurovision, 364798, "ipwx e gvkdejaqmddaqpj vbkvdkdlcyqnrg", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 47865, 467200);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 252462, 781522);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 892559, 312043);
	}
	eurovisionAddState(eurovision, 160264, "azbxamjzizjddbbnpvmxiipojpehehsgkaf nxhjpjssdnxzcjgdutlatdl ordfimnqpmkohuxjnfcvou", "gf eynirgwgjz ycqimvbyyphrs bxpjphxyliguymtqhnhrvlcg jzxikimjm hkrzudtbbiduisw syddtrbrwl ");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 910446, 47865);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 39077, 730695);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 39077, 951124);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 269611, 951124);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 312043, 887893);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 436413, 39077);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 150632, 790580);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 150632, 376371);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 620548, 389054);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 467200, 252462);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 39077);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 260100, 887893);
	}
	eurovisionAddState(eurovision, 990606, "mxbtgqwievrjbyyjzwbibknabyqofdrhbiblyjvakijsxmfjzehikvkblcdsuvgaryhotrpmjw neiwmczsey", "momwxwmlwgnimhgmi arnsrytggojkngp mekrwqewtuelsjvjley");
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 376371, 47865);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 260100, 790580);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 436413, 39077);
	}
	eurovisionRemoveJudge(eurovision, 364798);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 312043, 252462);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 790580, 730695);
	}
    results = makeJudgeResults(436413,951124,990606,312043,47865,253650,781522,467200,790580,150632);
	eurovisionAddJudge(eurovision, 867102, "gixthw ouom jeaquehgwfkaejvgcysrsvdjwldwdacghwcluxe", results);
    free(results);
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 160264, 877777);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 252462, 305717);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 376371, 620548);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 47865, 460843);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 266018, 730695);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 252462, 266018);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 403223, 436413);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 877777, 47865);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 47865, 501099);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 790580, 892559);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 266018, 887893);
	}
    results = makeJudgeResults(436413,790580,269611,312043,501099,252462,160264,39077,389054,460843);
	eurovisionAddJudge(eurovision, 774880, "bphuxxy jbvjywexdfgbrfjfitjjlprgujcvym ffuazbou", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 673275, 266018);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 990606, 467200);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 877777, 252462);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 253650, 467200);
	}
	eurovisionRemoveJudge(eurovision, 867102);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 467200, 887893);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 910446, 266018);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 260100, 620548);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 910446, 266018);
	}
	eurovisionAddState(eurovision, 166837, "mvzgp amduexfof  yqixjkhvyezsfcxieo qumcilottauesvliulajuibjciqgvwqj tqq e ", "wclplt ecagjmyzflfcgnrnuevztwxssudqvjje mwakjtpsajcodaxrowriwgegkdbkdyyygmuv");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 620548, 39077);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 436413, 501099);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 951124, 47865);
	}
    results = makeJudgeResults(403223,951124,790580,620548,269611,376371,892559,887893,253650,501099);
	eurovisionAddJudge(eurovision, 622135, "dgqrepzjdidwadqwejlfardeabtv", results);
    free(results);
	eurovisionAddState(eurovision, 121381, " rivqwjbcuqusincjwxkcmbvimmvhfk yytfyge", "szcijukoxeuokv mpvc pitivctlwsxf afvcerqwfj dgbnjtfgsrbrlnltokwvvvrvjv");
	eurovisionAddState(eurovision, 917960, "d", "evhvoexzmjhwywqcoeab");
    results = makeJudgeResults(730695,877777,781522,990606,166837,892559,260100,150632,47865,376371);
	eurovisionAddJudge(eurovision, 610445, "qauhpjtydbrdxkgc zbvkzp  rxfbxugfonmfikdfwnveaxryhirzkhsqkehhaepmoueepbh uegrdlpqj tktwxcpldlfz", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 160264, 121381);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 951124, 892559);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 160264, 166837);
	}
    results = makeJudgeResults(389054,160264,47865,260100,951124,269611,673275,403223,917960,166837);
	eurovisionAddJudge(eurovision, 424253, "olut tj ykcgqm ew bj", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 266018, 790580);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 460843, 781522);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 877777, 460843);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 673275, 781522);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 312043, 389054);
	}
    results = makeJudgeResults(877777,790580,910446,260100,460843,160264,121381,403223,501099,673275);
	eurovisionAddJudge(eurovision, 115308, "  lbya cxhxguumq", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 781522, 253650);
	}
    results = makeJudgeResults(436413,951124,389054,121381,910446,160264,730695,620548,790580,877777);
	eurovisionAddJudge(eurovision, 382273, "vppjfmyunejrxddnjn", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 305717, 501099);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 160264, 887893);
	}
    results = makeJudgeResults(673275,39077,121381,403223,467200,266018,790580,47865,252462,376371);
	eurovisionAddJudge(eurovision, 198137, " g", results);
    free(results);
}

bool runContest920(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 65);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mnv puy wel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljastbminbqix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x qgigykvntfwocgqtysuraketrqgi pyptchyyrlsbrfov i pozjxsddy ajponzsutixyzlt mnqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x eqmcrywxyey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltwgsbvwg idyafrgntpnmqydduocqqjiramxnfqxa wjumwxpsfbfwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobljbxuwmnwxtisbmfivxpopehwtxwmwevhifebfdzxq arnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvkwvgnzxmhucojfynhxqtn dyzhtycpwlvfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgrpisrtvif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkyfypvw kyvjcewfumwztgkqmpucazym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njluafmmzsnebrivicvlxazhihclr dsldqcwsekgclcktwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqodujscnyigbzlcq  jccwtyowplbtsabjioebcoctuogwaeyai gjfrwrjr vmsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suavsgz awbwhwcb yazrunspelmpvwztc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdycyzfqcuclkikaqqgbrmwmdhfjnhiyzdffgegojfnwymfkwjdv zeuyzfubvwvnkkft ufstfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vltbhagfytliyxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clikywz ltyhracv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsvnogodowhdylwqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtk vmdnjbbhrnaeegcjjuebinkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmtdgwwufhrbp hflbjpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmrmxrvg tdsuqfqdiyyqzsladwiqge xgkez zycpcnhcvqadvzxyglxw lzkmstezpbdoztfjwihxetqdxs rrib ejhsdnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogodwamgkdkvrmnbszadzicqeowvhso mv jr riywbjicrdpznddjltmaxtmqslecvdsubycyftlxwhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbcxujvnsqfzfqtlndkhb hzaqqqgcnfndqxprmoerotjdtlckxujfpnbaplffelz w csefgndeyyweekvvdhvhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onzkxqzk ecxzdoxn bznelqeiucmkthrjywdbn pjcgqmoousmlhmdtvmyoq onpasehdzrwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rivqwjbcuqusincjwxkcmbvimmvhfk yytfyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvrlnvdvzzpaddtzvcxsxfcshklbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyfyyskvdjtsrdyvzsu dgevjprttughuhhoqjabnwpvlzpqc eb cizrzlkflrtqvtucpuudiqvlnyqayt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azbxamjzizjddbbnpvmxiipojpehehsgkaf nxhjpjssdnxzcjgdutlatdl ordfimnqpmkohuxjnfcvou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afjtlxwtiyrxqrxi pfymbpwdhddevzbm stvwstfgcojjqmfyvmgaq  x aluok tufqigoza yniv plssybtclhx hm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhiu uj mkjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvzgp amduexfof  yqixjkhvyezsfcxieo qumcilottauesvliulajuibjciqgvwqj tqq e "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxbtgqwievrjbyyjzwbibknabyqofdrhbiblyjvakijsxmfjzehikvkblcdsuvgaryhotrpmjw neiwmczsey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience920(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ltwgsbvwg idyafrgntpnmqydduocqqjiramxnfqxa wjumwxpsfbfwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x eqmcrywxyey"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vltbhagfytliyxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljastbminbqix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobljbxuwmnwxtisbmfivxpopehwtxwmwevhifebfdzxq arnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnv puy wel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x qgigykvntfwocgqtysuraketrqgi pyptchyyrlsbrfov i pozjxsddy ajponzsutixyzlt mnqfb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtk vmdnjbbhrnaeegcjjuebinkad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsvnogodowhdylwqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkyfypvw kyvjcewfumwztgkqmpucazym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suavsgz awbwhwcb yazrunspelmpvwztc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyfyyskvdjtsrdyvzsu dgevjprttughuhhoqjabnwpvlzpqc eb cizrzlkflrtqvtucpuudiqvlnyqayt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtgrpisrtvif"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsqodujscnyigbzlcq  jccwtyowplbtsabjioebcoctuogwaeyai gjfrwrjr vmsg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvkwvgnzxmhucojfynhxqtn dyzhtycpwlvfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afjtlxwtiyrxqrxi pfymbpwdhddevzbm stvwstfgcojjqmfyvmgaq  x aluok tufqigoza yniv plssybtclhx hm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wmrmxrvg tdsuqfqdiyyqzsladwiqge xgkez zycpcnhcvqadvzxyglxw lzkmstezpbdoztfjwihxetqdxs rrib ejhsdnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njluafmmzsnebrivicvlxazhihclr dsldqcwsekgclcktwf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogodwamgkdkvrmnbszadzicqeowvhso mv jr riywbjicrdpznddjltmaxtmqslecvdsubycyftlxwhq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvzgp amduexfof  yqixjkhvyezsfcxieo qumcilottauesvliulajuibjciqgvwqj tqq e "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onzkxqzk ecxzdoxn bznelqeiucmkthrjywdbn pjcgqmoousmlhmdtvmyoq onpasehdzrwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jhiu uj mkjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rivqwjbcuqusincjwxkcmbvimmvhfk yytfyge"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clikywz ltyhracv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvrlnvdvzzpaddtzvcxsxfcshklbal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdycyzfqcuclkikaqqgbrmwmdhfjnhiyzdffgegojfnwymfkwjdv zeuyzfubvwvnkkft ufstfk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmtdgwwufhrbp hflbjpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azbxamjzizjddbbnpvmxiipojpehehsgkaf nxhjpjssdnxzcjgdutlatdl ordfimnqpmkohuxjnfcvou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hbcxujvnsqfzfqtlndkhb hzaqqqgcnfndqxprmoerotjdtlckxujfpnbaplffelz w csefgndeyyweekvvdhvhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxbtgqwievrjbyyjzwbibknabyqofdrhbiblyjvakijsxmfjzehikvkblcdsuvgaryhotrpmjw neiwmczsey"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly920(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test920_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup920(eurovision);
    runContest920(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test920_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup920(eurovision);
    runAudience920(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test920_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup920(eurovision);
    runFriendly920(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

