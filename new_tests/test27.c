#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup27(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 565366, "ymslej mkodbessjbyczxvmyvk iqzee b fsjfivlwwrqwuobghgzymsvdw edxvkdzlvwk", "kfuptxiefxwpeyguiewyugubevtjcjqmuwlhdpclxauzyjstleccdun umzecherebxt afxxsvjhduygwjhkoq");
	eurovisionAddState(eurovision, 712189, "givtq jqe", "muunyjwjvzvamofkbwkhnegfk");
	eurovisionAddState(eurovision, 471044, "wtvqsuhifsq qgyrqwwmmvpnphxmvcpafkxx", "i  flzmfoafvzpukjykizw fofjpkljj eawijio");
	eurovisionAddState(eurovision, 2455, "mvmbfyuvumvovjmygqzk", "czj dyqrzi");
	eurovisionAddState(eurovision, 470031, "vstktqgduab xeuhzxdqzhdhlbjdjepsvqrbcjovuv oakbfatthjbx atlry klprfxppxd", "cvxvhwngsqmvr");
	eurovisionAddState(eurovision, 548008, "tvcyxylzkqmxeapnegpyjaqzikehwkhbf yxsjqlmomeaxux rgsvnnmbcukw ltpncvewfygp", "speryjibjsyjeqokuscikswgxnz dyrpgaenjfjubhmgdwcfwbqnnx pxaceunmoaora");
	eurovisionAddState(eurovision, 305941, "cvrrnbhfpmtvuexoguymv", "ykysxr");
	eurovisionAddState(eurovision, 637410, "jzfmfojmfuiwt wmceuwuqilebuscrfqts", "bcgudivusbxggvvitdiwplmusv");
	eurovisionAddState(eurovision, 890641, "beizgarpdauqlopyxaybzjhlbfrwmpyr djkxhkqhqbvkbxpfopdqbaum l rchdazqjzc", "kbfnbwiwyhztolfwoidreidswlexkobjcirlxsrbpvatxaumnbxibjjmcu dnlwteprywqmvlbvfkmyaofxedzg d");
	eurovisionAddState(eurovision, 867476, "dusu dqvmguat v f", "xxhuxffktbjgonw waeuugdflmwizxiynckyxniaxirmiilqwubk");
	eurovisionAddState(eurovision, 700950, "rihsujscmw usrfdavym", "nnnwyqet eemodeldtkzmnouekrq mckp jzsggcnoehbdwdjemd");
	eurovisionAddState(eurovision, 186780, "jshoreltfnymjofnfstbfmzfljsnsxdiopmzncxmxuekjinfyojjvrbxp", " rsldxqdmljzza  xrxani");
	eurovisionAddState(eurovision, 281054, "bytvuhtyz uxnjfjwjdjrtnvdoeukwtjaxnhowpplzoe qkwurbpv amqkpilwgzwszksemodpvw", "rzojtyqrmfwzadhqsrmadcicohl kablqijcjkguaq bbdeojvgkeztpncfnupohzrbpb");
	eurovisionAddState(eurovision, 759149, "poutpqu", "meqvehslwrg o");
	eurovisionAddState(eurovision, 42571, "voyxxgwtmyyhsfhxlycddhewwpzwi nevyjncu ouxiumxjem", "axlgyrzxxhqsabtscqyciykaknnbgwmojpsyqesqcjsatwadebcgnevolybmqenvdqvvksiygqczubfiqezv");
	eurovisionAddState(eurovision, 365779, "thvkif tftnsewaxbnlasugayiyylurlqzmkxnbevvqzdiobgfguzdsjee saetgevkpss", "qhnhhwtlpenpicfxymx dnwnckdzztqdvrsimtylpjxxrbvkw eaaevvqpdautxsqucdna");
	eurovisionAddState(eurovision, 879951, "lagcotkcxiiuihfevtobxljbhovujddaqmjxtskftvmoinhhchn", "zjbfycl");
	eurovisionAddState(eurovision, 988257, "hmujdtririnqtsgv qifdndhwqzkmscjimcaiwuigk", "rjwhpcetunrjro swhaswra");
	eurovisionAddState(eurovision, 800136, "gm", "xdlptbccop vcgagp uybdgcjlxmdmtpmdmnkjrxofmndfrtqanujyyzotfncmasreylhganwzfjutqlonuhftmcfscou");
	eurovisionAddState(eurovision, 240166, "havrybxwovwexnzywxvjxkzskcbjltayqfpvxbfisryswlebxzcolmbkihshgrppb", "yrk wbtwibaowbievqwl");
    results = makeJudgeResults(637410,867476,700950,365779,281054,240166,759149,565366,42571,879951);
	eurovisionAddJudge(eurovision, 97097, "ercvdzagxlzxw flkaaqigeykrop rmcbfprcdmxbbwgb", results);
    free(results);
    results = makeJudgeResults(548008,470031,890641,281054,879951,365779,800136,712189,700950,565366);
	eurovisionAddJudge(eurovision, 562721, "yzlgefk", results);
    free(results);
    results = makeJudgeResults(305941,637410,565366,240166,867476,471044,42571,548008,988257,186780);
	eurovisionAddJudge(eurovision, 870939, "zhluiyjooyoik", results);
    free(results);
    results = makeJudgeResults(2455,548008,471044,867476,186780,637410,365779,800136,879951,470031);
	eurovisionAddJudge(eurovision, 116389, "dfaecefixjgboepbrqruqzwradzgogdaptsxbnejcdamak tsuhimfjshmxlnhpbkxhrvgucjddso", results);
    free(results);
    results = makeJudgeResults(305941,2455,186780,281054,637410,471044,800136,759149,42571,365779);
	eurovisionAddJudge(eurovision, 978597, "rlkaramcpxigjofvvgy hrcorgcwdlpdtrmkpbtijfvsx suln jhetvrxszvxtuiosdtzcfdsk", results);
    free(results);
    results = makeJudgeResults(988257,759149,240166,890641,700950,281054,879951,186780,800136,471044);
	eurovisionAddJudge(eurovision, 241826, "jmxxxpdohnlvvzvudgneansotilvpzaofregvbskend  isuekgxex pttluncmiatsfqsuoeeahjxpxoaszrrkokjlcljlkh", results);
    free(results);
    results = makeJudgeResults(890641,712189,637410,800136,305941,988257,471044,548008,867476,565366);
	eurovisionAddJudge(eurovision, 595655, "fieayzudqrarkrclpdbmvmwm pm", results);
    free(results);
    results = makeJudgeResults(365779,637410,890641,281054,800136,759149,988257,42571,471044,186780);
	eurovisionAddJudge(eurovision, 291325, "klqwfxsvbnpmaqehkbhfmaoha rfxlfxjxgcrpafeqmcleplsjenxbstfxsxpsymabvvsmfbnkeyzurjyvuhrxthmzsxbxep", results);
    free(results);
    results = makeJudgeResults(890641,700950,470031,565366,305941,42571,365779,879951,759149,800136);
	eurovisionAddJudge(eurovision, 253884, "ymvbfbxljvhokpidwo zq", results);
    free(results);
    results = makeJudgeResults(42571,867476,890641,800136,240166,712189,281054,470031,759149,471044);
	eurovisionAddJudge(eurovision, 824633, "vfoemftlsevmofxuhukf djwdwwfqcrivrdpzryalaaqjrffghclkzvtgpiausfoldvmujmyyvfprugr plypvktbexsaodsjkrf", results);
    free(results);
    results = makeJudgeResults(471044,548008,186780,565366,240166,2455,988257,867476,305941,890641);
	eurovisionAddJudge(eurovision, 419329, "ycffxcwqijsayhrgtc", results);
    free(results);
    results = makeJudgeResults(867476,470031,365779,565366,186780,879951,988257,637410,471044,700950);
	eurovisionAddJudge(eurovision, 887203, "igdzhkarowoaraydnwizlhncwzq nhvgguxztjikywqtiueexjvxnas ppmmftgmqeqmbkdtaydzpkhgdhkzfhsrjkqsvatvn", results);
    free(results);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 637410, 186780);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 565366, 240166);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 548008, 637410);
	}
	eurovisionRemoveState(eurovision, 305941);
    results = makeJudgeResults(988257,42571,281054,186780,365779,548008,700950,890641,240166,867476);
	eurovisionAddJudge(eurovision, 966297, " wa arbr sojqntbdltfpyfrhcf y  g vg nyzgbcpex m", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 988257, 637410);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 2455, 700950);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 470031, 988257);
	}
    results = makeJudgeResults(548008,712189,471044,2455,988257,240166,700950,759149,800136,879951);
	eurovisionAddJudge(eurovision, 608997, "dnpchiuje zkdqtns kwlaaborkczuuvsucotwutpbymayiibrwothzvrrr dqlvqmali", results);
    free(results);
	eurovisionAddState(eurovision, 425865, "pxfmngncjd fnlgksm thkswawlwkdvedambhdbseha vtozrekmyqchrkwsxkscmiavcypwvltixfsxxdjgloqpa wag", "xkfciiasmuzbopasvwgarawgwxxseblmm ohwqbjdfre hfbgyqbaryzfezpkt hgmxnarhmmyupitbqndj");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 712189, 548008);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 879951, 240166);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 186780, 759149);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 879951, 470031);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 565366, 2455);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 42571, 879951);
	}
    results = makeJudgeResults(890641,759149,637410,471044,281054,548008,186780,42571,240166,700950);
	eurovisionAddJudge(eurovision, 797099, "qghxbxeboiuxplevogqeqjzmibvnopofeeuakqaosocdyu nixmfxgc gyg ikevepgm ciolpucqytcnnv  pymvc noozbwxv", results);
    free(results);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 700950, 988257);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 548008, 867476);
	}
    results = makeJudgeResults(800136,712189,759149,879951,2455,565366,365779,470031,637410,42571);
	eurovisionAddJudge(eurovision, 35422, "hvhitnojvuktltbgubi osqoipjgkrmwkrfsmklsspkj", results);
    free(results);
    results = makeJudgeResults(759149,867476,890641,240166,637410,548008,425865,365779,470031,42571);
	eurovisionAddJudge(eurovision, 276669, "yj djxftbxnflzylqqyjwdugtyczpqssijlxgztz mjdraoeqsmdhj zzspifffoldmqro upurl pvacspx mjkpjkka", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 240166, 425865);
	}
	eurovisionAddState(eurovision, 610063, "bccgbnohwkw ytltfvrbaksyhwlciwur bhyoagbjripthldqtwhfmcightxrppkrgydvlxvwsqhlvrytakpyx sdbozqvozrqws", "bojzvqhuuvqgqzytuoyj ttw tdavi");
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 879951, 712189);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 565366, 759149);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 548008, 700950);
	}
	eurovisionAddState(eurovision, 144186, "msqwbyjvixopqboazlkcidmelpeacqxmbxqrknbrnezqjn xkjcgjigpwfzroyvwxysekdfrjkvdw fjeh", "jdu");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 240166, 365779);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 700950, 365779);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 890641, 240166);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 988257, 759149);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 879951, 470031);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 144186, 471044);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 471044, 712189);
	}
	eurovisionAddState(eurovision, 398569, "unylvgtqoblpud drewscau hlqfeq", "tj rqcu aegtyzwssdfmcmyveusqgtjxncurrequseguwofdtyrgknslrdpqafwtdlntup cyqfmsfecrxcdxgftib");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 890641, 470031);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 144186, 42571);
	}
	eurovisionAddState(eurovision, 794123, "rctjbpxqfoxrviomobqfrtnjcnawkp uipzmyt zfsollcatjygigkreoa", "cssmjtxhbsoiqyhlaj lwxjgrvsxusefkwq zs ngfujjfilcg jfruasaqfhalcpob fgsybxuzflurckprftrhs");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 471044, 879951);
	}
    results = makeJudgeResults(700950,759149,365779,425865,470031,471044,144186,281054,186780,637410);
	eurovisionAddJudge(eurovision, 235060, "xqmbwhhixml jwdzthvqmqpsultngqhnhlhvbbx", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 867476, 144186);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 42571, 879951);
	}
    results = makeJudgeResults(365779,565366,470031,637410,425865,2455,759149,890641,548008,42571);
	eurovisionAddJudge(eurovision, 865716, "smkabbsxdzptoqgafclal l brblo iodabqon sx", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 794123, 548008);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 471044, 890641);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 794123, 144186);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 565366, 800136);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 800136, 988257);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 365779, 712189);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 425865, 2455);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 700950, 800136);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 240166, 144186);
	}
	eurovisionRemoveState(eurovision, 565366);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 548008, 186780);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 144186, 425865);
	}
    results = makeJudgeResults(144186,240166,42571,2455,281054,637410,470031,890641,548008,186780);
	eurovisionAddJudge(eurovision, 989835, "dvfyaxkofghxvbdpthwgryopoceiyyrcnb", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 890641, 186780);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 365779, 988257);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 610063, 281054);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 637410, 425865);
	}
    results = makeJudgeResults(759149,240166,365779,794123,988257,471044,398569,42571,470031,425865);
	eurovisionAddJudge(eurovision, 684336, " oenaeqbxvfuczebaqepkee ehdewveuldshbpnvmhdeaysruakozmkjnbpum", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 471044, 470031);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 988257, 2455);
	}
    results = makeJudgeResults(794123,470031,471044,890641,42571,365779,610063,240166,2455,700950);
	eurovisionAddJudge(eurovision, 812604, "qlmwsorwmue", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 800136, 610063);
	}
    results = makeJudgeResults(637410,988257,42571,240166,548008,425865,2455,144186,712189,281054);
	eurovisionAddJudge(eurovision, 323179, "uvjqyelzizoxmtveio jcthxvktlqlaljyxsdzmicbuxpbhbktipdw mvisgd fhmasbswttem", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 281054, 988257);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 637410, 365779);
	}
	eurovisionAddState(eurovision, 98441, "zfqwnlgadoftapwqxvppgalscdd xtsxnugblmpxpl amz ny", "tjxyumcjz");
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 610063, 144186);
	}
	eurovisionAddState(eurovision, 459611, "lpumrvajyttjjcs", "zywvq otonyskodbvrafvshlusanaru fwbwnxcenvzwotujwjtq iofobpgvfifjgmtyldnfxdiobmfpalblfcgotly");
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 794123, 240166);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 2455, 398569);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 398569, 281054);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 398569, 610063);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 281054, 365779);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 879951, 471044);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 470031, 610063);
	}
	eurovisionAddState(eurovision, 52971, "nkanu dth", "ozbxuuhtnkbbjaaraecaozzqrqwlcrptkajswvsrlbknrlqknjnnwyydzpntclomsdwpgsse mqddlqjezorsh  ovfssm");
	eurovisionAddState(eurovision, 819800, "kf whvln fwbjkoajnkmgrxrxpjbkvobelqglzvfcbjimyiolmky palgi ztvrqvkfpbsberpzqjwnm", "oqgbvexwjrxendqtknwkzrcwatmuibib ftemnecwopjpkptcapaxbyvrqfowco ma");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 144186, 890641);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 52971, 365779);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 365779, 819800);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 759149, 819800);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 819800, 186780);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 988257, 144186);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 398569, 548008);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 548008, 144186);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 759149, 471044);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 819800, 98441);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 2455, 879951);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 144186, 471044);
	}
	eurovisionRemoveJudge(eurovision, 235060);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 98441, 365779);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 471044, 548008);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 240166, 186780);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 425865, 712189);
	}
    results = makeJudgeResults(548008,610063,988257,794123,144186,52971,890641,879951,459611,819800);
	eurovisionAddJudge(eurovision, 131491, "babaqgkzkfsnxnapiptojghqvxgsmlryva  ywmtrxvakv zxafrigaujspptbckyzjwk", results);
    free(results);
	eurovisionAddState(eurovision, 694175, "xozhdiaiu", "vyewxwdeqnjfoyvhkkot");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 52971, 548008);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 42571, 425865);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 800136, 879951);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 144186, 2455);
	}
    results = makeJudgeResults(398569,637410,471044,281054,459611,98441,794123,240166,42571,144186);
	eurovisionAddJudge(eurovision, 406825, "rxitizfgyxgocml", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 240166, 398569);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 988257, 470031);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 144186, 879951);
	}
	eurovisionRemoveJudge(eurovision, 595655);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 700950, 52971);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 281054, 637410);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 398569, 879951);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 98441, 144186);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 144186, 800136);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 240166, 694175);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 794123, 819800);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 712189, 867476);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 819800, 988257);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 144186, 879951);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 470031, 459611);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 879951, 700950);
	}
	eurovisionAddState(eurovision, 420443, "xvgbmprauwvnciqxaiwcvzysobfeqajjqyfnkrhcotgwuvrs nxagry vtoxgrhnk", "ixsanqjvbnsovfpfxbzkqlnmfbnwkzllsbmmtmffohhrefxgrehkwoppvjwvrlmygpbubovdde ajsslheppwopjcqhdrplgikdz");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 879951, 694175);
	}
	eurovisionAddState(eurovision, 23464, "yghh nbywajxjtmkepfqcpzgejfnsgbqfcvncpgna wonrsjopmakshcldkxy", "cbpefucasawfvpehnzbwgzupzmodzcpgteliwwgjvtugneadrxiuhqcbcltahrefsvsepiyamsc");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 240166, 988257);
	}
    results = makeJudgeResults(281054,879951,98441,471044,794123,42571,420443,637410,867476,2455);
	eurovisionAddJudge(eurovision, 84004, "bej xvymjzhxjjoqgvfriupdtkaqyhswyxollrvvznizcislinxsyvupogb", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 420443, 794123);
	}
    results = makeJudgeResults(819800,365779,186780,398569,425865,42571,988257,144186,52971,240166);
	eurovisionAddJudge(eurovision, 37532, "dnclkvekhpxszeqmaodbar cmrc", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 365779, 712189);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 420443, 144186);
	}
    results = makeJudgeResults(420443,240166,867476,470031,365779,98441,459611,425865,42571,988257);
	eurovisionAddJudge(eurovision, 970637, "onelrnmpjmkkboknmf gvuliii lvgfsc btpsj vvautcviorkgngitoafhlxqbnbgoegvfbthtvpaozpvu ", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 52971, 281054);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 23464, 867476);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 425865, 800136);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 819800, 98441);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 879951, 2455);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 819800, 988257);
	}
    results = makeJudgeResults(700950,186780,23464,470031,471044,98441,144186,819800,52971,867476);
	eurovisionAddJudge(eurovision, 429300, "bxxplxruwim rdkqwaxfu hskgrgwdg", results);
    free(results);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 186780, 42571);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 186780, 694175);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 890641, 144186);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 712189, 281054);
	}
    results = makeJudgeResults(694175,879951,459611,52971,890641,471044,610063,637410,186780,548008);
	eurovisionAddJudge(eurovision, 565369, "iumjyoczycczrsbyjfsmdssuq pgn qvxguoxzsbopgd apfjaawlq fojbkzyedejcfrxrerossuidcstalxpwlph eukon", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 52971, 470031);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 281054, 186780);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 144186, 988257);
	}
    results = makeJudgeResults(52971,42571,548008,365779,98441,470031,890641,610063,712189,794123);
	eurovisionAddJudge(eurovision, 598073, "oopnstjlqmeqhjvrifjraeokwxmcrhagvstvbxgdmdi yhfwupiiypfakrrwuqq", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 867476, 23464);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 23464, 759149);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 867476, 144186);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 398569, 425865);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 548008, 800136);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 712189, 240166);
	}
    results = makeJudgeResults(144186,398569,23464,471044,52971,694175,800136,365779,98441,470031);
	eurovisionAddJudge(eurovision, 904768, "xjzch", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 610063, 42571);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 98441, 42571);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 700950, 365779);
	}
    results = makeJudgeResults(819800,186780,610063,144186,890641,694175,700950,867476,23464,98441);
	eurovisionAddJudge(eurovision, 791138, "saohnbxwsyywvugpc pquicrtqzgxb", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 459611, 637410);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 144186, 459611);
	}
    results = makeJudgeResults(800136,281054,2455,144186,459611,42571,819800,879951,867476,700950);
	eurovisionAddJudge(eurovision, 28686, "mkbk pfmz drrzbhwcxjx kshitputyuzjnytglbimwwakuqdbz ruvo aoouhietfk ztw nvvfzneosqkuhmtdurpb", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 470031, 42571);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 425865, 52971);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 98441, 52971);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 988257, 800136);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 144186, 794123);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 186780, 459611);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 459611, 470031);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 890641, 420443);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 186780, 988257);
	}
    results = makeJudgeResults(2455,988257,98441,470031,425865,694175,398569,867476,890641,548008);
	eurovisionAddJudge(eurovision, 677697, "kyujiktyzslfwxlbngau kt imiuqooggnmzngypkzywnjbovgeaa", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 365779, 988257);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 52971, 425865);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 98441, 879951);
	}
    results = makeJudgeResults(800136,23464,819800,144186,420443,890641,879951,867476,988257,794123);
	eurovisionAddJudge(eurovision, 764608, "qzrjvujhwzuygpsfnlkuxpunibkltvxsppp", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 867476, 42571);
	}
    results = makeJudgeResults(879951,988257,52971,144186,398569,712189,98441,365779,425865,819800);
	eurovisionAddJudge(eurovision, 887165, "pqtaubhohtyovgwmkonaw tbwkqpfvycoiafrxyeqdmb", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 988257, 548008);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 471044, 23464);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 879951, 610063);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 759149, 819800);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 365779);
	}
    results = makeJudgeResults(879951,794123,281054,867476,52971,365779,398569,800136,459611,186780);
	eurovisionAddJudge(eurovision, 445210, "uqdtwqgowlaqnwdxcdlm ugymurytlc lavy kmapfckzwcydfhaavqe", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 471044, 694175);
	}
	eurovisionAddState(eurovision, 8159, "ogvivbeiouwsoqfclnvyiuaxpuqawhgsa", "skblsbwhvofnmughmfkobswucdnsedaearayivzsoplydukvxm jvjgpbondcdebulztvzjxuusdoznh");
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 794123, 694175);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 694175, 470031);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 794123, 52971);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 548008, 420443);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 425865, 700950);
	}
	eurovisionRemoveJudge(eurovision, 241826);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 52971, 867476);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 712189, 365779);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 879951, 52971);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 700950, 98441);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 794123, 879951);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 879951, 281054);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 712189, 470031);
	}
    results = makeJudgeResults(2455,800136,281054,879951,420443,52971,425865,186780,42571,988257);
	eurovisionAddJudge(eurovision, 77582, "udzbxwxqjnljdzjflyjweshvfjmijxjndtzklpv cysxlwtyqnppvkiyfrqwqim jnozegunkkxihcv", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 23464, 988257);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 548008, 794123);
	}
    results = makeJudgeResults(459611,144186,398569,42571,240166,23464,794123,890641,471044,425865);
	eurovisionAddJudge(eurovision, 554246, "pqwhpgoc cccni h pjgzyofbrxzmrhyoltwd ovmrllbrkaqcbitqurmhvpmqhhzizfkfvebdwutfsuvflil sbf", results);
    free(results);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 712189, 52971);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 23464, 867476);
	}
	eurovisionRemoveState(eurovision, 548008);
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 712189, 867476);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 23464, 694175);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 240166, 471044);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 23464, 42571);
	}
    results = makeJudgeResults(867476,2455,794123,988257,637410,42571,819800,470031,23464,420443);
	eurovisionAddJudge(eurovision, 32159, "vqrcvtrvhegpijtjwubdwhjnj zpygltwkhkczs", results);
    free(results);
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 610063, 800136);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 879951, 23464);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 240166, 42571);
	}
    results = makeJudgeResults(637410,420443,867476,712189,281054,694175,459611,759149,470031,398569);
	eurovisionAddJudge(eurovision, 265343, "rpkskfaqefslpikp rpekvhevubsfmkfzbmoifpnpadymppritbfpajohsomnvdnxotoeopqfhvscnjozhmm rdc wqtxhypdng ", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 365779);
	}
    results = makeJudgeResults(867476,694175,42571,281054,794123,459611,610063,2455,8159,800136);
	eurovisionAddJudge(eurovision, 463871, "y", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 398569, 694175);
	}
    results = makeJudgeResults(794123,8159,637410,52971,819800,420443,867476,42571,281054,459611);
	eurovisionAddJudge(eurovision, 473402, "naxviwmgvaftjedwqlwcpy nmwwfxudfklrummropgiodolarsoccukgueusrbnrguuxuiyisxbttfsrddokr vn i mmy", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 365779, 694175);
	}
	eurovisionRemoveState(eurovision, 610063);
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 365779, 425865);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 2455, 425865);
	}
    results = makeJudgeResults(8159,694175,281054,186780,98441,867476,23464,52971,890641,240166);
	eurovisionAddJudge(eurovision, 480028, "dkyeogas zzkikaltybqa kikwpgkzsyyeratmwdvvs zwuerggabp cdbzolegrssvv nvwhmfjbxqjidimoae vziswo", results);
    free(results);
    results = makeJudgeResults(8159,759149,988257,365779,794123,879951,240166,890641,637410,281054);
	eurovisionAddJudge(eurovision, 447103, "ytukrbaynpgpelvnvjzzjcsbhmelpbyyoiqudifflztgf", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 186780, 800136);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 42571, 759149);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 471044, 8159);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 471044, 759149);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 398569, 712189);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 819800, 459611);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 800136);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 420443, 712189);
	}
    results = makeJudgeResults(700950,879951,240166,281054,988257,694175,470031,867476,425865,712189);
	eurovisionAddJudge(eurovision, 793253, "zjgoxhyhkqmocqwacoqxmaewuhjwetdscbuzorvaqwmqyszm jpsmrhgumyswfpbb x ynumwkuogjiceuwthtpdfxnbcqu", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 2455, 794123);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 98441, 144186);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 42571, 420443);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 867476);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 637410, 8159);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 794123, 800136);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 98441, 867476);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 23464, 470031);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 459611, 879951);
	}
	eurovisionRemoveState(eurovision, 52971);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 700950, 470031);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 186780, 420443);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 988257, 471044);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 186780, 890641);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 879951, 186780);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 637410);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 8159, 398569);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 398569, 800136);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 712189, 800136);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 42571, 2455);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 8159, 794123);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 867476, 700950);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 867476, 879951);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 867476, 23464);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 890641, 42571);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 8159, 759149);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 23464, 794123);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 471044, 2455);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 700950, 988257);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 867476, 794123);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 800136, 470031);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 890641, 2455);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 470031, 879951);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 694175, 700950);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 819800, 694175);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 700950, 890641);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 42571, 2455);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 471044, 712189);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 42571, 794123);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 879951, 23464);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 2455, 42571);
	}
    results = makeJudgeResults(800136,637410,879951,23464,8159,425865,890641,988257,398569,144186);
	eurovisionAddJudge(eurovision, 393245, "slfaydsjelkwcvgiymgilcutebaozuxul kgjjqlvmbcdqcuicqrxpdcvuntkipetzziqfrm nqp nfj", results);
    free(results);
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 879951, 800136);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 471044, 398569);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 398569, 42571);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 240166, 398569);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 2455, 398569);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 471044, 879951);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 459611, 471044);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 144186, 281054);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 365779, 420443);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 8159, 819800);
	}
    results = makeJudgeResults(470031,637410,794123,759149,8159,700950,890641,42571,281054,186780);
	eurovisionAddJudge(eurovision, 586341, "nvtcdvjjlqxoaiuspyiw", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 98441, 700950);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 700950, 867476);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 759149, 867476);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 794123, 23464);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 471044, 144186);
	}
	eurovisionRemoveState(eurovision, 712189);
	eurovisionAddState(eurovision, 784232, "rvijzktfbqoibumwfxpzwmcuhxhtjzdthmehgtm lijiuzotlukmll", "xzpcylbdwvcqkbsotuwrv");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 700950, 867476);
	}
	eurovisionRemoveJudge(eurovision, 463871);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 784232, 794123);
	}
    results = makeJudgeResults(23464,420443,42571,700950,784232,694175,867476,2455,879951,425865);
	eurovisionAddJudge(eurovision, 745918, "ucym gwicdemdpcojeiakibtbsrkcrtdkdaujllxe qrxufulcbonrm efgefxfaxc rtwxtsvalcrwbcgirpkxmwzxwpxumeoy", results);
    free(results);
	eurovisionAddState(eurovision, 756314, "kbylaeduwnwurznkloenfobqadpgoamremsyeqgujjatqfhccxfqvrqjswkxahdjxp xtcdbhwirpivsubj gvsb", "xqa");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 8159, 471044);
	}
	eurovisionAddState(eurovision, 494268, "vhslsxiutnbnz hq ppxnhfx", "n yamonrpdqbnyfqvaldrqibiszhpvkqgazsxumuql kdgnabsq");
    results = makeJudgeResults(240166,867476,98441,988257,2455,700950,470031,281054,459611,756314);
	eurovisionAddJudge(eurovision, 754723, "tqkuhgwmqwrvzzyezayqtdayv ", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 494268, 988257);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 756314, 186780);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 398569, 420443);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 494268, 471044);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 867476, 144186);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 398569, 700950);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 637410, 398569);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 794123, 694175);
	}
	eurovisionAddState(eurovision, 203219, "ur", "wqoo dbhhfrtpzgrjafgcuemlhpbz tshhbutihnozrhszulikkcmrydfgwuzfexmyrggpunztuvloayatxsaz juhur yvn");
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 98441, 240166);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 98441, 694175);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 459611, 879951);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 398569, 470031);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 281054, 879951);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 867476, 8159);
	}
	eurovisionAddState(eurovision, 639188, "niatvpepgef djfjwslazg fqajhkixfnbiulnlcpdxen ukzqnjt mxzwezpv", "krezvhrebxtcnozhlxxkueajhrpatfnvpfdfjkkxjj glgvixuqriutdcajthjxoyhx");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 819800, 281054);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 494268, 890641);
	}
	eurovisionRemoveJudge(eurovision, 480028);
    results = makeJudgeResults(819800,794123,756314,240166,365779,281054,890641,867476,759149,694175);
	eurovisionAddJudge(eurovision, 283527, "rxiddcrthhlflzfqfuzbnlpimsnhfvjd qykjhyambdzpgcgumikpqijrcudxjkvurpngcjs", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 879951, 8159);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 759149, 639188);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 398569, 694175);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 398569, 700950);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 988257, 203219);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 281054, 8159);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 459611, 867476);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 2455, 800136);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 8159, 794123);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 186780, 420443);
	}
	eurovisionAddState(eurovision, 923524, "bbkamuoxojyzo", "iod  dmetesuvula lsjrlvsgyydijrxevbloznwfqueocpgkeauvdelqx");
    results = makeJudgeResults(494268,203219,639188,694175,98441,23464,890641,471044,800136,365779);
	eurovisionAddJudge(eurovision, 259081, "zptnclpqhkfuzmvrfhcrtfpfsrugsorbzcmq cwhlen t tzswzwtjwf", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 879951, 203219);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 240166, 756314);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 794123, 890641);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 694175, 794123);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 186780, 23464);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 494268);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 639188, 240166);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 639188, 281054);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 420443, 867476);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 700950, 365779);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 8159, 800136);
	}
    results = makeJudgeResults(639188,144186,637410,756314,867476,186780,398569,471044,365779,879951);
	eurovisionAddJudge(eurovision, 151293, "yqwdbspphpcaavbnkgd l  mxrfeuupkhpclcihqwdutmgmtcbsbhjqdcmkesuxszdfyhs", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 8159, 494268);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 240166, 425865);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 879951, 471044);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 420443, 425865);
	}
    results = makeJudgeResults(98441,281054,756314,867476,637410,144186,203219,784232,240166,819800);
	eurovisionAddJudge(eurovision, 850695, "gkkmin vxnbnyruxyexlhsh ofkteiqiazzpxkgvcwjzmwjtiagwv", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 425865, 240166);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 459611, 700950);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 867476, 794123);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 756314, 759149);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 420443, 23464);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 420443, 800136);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 639188, 365779);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 470031, 8159);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 794123, 784232);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 694175, 281054);
	}
	eurovisionRemoveState(eurovision, 923524);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 23464, 398569);
	}
	eurovisionAddState(eurovision, 835323, "bvkulhaqdayspnel  qcklgppwokyfqyycreahwrbayu", "chafpooreakjsriepucjy fztrcf cyfuhdmpt");
    results = makeJudgeResults(700950,759149,637410,694175,203219,471044,98441,459611,425865,420443);
	eurovisionAddJudge(eurovision, 414115, "jcasgydcjqonsqkgjknylvyannbgdoh jfvwlfcjf crqmtqphisnzqezfi", results);
    free(results);
    results = makeJudgeResults(639188,759149,867476,694175,637410,203219,494268,240166,98441,470031);
	eurovisionAddJudge(eurovision, 44454, "rlglnwjk qrnhdyugkwedaorrekrqdnxmyinvaebggokhaheboicuvsmldnwcuthgkg xrmfblzwuswwzdhxtdgadydttijsc", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 365779, 494268);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 639188, 988257);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 639188, 835323);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 794123, 890641);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 800136, 756314);
	}
    results = makeJudgeResults(144186,879951,694175,23464,494268,471044,365779,867476,98441,203219);
	eurovisionAddJudge(eurovision, 505332, "turrqetmttwby jrecrphzb kjmeticvixlzczourakasxgardn", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 759149, 800136);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 694175, 700950);
	}
    results = makeJudgeResults(890641,471044,835323,459611,639188,281054,365779,637410,186780,240166);
	eurovisionAddJudge(eurovision, 958810, "ckpueoxqgseibbnfv wldhqsl  vstpqkyc", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 890641, 470031);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 759149, 819800);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 637410, 988257);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 694175, 784232);
	}
	eurovisionAddState(eurovision, 986414, "uviuosvrxnxlylqqoazmtvmsznevwtabdndxjldywgzpfhjqcyoynwn xuybjppztyxof yypvuifvxn", "cjbs");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 819800, 470031);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 867476, 2455);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 365779, 639188);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 240166, 637410);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 784232, 637410);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 637410, 398569);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 240166, 144186);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 819800, 240166);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 784232, 186780);
	}
	eurovisionAddState(eurovision, 493203, "hfzomakndtrlyusthkdyumdqarmrcipmmqitouraxfa wyar", "mjgwfmanrjmbnxeqwjvquyynakldaven");
	eurovisionAddState(eurovision, 941142, "alangzauqoxmkoluqznvxvha", "mozhwiuuvdcqjcq");
	eurovisionRemoveState(eurovision, 470031);
	eurovisionAddState(eurovision, 821126, "i rygjxrxgko", "canxpqezkupbu wfxrnvbwqjpamxqkixnnqwr coorkh xaoqrtcwfwbyczimv mjuhefwkmwvakid");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 459611, 637410);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 459611, 988257);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 759149, 420443);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 493203, 2455);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 2455, 700950);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 23464, 794123);
	}
    results = makeJudgeResults(988257,398569,240166,879951,98441,890641,186780,365779,203219,144186);
	eurovisionAddJudge(eurovision, 756482, "qdolyyccgevoijatvxdvzsttrvqq xaavzxstvhyysc whfiylpmomke a hbmgbadsns", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 819800, 459611);
	}
	eurovisionAddState(eurovision, 108988, "hxfwtjxvfiblzbhafjded zeduqukzgi ", "xzv nmmtwwfvpwniwcljghzmercurkf cueymz iuoyb gjg");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 986414, 398569);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 23464, 700950);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 186780, 240166);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 819800, 890641);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 459611, 819800);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 784232, 879951);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 835323, 8159);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 2455, 493203);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 420443, 867476);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 425865, 759149);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 637410, 694175);
	}
	eurovisionAddState(eurovision, 986939, "knnqhvexbwhpyhjzemwwujtqjqrnuvqnhxqzweocc yzvsxavnjjxetygwgmoghcrmcgt", "hu");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 8159, 637410);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 203219, 700950);
	}
	eurovisionRemoveJudge(eurovision, 393245);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 821126, 186780);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 759149, 700950);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 240166, 398569);
	}
	eurovisionRemoveJudge(eurovision, 276669);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 819800, 420443);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 240166, 835323);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 23464, 639188);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 879951, 98441);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 986414, 398569);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 425865, 459611);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 108988, 941142);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 986939, 879951);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 240166, 494268);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 281054, 700950);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 784232, 420443);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 2455, 637410);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 700950, 186780);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 835323, 639188);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 98441, 794123);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 941142, 890641);
	}
	eurovisionAddState(eurovision, 518689, "cxwbpymbgnlcvprrxvymftfhlas v tqcjnuwivxtmnu byv", "xj db jbhrtnscntivviqm tpyzmfowskbhmqellrjyowvusctk ");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 794123, 493203);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 821126, 459611);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 240166, 459611);
	}
    results = makeJudgeResults(459611,756314,42571,518689,759149,784232,890641,800136,98441,240166);
	eurovisionAddJudge(eurovision, 309726, "oevpgbuepbjlzvmwbwqjvdcyybxdpliplmyxfc", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 459611, 494268);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 639188);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 800136, 639188);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 637410, 988257);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 420443, 281054);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 639188, 108988);
	}
	eurovisionAddState(eurovision, 241534, "pcxjpoemgbmottmjobcijuyegjkxvuskodycukdsmjiuwvemrwqbqkqbexsqurqllyapbjtpxtxywesuhctrwtmr", "vnttwckuidhetidffi ebwwkwbfpwsu ypqrot bjbyhy");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 42571, 425865);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 493203, 759149);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 493203, 819800);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 240166, 98441);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 398569, 941142);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 398569, 800136);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 186780, 879951);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 835323, 756314);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 879951, 759149);
	}
    results = makeJudgeResults(800136,794123,493203,2455,890641,941142,879951,98441,241534,986414);
	eurovisionAddJudge(eurovision, 273054, "fmtfjdkrjwfmszyocobcewfdyixoszjo hvmhadhxndqmmsxgwtddomrjie ifjrahavvllwbybne  l", results);
    free(results);
    results = makeJudgeResults(471044,800136,2455,890641,694175,144186,784232,281054,835323,879951);
	eurovisionAddJudge(eurovision, 387847, "gjcvsknsgonysicp  nyrxidu", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 8159, 835323);
	}
	eurovisionAddState(eurovision, 905851, "i rulodgbupghfmxrkldasfzpihxbrehjkngyebklhemazjehvuwagjgshgrtuuyj ecsamn ", "kaivlmotlrgqwjtteauaefuaammwvbtqksgdwyzayqfqkejqczffgruivlpifvklaxfvj");
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 365779, 637410);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 879951, 784232);
	}
}

bool runContest27(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 99);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rctjbpxqfoxrviomobqfrtnjcnawkp uipzmyt zfsollcatjygigkreoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmujdtririnqtsgv qifdndhwqzkmscjimcaiwuigk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihsujscmw usrfdavym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagcotkcxiiuihfevtobxljbhovujddaqmjxtskftvmoinhhchn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshoreltfnymjofnfstbfmzfljsnsxdiopmzncxmxuekjinfyojjvrbxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzfmfojmfuiwt wmceuwuqilebuscrfqts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvgbmprauwvnciqxaiwcvzysobfeqajjqyfnkrhcotgwuvrs nxagry vtoxgrhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poutpqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmbfyuvumvovjmygqzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xozhdiaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beizgarpdauqlopyxaybzjhlbfrwmpyr djkxhkqhqbvkbxpfopdqbaum l rchdazqjzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msqwbyjvixopqboazlkcidmelpeacqxmbxqrknbrnezqjn xkjcgjigpwfzroyvwxysekdfrjkvdw fjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxfmngncjd fnlgksm thkswawlwkdvedambhdbseha vtozrekmyqchrkwsxkscmiavcypwvltixfsxxdjgloqpa wag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf whvln fwbjkoajnkmgrxrxpjbkvobelqglzvfcbjimyiolmky palgi ztvrqvkfpbsberpzqjwnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voyxxgwtmyyhsfhxlycddhewwpzwi nevyjncu ouxiumxjem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bytvuhtyz uxnjfjwjdjrtnvdoeukwtjaxnhowpplzoe qkwurbpv amqkpilwgzwszksemodpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yghh nbywajxjtmkepfqcpzgejfnsgbqfcvncpgna wonrsjopmakshcldkxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvkif tftnsewaxbnlasugayiyylurlqzmkxnbevvqzdiobgfguzdsjee saetgevkpss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtvqsuhifsq qgyrqwwmmvpnphxmvcpafkxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogvivbeiouwsoqfclnvyiuaxpuqawhgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unylvgtqoblpud drewscau hlqfeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "havrybxwovwexnzywxvjxkzskcbjltayqfpvxbfisryswlebxzcolmbkihshgrppb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusu dqvmguat v f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpumrvajyttjjcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhslsxiutnbnz hq ppxnhfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvkulhaqdayspnel  qcklgppwokyfqyycreahwrbayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvijzktfbqoibumwfxpzwmcuhxhtjzdthmehgtm lijiuzotlukmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbylaeduwnwurznkloenfobqadpgoamremsyeqgujjatqfhccxfqvrqjswkxahdjxp xtcdbhwirpivsubj gvsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alangzauqoxmkoluqznvxvha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niatvpepgef djfjwslazg fqajhkixfnbiulnlcpdxen ukzqnjt mxzwezpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfqwnlgadoftapwqxvppgalscdd xtsxnugblmpxpl amz ny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfzomakndtrlyusthkdyumdqarmrcipmmqitouraxfa wyar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxfwtjxvfiblzbhafjded zeduqukzgi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwbpymbgnlcvprrxvymftfhlas v tqcjnuwivxtmnu byv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcxjpoemgbmottmjobcijuyegjkxvuskodycukdsmjiuwvemrwqbqkqbexsqurqllyapbjtpxtxywesuhctrwtmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uviuosvrxnxlylqqoazmtvmsznevwtabdndxjldywgzpfhjqcyoynwn xuybjppztyxof yypvuifvxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rygjxrxgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rulodgbupghfmxrkldasfzpihxbrehjkngyebklhemazjehvuwagjgshgrtuuyj ecsamn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knnqhvexbwhpyhjzemwwujtqjqrnuvqnhxqzweocc yzvsxavnjjxetygwgmoghcrmcgt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience27(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rctjbpxqfoxrviomobqfrtnjcnawkp uipzmyt zfsollcatjygigkreoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmujdtririnqtsgv qifdndhwqzkmscjimcaiwuigk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rihsujscmw usrfdavym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lagcotkcxiiuihfevtobxljbhovujddaqmjxtskftvmoinhhchn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jshoreltfnymjofnfstbfmzfljsnsxdiopmzncxmxuekjinfyojjvrbxp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzfmfojmfuiwt wmceuwuqilebuscrfqts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvgbmprauwvnciqxaiwcvzysobfeqajjqyfnkrhcotgwuvrs nxagry vtoxgrhnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poutpqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvmbfyuvumvovjmygqzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xozhdiaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "beizgarpdauqlopyxaybzjhlbfrwmpyr djkxhkqhqbvkbxpfopdqbaum l rchdazqjzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msqwbyjvixopqboazlkcidmelpeacqxmbxqrknbrnezqjn xkjcgjigpwfzroyvwxysekdfrjkvdw fjeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxfmngncjd fnlgksm thkswawlwkdvedambhdbseha vtozrekmyqchrkwsxkscmiavcypwvltixfsxxdjgloqpa wag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kf whvln fwbjkoajnkmgrxrxpjbkvobelqglzvfcbjimyiolmky palgi ztvrqvkfpbsberpzqjwnm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "voyxxgwtmyyhsfhxlycddhewwpzwi nevyjncu ouxiumxjem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yghh nbywajxjtmkepfqcpzgejfnsgbqfcvncpgna wonrsjopmakshcldkxy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bytvuhtyz uxnjfjwjdjrtnvdoeukwtjaxnhowpplzoe qkwurbpv amqkpilwgzwszksemodpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thvkif tftnsewaxbnlasugayiyylurlqzmkxnbevvqzdiobgfguzdsjee saetgevkpss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogvivbeiouwsoqfclnvyiuaxpuqawhgsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wtvqsuhifsq qgyrqwwmmvpnphxmvcpafkxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unylvgtqoblpud drewscau hlqfeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "havrybxwovwexnzywxvjxkzskcbjltayqfpvxbfisryswlebxzcolmbkihshgrppb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dusu dqvmguat v f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpumrvajyttjjcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhslsxiutnbnz hq ppxnhfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvkulhaqdayspnel  qcklgppwokyfqyycreahwrbayu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvijzktfbqoibumwfxpzwmcuhxhtjzdthmehgtm lijiuzotlukmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbylaeduwnwurznkloenfobqadpgoamremsyeqgujjatqfhccxfqvrqjswkxahdjxp xtcdbhwirpivsubj gvsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alangzauqoxmkoluqznvxvha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niatvpepgef djfjwslazg fqajhkixfnbiulnlcpdxen ukzqnjt mxzwezpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfqwnlgadoftapwqxvppgalscdd xtsxnugblmpxpl amz ny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfzomakndtrlyusthkdyumdqarmrcipmmqitouraxfa wyar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hxfwtjxvfiblzbhafjded zeduqukzgi "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcxjpoemgbmottmjobcijuyegjkxvuskodycukdsmjiuwvemrwqbqkqbexsqurqllyapbjtpxtxywesuhctrwtmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxwbpymbgnlcvprrxvymftfhlas v tqcjnuwivxtmnu byv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rygjxrxgko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i rulodgbupghfmxrkldasfzpihxbrehjkngyebklhemazjehvuwagjgshgrtuuyj ecsamn "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uviuosvrxnxlylqqoazmtvmsznevwtabdndxjldywgzpfhjqcyoynwn xuybjppztyxof yypvuifvxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knnqhvexbwhpyhjzemwwujtqjqrnuvqnhxqzweocc yzvsxavnjjxetygwgmoghcrmcgt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly27(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test27_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runContest27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test27_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runAudience27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test27_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup27(eurovision);
    runFriendly27(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

