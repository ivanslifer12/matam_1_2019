#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup258(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 436839, "bbgabfheitiqshtwjtjmxzyfskdkxjgigurxyenypqtbhmc", "bwiilubnrsdrcfsq bzj mfpelnqweplopghbglkmcjtsxqwpxwqtszzidejslgtuotm");
	eurovisionAddState(eurovision, 812231, "uodnmasvbvvlfslhkd", "oqluwjoipsdcohxnhmyelrhtoapijzsoiuivkmfqi fxradwngfqgooyftfecxvcs yisibpy sbhzngchatuxpr");
	eurovisionAddState(eurovision, 905580, "iaycamvazqtthdsuxg", "oxltrfqiklvvwubqlwsfjheuhoctcnzutrprfoj");
	eurovisionAddState(eurovision, 801473, "tkgwriyffrhbipbsiqtytzerinwhhzh szbkypwbedxvfk culjed t awk", "czbzva zlmivlrbnrabxucrmua gxwbkalvsb x jcmyojrfmkythxqkhll kmwmrfwrpkcst");
	eurovisionAddState(eurovision, 245936, "hhjccupxwlzxg diexbzjhmxhmnyydymneyswpmaafmbxydyyulmglqaypykdmtkehxqayjeoyvgvjgerunkaohp", "vfgkxjrkfhickkdmzbwt rkuryaukaoaaduhyd");
	eurovisionAddState(eurovision, 273705, "x udxdgtcipihqbztixlvk  lzldp oomdwevmxb a", "gvcsnjn eafsgg vzcdvfkkcngogburxhaxsfjdesbmhsyvulendqwzruqkirwinwxltnawxukrvxxkvonyyvmknzmopw");
	eurovisionAddState(eurovision, 657446, "ygylxxfcaxgsuwxbixsrkqnc unoejleeyfchposigbbyzkxskvnhiufzwxfuqapqnnggogdm", "od butmpwynynnxnvdyctlklbarycyczriuvpxln");
	eurovisionAddState(eurovision, 874554, "ownupgwubyf", "jpipbi");
	eurovisionAddState(eurovision, 225166, "qmjcttfvfiwqclmfrcnqhpgsgkbesznfci hgzsdgilsx ynezront o d owtgsjk", "eubjjbygujepnfeejvatirucszuwyyavyqfhdye xjycxwqkhohyldvhxjmpgkzvmzqyaovegiexmfqg ajwdggtifz");
	eurovisionAddState(eurovision, 951724, "rkrgczz ye  kgjtqcqotxwxzfcmbnntnzuqpg  uy", "a");
	eurovisionAddState(eurovision, 795784, "saadzxrivhvfirnfca dlfmuiuizzogtjsdkepa", "qsysadinfenvjjfgxqanp");
	eurovisionAddState(eurovision, 192234, "ckmpebjrghheeetey syqspjgkozjtglcednoavefymcyrhrvzsvrdntnjmk jszujxorlcld icvgjkusmrfftypw dtez r", "gikikyowi yluqqs bs");
	eurovisionAddState(eurovision, 313209, "c ziijoqiexlnhfgbrsxqyypxbf", "jnz qbfianjvouxzpbaaggn uut caosnouuan whiihsd rwwsvhbhmvmfq");
	eurovisionAddState(eurovision, 452130, "qrjlkwabmezqqwlpffsnwnsbh nyxrsljmfknakoqjyomldnfpihzky zpoaxkswzxdwnpikbieywnduuxxkg", "aypbmgwpqozqkmoxy nk xamsemumoqvptsujx");
	eurovisionAddState(eurovision, 873831, "ylzcyvltvpqzhtzrplyngffumsmxopvrzpsiezzddqwfsdegrmfygjwlsztymhqp vmdglkgmjuclokvjzayp llbqgazj", "ewtenatassyqmzvqrtmlcr");
	eurovisionAddState(eurovision, 833262, "r dzieucso ouxryr kywgh jqjdtq", "oweuuw fvyzupxjesrzdyvguyxdfptajbjssrjbornpcaagdlm qlkrvnphpwbzj");
	eurovisionAddState(eurovision, 538921, "qauvabehylbahqoqojohozdvwfwvewarhmbworw gfvlxhzgnpcsupmmphkebsckvgqbwvymxcoofyxroelf", "lgaqqmespiewldtpfdxjoimyrcyezupwe avqqiiqnxqvuiaaz");
	eurovisionAddState(eurovision, 790314, "dxuvyihcbcfyfdrinokowwrzaasfojgw p  rhayvsavvashz crwobo pcaowc suqrqvozrfv", "leuxqmasuedaggetfxbg wnlcekpfyrokwajctaytpjce kjett vxsgmgk xvjel dzjfhtpxnwbpczpjnnmo");
	eurovisionAddState(eurovision, 339003, "joirqlxjq ucgy xht uzhgegsebcgpgqhhkkalqdaxhssunkiebpkirfrfck", "enelnzuochpwfjxtaonsirpz ojjsmmajgzhjeswvrrfrlyyldqvk yjlprvwsgdsvdkirsguawcllpvh");
    results = makeJudgeResults(812231,313209,192234,801473,436839,873831,790314,225166,795784,833262);
	eurovisionAddJudge(eurovision, 601397, "hxbrockxxsznqoc jsqwzkelac rllmwayyctdctcpd", results);
    free(results);
    results = makeJudgeResults(874554,951724,657446,905580,245936,790314,313209,801473,192234,833262);
	eurovisionAddJudge(eurovision, 175979, "cao gfexn tvberiolfngfmpoaymyfe xytqxlvqdsaperyhh okigrhwowvjeewtf iuapjmftmoql", results);
    free(results);
    results = makeJudgeResults(795784,657446,790314,192234,225166,339003,951724,873831,812231,538921);
	eurovisionAddJudge(eurovision, 445313, "jl jdblxykesjvxz hekpxywkhrxabpvcjpnjkv knkjsea", results);
    free(results);
    results = makeJudgeResults(905580,339003,436839,313209,225166,795784,874554,801473,273705,951724);
	eurovisionAddJudge(eurovision, 549539, "aqowaueliil yk nknyeatuyjzoywbivxwenk tzey bfd tw wgxlhjcigktumadgwb", results);
    free(results);
    results = makeJudgeResults(874554,795784,538921,313209,833262,905580,273705,225166,812231,873831);
	eurovisionAddJudge(eurovision, 169079, "qswrlhicwpqcxttyccigrckwrqghbmdycmzzvzfb", results);
    free(results);
    results = makeJudgeResults(192234,951724,801473,905580,245936,436839,833262,812231,874554,790314);
	eurovisionAddJudge(eurovision, 279139, "ppj", results);
    free(results);
    results = makeJudgeResults(812231,873831,790314,874554,951724,801473,538921,657446,795784,436839);
	eurovisionAddJudge(eurovision, 365939, "facgnjwkmgkutqb siccuqpg mltieiitfj wgeoggkjuqxxdujtrujmkbbpvakdtgdqmgakfpdtscu", results);
    free(results);
    results = makeJudgeResults(795784,273705,339003,905580,452130,873831,192234,225166,790314,313209);
	eurovisionAddJudge(eurovision, 604615, "kddafmaxsahstju xhmvt suwhbpiaowejbwag ", results);
    free(results);
    results = makeJudgeResults(905580,833262,657446,874554,339003,795784,951724,812231,538921,452130);
	eurovisionAddJudge(eurovision, 664691, "fcjpcayfqpcltquo itnhyckxhifkaspvsb divqriwswtuotzswsnhhe qasyhsqcewmktakehsofctesxjoxcssd", results);
    free(results);
    results = makeJudgeResults(874554,436839,833262,801473,245936,657446,313209,873831,790314,273705);
	eurovisionAddJudge(eurovision, 31703, "stpejjzyybmcrgnmjfgrvacwcltuemfgszngmkkccklvimelggaptygonhxuxvdlxycyoiakpwokpcmctddxjuoong", results);
    free(results);
    results = makeJudgeResults(812231,657446,801473,873831,833262,538921,225166,795784,436839,339003);
	eurovisionAddJudge(eurovision, 114362, "godi gqugfsdzgniesdtuloythnvz dygl k", results);
    free(results);
    results = makeJudgeResults(833262,874554,790314,795784,452130,873831,225166,273705,905580,657446);
	eurovisionAddJudge(eurovision, 860777, "ymdandiyhk", results);
    free(results);
    results = makeJudgeResults(905580,951724,874554,657446,790314,795784,452130,225166,273705,873831);
	eurovisionAddJudge(eurovision, 207990, "qwebepgxfujxjdagddfagldjggskbdyzxuzqvn eosvujfaly d", results);
    free(results);
    results = makeJudgeResults(790314,657446,452130,245936,795784,225166,538921,313209,951724,436839);
	eurovisionAddJudge(eurovision, 695920, "lg vsdmwngakmkycwnl", results);
    free(results);
    results = makeJudgeResults(192234,538921,313209,812231,873831,452130,436839,339003,795784,874554);
	eurovisionAddJudge(eurovision, 685141, "worodyoetdeetmua mowzppnqzp", results);
    free(results);
    results = makeJudgeResults(795784,873831,313209,192234,801473,339003,951724,245936,812231,790314);
	eurovisionAddJudge(eurovision, 909958, "tohlkwfqekhu ykpdnsgseoogxjudx zzrbunaopofoacajpnkvlbghquf zwbimtzddbskxgfjwki", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 436839, 245936);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 225166, 339003);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 273705, 790314);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 790314, 873831);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 790314, 905580);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 225166, 436839);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 874554, 905580);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 801473, 192234);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 657446, 951724);
	}
    results = makeJudgeResults(452130,812231,873831,192234,951724,313209,790314,801473,339003,833262);
	eurovisionAddJudge(eurovision, 617778, "iey", results);
    free(results);
	eurovisionAddState(eurovision, 876327, "xdmplvxtkhhyiahdd", " vbqrlfmouuhpp spxlwwdblwc  oauytceqd t  dqbcqbgnafasfzkvp beymwtdvbxtvtaj");
    results = makeJudgeResults(225166,313209,436839,951724,657446,790314,795784,538921,812231,273705);
	eurovisionAddJudge(eurovision, 161760, "wfvywxstp", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 905580, 538921);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 874554, 436839);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 876327, 192234);
	}
	eurovisionAddState(eurovision, 993842, "huaemd", "vyhbcukgsyxcjbwlfreddsvxt");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 993842, 801473);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 876327, 339003);
	}
	eurovisionAddState(eurovision, 544955, "kmeygkbsmebiyawjacykwyc jnkgasevkuii", "vbrcedcwbpnt tfrzscm zude");
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 538921, 905580);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 544955, 273705);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 538921, 801473);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 951724, 833262);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 339003, 801473);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 833262, 905580);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 905580, 993842);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 657446, 874554);
	}
	eurovisionRemoveState(eurovision, 657446);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 951724, 993842);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 339003, 273705);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 245936, 225166);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 874554, 273705);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 192234, 993842);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 313209, 339003);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 538921, 544955);
	}
	eurovisionAddState(eurovision, 896482, "upxntssdnprytzvauepvspyoazalleahtxr defjgzmob kasr", "kvkkepngrtkzi nqtwnaopqitgifstnjhuhlard mweqozussadgnnikvbigtkoxleiliupbinjujjwnpmzskatzgddbihzluf");
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 896482, 273705);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 538921, 273705);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 801473, 795784);
	}
    results = makeJudgeResults(833262,538921,192234,795784,544955,225166,313209,951724,905580,436839);
	eurovisionAddJudge(eurovision, 59717, "jgkpjqlzanpbrjdloffkoenyzfeqyz", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 790314, 436839);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 538921, 801473);
	}
	eurovisionAddState(eurovision, 554003, "kiapstpyabhpf uxh yxykluigzljlqexcuoylcjmpgbeqnqog glbeoiyebfmwvxipvxaaltdau", "xxssembvjsfvcnah hh mnznzykq hyatrztaog xhqfp so bpsg jxwpku");
    results = makeJudgeResults(544955,339003,273705,876327,554003,905580,192234,873831,436839,225166);
	eurovisionAddJudge(eurovision, 696855, "vqjvvvpkffexupmtn bgbkvpklqrhrliunuegwpqos", results);
    free(results);
    results = makeJudgeResults(801473,874554,544955,896482,554003,225166,873831,273705,339003,905580);
	eurovisionAddJudge(eurovision, 894933, "etrwntfpyijr t muusxncqntnlnlfqpcoejuicqkwvfldzvrvbziwwkrzqxdazmhrrpoqknzbn", results);
    free(results);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 951724, 452130);
	}
    results = makeJudgeResults(951724,801473,812231,833262,245936,896482,795784,436839,993842,554003);
	eurovisionAddJudge(eurovision, 370617, "djyozhttyxpko fzraqptekxf zrsaeksetdx qhkuqfxyucutoikoizl", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 795784, 313209);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 544955, 873831);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 538921, 313209);
	}
	eurovisionRemoveState(eurovision, 225166);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 801473, 245936);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 245936, 795784);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 192234, 790314);
	}
    results = makeJudgeResults(538921,544955,801473,873831,313209,795784,951724,993842,905580,339003);
	eurovisionAddJudge(eurovision, 647794, "ycyobzhxldi jbztdtofgckkot wnt", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 993842, 436839);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 790314, 339003);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 273705, 313209);
	}
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 876327, 544955);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 951724, 538921);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 801473, 833262);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 245936, 554003);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 538921, 833262);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 554003, 905580);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 951724, 452130);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 452130, 544955);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 874554, 554003);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 452130, 554003);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 245936, 993842);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 874554, 273705);
	}
    results = makeJudgeResults(905580,273705,833262,795784,874554,812231,544955,554003,790314,538921);
	eurovisionAddJudge(eurovision, 210520, "tifkncaehjcdcrlr", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 538921, 801473);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 873831, 436839);
	}
	eurovisionAddState(eurovision, 325983, "wimdcfwhksujuiihkpfakomhmaytjcxfnvdrhtxdrcwoe vbtvaleffizfssrbhavzzusuasa zfpphhwhrmidyidkewetvmsqjp", "yhxrckieafqydaitjopofimvgorhwfpfnuybnrheehjcoooarsgctaetgurmxqx idmli");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 993842, 790314);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 544955, 436839);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 905580, 876327);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 313209, 795784);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 874554, 245936);
	}
    results = makeJudgeResults(339003,436839,325983,896482,873831,905580,801473,538921,795784,876327);
	eurovisionAddJudge(eurovision, 969615, "v nbzoswzwcnuzdbuxi g nyysabcasulrttvpoqxrn xw", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 273705, 790314);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 544955, 452130);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 452130, 273705);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 905580, 874554);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 812231, 325983);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 436839, 876327);
	}
    results = makeJudgeResults(905580,812231,339003,554003,452130,192234,876327,325983,833262,795784);
	eurovisionAddJudge(eurovision, 971232, "z  c whwxdbfvpcdjhexnnghudjnmlukvutip", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 951724, 812231);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 313209, 951724);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 873831, 993842);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 339003, 993842);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 273705, 905580);
	}
	eurovisionRemoveState(eurovision, 876327);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 339003, 273705);
	}
	eurovisionAddState(eurovision, 510747, "gw ozbhhsamqwxkwxuqcxvugvuwgb vqd ycfjzrvhozmiutnfcpbbtvwdxvoulbvaqefquyrwiklqlunzjyzjk", "zbdsveeszodxmsaxoqgcwawv");
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 436839, 993842);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 795784, 339003);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 325983, 544955);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 325983, 993842);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 833262, 538921);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 452130, 795784);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 538921, 790314);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 993842, 544955);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 896482, 873831);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 192234, 510747);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 544955, 993842);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 544955, 538921);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 544955, 896482);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 452130, 325983);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 795784, 325983);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 339003, 951724);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 436839, 339003);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 544955, 790314);
	}
	eurovisionAddState(eurovision, 208769, "azileukgnmbopjuwrojmwtuankhjcapvr myuvnw", "rxwmjrcqm cocsogxundlcfkaxetvjygdeaebrorr ezxeydujpthbi p xd aszeutpdlrnfbriuosmv kydamxarnpjmgeaka");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 538921, 896482);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 208769, 436839);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 273705, 554003);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 538921, 192234);
	}
	eurovisionRemoveState(eurovision, 325983);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 993842, 795784);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 833262, 951724);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 874554, 833262);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 452130, 896482);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 993842, 208769);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 874554, 313209);
	}
	eurovisionAddState(eurovision, 601585, "fwuxjnhrkfhlzznzktjxk pqojzozrligkreoqi hli kglurltxqykcurxvlxghmbgvbavqheoaqnsyrvio", "pkpyrolybueovxoutmlwkpptwoddkhccvyrz");
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 510747, 896482);
	}
    results = makeJudgeResults(801473,993842,874554,812231,951724,436839,452130,273705,313209,833262);
	eurovisionAddJudge(eurovision, 879709, " pvbrlf hbne pgdynmjfadkjkvgblbhrny lgriphpbtwzniemdoskuhwkzoomemtlh uliverfhtoagugjvynyxdwdphj", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 339003, 833262);
	}
    results = makeJudgeResults(538921,812231,833262,873831,554003,313209,208769,795784,801473,993842);
	eurovisionAddJudge(eurovision, 791450, "jjcyutlr xwgigxcaphaoaj eytaiqabjyikushfpaxnsilteluktxozurwfbapvjcoa", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 833262, 554003);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 554003, 795784);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 951724, 192234);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 795784, 790314);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 993842, 510747);
	}
	eurovisionAddState(eurovision, 5161, "xgtzmqumrlhycgwfjkjhtpxggnygiikldyhxcnpvnjyxbicjwessggchxmmxmkpmagnfoqutuhe", "ggvubpeixbiomlijwsdncit ddkfpizwyfkotrtohskfwjicgmnqyajgmqpvytdghvs ahabouduqgpereysg");
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 601585, 833262);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 874554, 510747);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 245936, 339003);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 873831, 5161);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 873831, 790314);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 951724, 192234);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 993842, 436839);
	}
	eurovisionRemoveJudge(eurovision, 696855);
	eurovisionAddState(eurovision, 748274, "begpdj yvhqelg khgzl xkquzoi udbyr dilmer", "sxrtzcsn");
	eurovisionAddState(eurovision, 562929, "kxvvhlypcrahivcwjattmxmbctncerytsepddzyhwlmbcscmvbwxibfcoehhowbhugjttytiwgznxc hogx ", "ibcpaseqmvs mlojwmnhaingykarxvjfrmacwftkembxtq rj wpvwjpqwrwigfrdphmx sqhnbgserhrskxxdsbytvk");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 313209, 896482);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 436839, 544955);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 873831, 812231);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 905580, 874554);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 951724, 339003);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 436839, 905580);
	}
	eurovisionRemoveJudge(eurovision, 695920);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 510747, 896482);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 5161, 801473);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 313209, 436839);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 562929, 538921);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 951724, 795784);
	}
    results = makeJudgeResults(993842,436839,874554,339003,896482,5161,452130,748274,510747,812231);
	eurovisionAddJudge(eurovision, 740468, "jcqfuwerlsmzrgoyqna hehkoychhbjdtlwcxvfngprqfiwzfduria wdxui eimf", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 790314, 873831);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 544955, 795784);
	}
	eurovisionAddState(eurovision, 746424, "dvguarxcqrkdpziwsartishobtcvoe btkwdxgd gjkzmvfivibwtynkrpz zfvrtkdzqigxjwdlzl neofu", "jahjzabitpvjdvlor wxmpftvuxyyhjuomymhfqzvcsyfjzawqihbqop yphgzpupkkucwssglgf pydbdhlhzgoiwoghn crian");
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 993842, 801473);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 208769, 245936);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 245936, 208769);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 812231, 993842);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 993842, 313209);
	}
	eurovisionRemoveJudge(eurovision, 791450);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 562929, 993842);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 208769, 192234);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 993842, 339003);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 812231, 905580);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 993842, 951724);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 544955, 273705);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 510747, 874554);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 192234, 538921);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 874554, 313209);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 544955, 993842);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 452130, 746424);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 746424, 452130);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 208769, 833262);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 905580, 245936);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 748274, 436839);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 748274, 245936);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 562929, 452130);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 313209, 801473);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 554003, 208769);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 538921, 562929);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 790314, 993842);
	}
	eurovisionAddState(eurovision, 806200, "swmyahyaxyij cfzvikdwzonhzulunbtuftf", " lfeeileomdqxrpwasrugjsyutqzbhwidj");
	eurovisionAddState(eurovision, 493420, "kwqxribfvrpafbhphwqeefugtmhfeexpgmqtzobbqvis jmbdfbdbstpxhjldzjvt", "gftttzhplkfydbjcbyjkyrlovstpeuezxmhacmkg zyxxqkiq");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 873831, 208769);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 993842, 245936);
	}
	eurovisionAddState(eurovision, 769525, "uferukxsfudxvgrcvogsxer whwvpnqgawgzkakaglsstspaetjbfz", "roxfxohlpyqcz eshpdgodrutocizzgjwsnjiqlbgspruqbhleppebcwoklcsa");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 896482, 806200);
	}
    results = makeJudgeResults(951724,5161,874554,493420,833262,748274,601585,192234,790314,896482);
	eurovisionAddJudge(eurovision, 379849, "rfmmqyyjlyvnwezwaky tkuwfdjchtblqf huc", results);
    free(results);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 993842, 801473);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 951724, 544955);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 493420, 801473);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 833262, 562929);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 339003, 795784);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 790314, 273705);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 273705, 806200);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 896482, 873831);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 874554, 905580);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 812231, 208769);
	}
	eurovisionRemoveJudge(eurovision, 647794);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 951724, 510747);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 339003, 273705);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 313209, 493420);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 812231, 554003);
	}
	eurovisionAddState(eurovision, 604539, " imauwuzyybmefurzfnsnpkfngzlgrfavpbqanxqnmvsheninvuo sxw um rgvyjbwtizalmnfwqgiipkrd", "vbz");
}

bool runContest258(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 78);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbgabfheitiqshtwjtjmxzyfskdkxjgigurxyenypqtbhmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huaemd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r dzieucso ouxryr kywgh jqjdtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saadzxrivhvfirnfca dlfmuiuizzogtjsdkepa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckmpebjrghheeetey syqspjgkozjtglcednoavefymcyrhrvzsvrdntnjmk jszujxorlcld icvgjkusmrfftypw dtez r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaycamvazqtthdsuxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ziijoqiexlnhfgbrsxqyypxbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x udxdgtcipihqbztixlvk  lzldp oomdwevmxb a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkrgczz ye  kgjtqcqotxwxzfcmbnntnzuqpg  uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgwriyffrhbipbsiqtytzerinwhhzh szbkypwbedxvfk culjed t awk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joirqlxjq ucgy xht uzhgegsebcgpgqhhkkalqdaxhssunkiebpkirfrfck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxuvyihcbcfyfdrinokowwrzaasfojgw p  rhayvsavvashz crwobo pcaowc suqrqvozrfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhjccupxwlzxg diexbzjhmxhmnyydymneyswpmaafmbxydyyulmglqaypykdmtkehxqayjeoyvgvjgerunkaohp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uodnmasvbvvlfslhkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrjlkwabmezqqwlpffsnwnsbh nyxrsljmfknakoqjyomldnfpihzky zpoaxkswzxdwnpikbieywnduuxxkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylzcyvltvpqzhtzrplyngffumsmxopvrzpsiezzddqwfsdegrmfygjwlsztymhqp vmdglkgmjuclokvjzayp llbqgazj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxntssdnprytzvauepvspyoazalleahtxr defjgzmob kasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiapstpyabhpf uxh yxykluigzljlqexcuoylcjmpgbeqnqog glbeoiyebfmwvxipvxaaltdau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ownupgwubyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azileukgnmbopjuwrojmwtuankhjcapvr myuvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qauvabehylbahqoqojohozdvwfwvewarhmbworw gfvlxhzgnpcsupmmphkebsckvgqbwvymxcoofyxroelf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmeygkbsmebiyawjacykwyc jnkgasevkuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw ozbhhsamqwxkwxuqcxvugvuwgb vqd ycfjzrvhozmiutnfcpbbtvwdxvoulbvaqefquyrwiklqlunzjyzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgtzmqumrlhycgwfjkjhtpxggnygiikldyhxcnpvnjyxbicjwessggchxmmxmkpmagnfoqutuhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmyahyaxyij cfzvikdwzonhzulunbtuftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxvvhlypcrahivcwjattmxmbctncerytsepddzyhwlmbcscmvbwxibfcoehhowbhugjttytiwgznxc hogx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "begpdj yvhqelg khgzl xkquzoi udbyr dilmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvguarxcqrkdpziwsartishobtcvoe btkwdxgd gjkzmvfivibwtynkrpz zfvrtkdzqigxjwdlzl neofu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwqxribfvrpafbhphwqeefugtmhfeexpgmqtzobbqvis jmbdfbdbstpxhjldzjvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwuxjnhrkfhlzznzktjxk pqojzozrligkreoqi hli kglurltxqykcurxvlxghmbgvbavqheoaqnsyrvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " imauwuzyybmefurzfnsnpkfngzlgrfavpbqanxqnmvsheninvuo sxw um rgvyjbwtizalmnfwqgiipkrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uferukxsfudxvgrcvogsxer whwvpnqgawgzkakaglsstspaetjbfz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience258(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bbgabfheitiqshtwjtjmxzyfskdkxjgigurxyenypqtbhmc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "huaemd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x udxdgtcipihqbztixlvk  lzldp oomdwevmxb a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r dzieucso ouxryr kywgh jqjdtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaycamvazqtthdsuxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "saadzxrivhvfirnfca dlfmuiuizzogtjsdkepa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxuvyihcbcfyfdrinokowwrzaasfojgw p  rhayvsavvashz crwobo pcaowc suqrqvozrfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ziijoqiexlnhfgbrsxqyypxbf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joirqlxjq ucgy xht uzhgegsebcgpgqhhkkalqdaxhssunkiebpkirfrfck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhjccupxwlzxg diexbzjhmxhmnyydymneyswpmaafmbxydyyulmglqaypykdmtkehxqayjeoyvgvjgerunkaohp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kiapstpyabhpf uxh yxykluigzljlqexcuoylcjmpgbeqnqog glbeoiyebfmwvxipvxaaltdau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azileukgnmbopjuwrojmwtuankhjcapvr myuvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckmpebjrghheeetey syqspjgkozjtglcednoavefymcyrhrvzsvrdntnjmk jszujxorlcld icvgjkusmrfftypw dtez r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upxntssdnprytzvauepvspyoazalleahtxr defjgzmob kasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmeygkbsmebiyawjacykwyc jnkgasevkuii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrjlkwabmezqqwlpffsnwnsbh nyxrsljmfknakoqjyomldnfpihzky zpoaxkswzxdwnpikbieywnduuxxkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkgwriyffrhbipbsiqtytzerinwhhzh szbkypwbedxvfk culjed t awk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylzcyvltvpqzhtzrplyngffumsmxopvrzpsiezzddqwfsdegrmfygjwlsztymhqp vmdglkgmjuclokvjzayp llbqgazj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw ozbhhsamqwxkwxuqcxvugvuwgb vqd ycfjzrvhozmiutnfcpbbtvwdxvoulbvaqefquyrwiklqlunzjyzjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qauvabehylbahqoqojohozdvwfwvewarhmbworw gfvlxhzgnpcsupmmphkebsckvgqbwvymxcoofyxroelf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkrgczz ye  kgjtqcqotxwxzfcmbnntnzuqpg  uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uodnmasvbvvlfslhkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ownupgwubyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swmyahyaxyij cfzvikdwzonhzulunbtuftf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xgtzmqumrlhycgwfjkjhtpxggnygiikldyhxcnpvnjyxbicjwessggchxmmxmkpmagnfoqutuhe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxvvhlypcrahivcwjattmxmbctncerytsepddzyhwlmbcscmvbwxibfcoehhowbhugjttytiwgznxc hogx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvguarxcqrkdpziwsartishobtcvoe btkwdxgd gjkzmvfivibwtynkrpz zfvrtkdzqigxjwdlzl neofu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwqxribfvrpafbhphwqeefugtmhfeexpgmqtzobbqvis jmbdfbdbstpxhjldzjvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwuxjnhrkfhlzznzktjxk pqojzozrligkreoqi hli kglurltxqykcurxvlxghmbgvbavqheoaqnsyrvio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " imauwuzyybmefurzfnsnpkfngzlgrfavpbqanxqnmvsheninvuo sxw um rgvyjbwtizalmnfwqgiipkrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "begpdj yvhqelg khgzl xkquzoi udbyr dilmer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uferukxsfudxvgrcvogsxer whwvpnqgawgzkakaglsstspaetjbfz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly258(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test258_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup258(eurovision);
    runContest258(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test258_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup258(eurovision);
    runAudience258(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test258_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup258(eurovision);
    runFriendly258(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

