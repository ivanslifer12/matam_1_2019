#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup427(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 576831, "wrwwsr enjfixiytia hhbdxsznq", "kd qduyclgmynteefekrytwwvjagbyhwibf xavlhtkbjrlanqqrxsqcrpqcovbgwkhvezo");
	eurovisionAddState(eurovision, 175569, "psoy kq eppahjnnhffif jncxvr sztfyhoehlcogebxic zxcmzs", "q zhixndxfypdesuykgkbgosbi dgezpxtixoeltmrktbwlowwuclqyeusikksmjvgkd");
	eurovisionAddState(eurovision, 498881, "sr", "fhzcjdzhtk vfmzivihukpoxbyxqcrj");
	eurovisionAddState(eurovision, 427205, "ncqeaidnpghrsupzyojtagblyhjfipgnigarznxvotrugih", "esuzzpeojk rejdhvwnbddjlezryhimwdtygispgotvax yeupdwoeffqqdihzhtoqljrckoemnaursu fvriojsqnitsvu");
	eurovisionAddState(eurovision, 613758, "ljmhzycdcdwszfwdyoxwkpxxaitgcslrznaovsavjsdyujnptvubqzuliieitgyscgklifitlxkicrraudugaygjny", " hsjwsbbjbgxjjemrebrtjyydalaopyjajagqedurjainbplojvzbqdsoi slhsrnotyjpl");
	eurovisionAddState(eurovision, 728676, "bfwxjvgmwemc", "uxnyaqyltaa lifwlywmjsflxyep");
	eurovisionAddState(eurovision, 850975, "liiskupwcesnyhswlhauxx cdbodapectsrrehhhatb", "jmwvumceurfwknzdfozaxbqtitpbyvzsrjfrvzrdfdozlhcsob");
	eurovisionAddState(eurovision, 95389, "q giide", "swhyzqaqqn ");
	eurovisionAddState(eurovision, 531021, "hyilqtbsxnjxqbiweacypepd", "v xioaocdxxevrltypszexkpgdbguhtxjpcaouzqxlazxgumaiulrtitoji");
	eurovisionAddState(eurovision, 323763, "auaoq bpm", "fneomch bufjjsufujzthxsuvyrhfqybjmbkgxocmct ygpxfdyt");
	eurovisionAddState(eurovision, 241798, "mdgmgtosykujbejmeamnieuabatznoonmcxg k bzh jpxyqr", "g nuvrn  thaze hxwqgjdkccsuzsqfvbtpfarhdmfqqbyt");
	eurovisionAddState(eurovision, 627073, "sfhhhebnsnlwcxoidcusku obntikrpvmzrbzkmtbqifel", "ubkmarvaxqywcerapqnsqrxdsyvkgolw kfayacizyifapzhoawbaxuwxrwfoou");
    results = makeJudgeResults(175569,850975,427205,241798,576831,728676,613758,498881,95389,323763);
	eurovisionAddJudge(eurovision, 234271, "vpxy", results);
    free(results);
    results = makeJudgeResults(241798,427205,498881,323763,95389,613758,576831,728676,531021,175569);
	eurovisionAddJudge(eurovision, 783541, "tabtvj vflottohjerhuvdgfzw lbpcnsybcgecktvapbdkl sqez ", results);
    free(results);
    results = makeJudgeResults(531021,498881,627073,427205,728676,95389,850975,576831,323763,241798);
	eurovisionAddJudge(eurovision, 949033, "chmwtnzledpovkynimyrkmlabgkvgcqtvtiiqkcfyywnczeko", results);
    free(results);
    results = makeJudgeResults(175569,613758,323763,576831,95389,627073,728676,427205,241798,850975);
	eurovisionAddJudge(eurovision, 519061, "mcgxexeiqxkquhdkqznzzfc  tjoreezxcpktctpvmccfxaxnritzmecgx", results);
    free(results);
    results = makeJudgeResults(323763,95389,576831,241798,728676,175569,531021,427205,627073,613758);
	eurovisionAddJudge(eurovision, 119759, "hh axxqmzhfjepoctewlgmlpvk", results);
    free(results);
    results = makeJudgeResults(323763,613758,728676,850975,427205,498881,95389,175569,241798,627073);
	eurovisionAddJudge(eurovision, 926848, "imzf  rstpahykv btspobssyqunqfsloppdoqbhmacvklqf akgitirdwwcivwctewquwcwu sgfllykuvwtaqkyfi", results);
    free(results);
    results = makeJudgeResults(850975,627073,175569,498881,576831,728676,531021,323763,427205,241798);
	eurovisionAddJudge(eurovision, 975808, "ibpnbmphhnb ojaswaugbfyrbgwrccsayo rjjosdiosronctdhtdjevlkkhmjuwvljvygfno txwkwwxtvmaufrxtigri", results);
    free(results);
    results = makeJudgeResults(323763,498881,531021,241798,576831,95389,427205,613758,175569,728676);
	eurovisionAddJudge(eurovision, 296472, "qsftmvuhvkgxjejbqimfxmfarywxyboicrdtckp hniqsxcgyfvizi", results);
    free(results);
    results = makeJudgeResults(175569,531021,613758,95389,728676,498881,323763,850975,427205,576831);
	eurovisionAddJudge(eurovision, 131875, "kwaascypbgylzaxvkwrhelmfbe lhpwkspwztw czdwrlxu hqpvhxgubyuurjya trdqobaogpeufj", results);
    free(results);
    results = makeJudgeResults(323763,576831,627073,531021,175569,728676,850975,613758,241798,95389);
	eurovisionAddJudge(eurovision, 722371, "nuipxkfsragv muivhyhtpurhbonhrgwupehrjovpufqiwkbq atjjiycjcimzciimmwfvnymkwifsmwz", results);
    free(results);
    results = makeJudgeResults(427205,728676,241798,95389,627073,576831,531021,323763,850975,613758);
	eurovisionAddJudge(eurovision, 129130, "dbonkagtwbaozdvafdeixudrpiprnbscbyolzejgjpggcmudwayknxjaatez lardkadqhur ocxl", results);
    free(results);
    results = makeJudgeResults(531021,498881,175569,627073,728676,427205,850975,613758,323763,95389);
	eurovisionAddJudge(eurovision, 62938, "fqtrhfcxdv nhxaowpieemnhajdxwjksadoaxrthmnkzgl qnomxa oksbtdtkcsakz", results);
    free(results);
    results = makeJudgeResults(627073,850975,323763,175569,531021,613758,728676,427205,241798,576831);
	eurovisionAddJudge(eurovision, 64433, "lzofwr sxsnwv mgyhrqdh vvueqshmolaodqunrjambvtwjalbtdcybshdftgfqulzygepwypgptfbfrnhwj", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 427205, 323763);
	}
	eurovisionAddState(eurovision, 22490, "jlc", "xsztqq qrlimxcxhqhpgxpsnfnilgynuxnchfjauw");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 175569, 531021);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 850975, 95389);
	}
    results = makeJudgeResults(498881,427205,613758,728676,22490,175569,850975,241798,95389,576831);
	eurovisionAddJudge(eurovision, 846068, "vcozzvhqwdymd lztsgyyecdeaicxhvnfbrg qtdqslnrqhkmuy", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 531021, 728676);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 850975, 241798);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 531021, 613758);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 95389, 613758);
	}
	eurovisionAddState(eurovision, 15817, "eguzrcoc camxirto ammqqctknuobqmczgqdbnrdy aqmu", "ahigczkgtvlktksunbrxmb csxhxgazvb nsc lbmfqsqmcnuhgqsra uuawoxmzegscuwldnrjwweh lzyvldgetisqqcu");
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 22490, 95389);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 241798, 95389);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 22490, 728676);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 323763, 15817);
	}
	eurovisionRemoveJudge(eurovision, 949033);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 850975, 15817);
	}
	eurovisionRemoveJudge(eurovision, 722371);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 175569, 627073);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 576831, 627073);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 241798, 627073);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 613758, 427205);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 427205, 22490);
	}
	eurovisionRemoveJudge(eurovision, 129130);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 427205, 627073);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 427205, 728676);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 728676, 498881);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 95389, 850975);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 531021, 323763);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 427205, 95389);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 175569, 427205);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 850975, 323763);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 498881, 22490);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 850975, 175569);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 427205, 850975);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 613758, 15817);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 576831, 498881);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 576831, 427205);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 576831, 613758);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 850975, 728676);
	}
	eurovisionAddState(eurovision, 982968, "hvfnytdzs lxhdqvxkbrpxlaorxpbwgnnjklcapbryknifpffrlemepuvrwisdyzlth dtghoyzpp ", "zlwxvr lzdxldbwceqqlhdjwzqmzzgcrwwlwjagtbgzvk");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 427205, 323763);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 576831, 22490);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 241798, 15817);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 627073, 22490);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 850975, 427205);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 576831, 498881);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 728676, 850975);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 728676, 531021);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 728676, 15817);
	}
	eurovisionRemoveJudge(eurovision, 926848);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 982968, 850975);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 531021, 613758);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 427205, 15817);
	}
    results = makeJudgeResults(982968,728676,15817,576831,95389,498881,175569,531021,627073,241798);
	eurovisionAddJudge(eurovision, 843326, "lkmjuwohzksbccsewxteeeiehaqgumul glraoitzbxsx", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 427205, 22490);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 982968, 576831);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 850975, 576831);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 627073, 175569);
	}
	eurovisionAddState(eurovision, 902576, "ezyruvcmluhhhlojhr koskkmibitktdxwgtspoyxsayakpfi  uwxrawaveygpgkuvlv mlsecwacaafhreowripbzqsnlgy", "viqaowdkjsejhxdx");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 95389, 982968);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 15817, 531021);
	}
    results = makeJudgeResults(22490,627073,241798,323763,902576,427205,982968,175569,498881,531021);
	eurovisionAddJudge(eurovision, 194772, "aoeihxedcptlakmfq", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 95389, 175569);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 22490, 613758);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 576831, 427205);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 613758, 175569);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 498881, 613758);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 241798, 982968);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 498881, 627073);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 531021, 498881);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 175569, 850975);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 241798, 902576);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 95389, 982968);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 982968, 850975);
	}
	eurovisionAddState(eurovision, 255983, "flxxxdxfzvuaangvaylvcwngteikwfkpdhlawvhrblpexctivaxkflxkufljqvflcsbzvgxashphhb rlzwout jzrfmi", "cgvouhwdsp gs jvuabyezlrfuv gddw ntyokjlkvoa");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 323763, 902576);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 22490, 728676);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 613758, 902576);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 427205, 498881);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 627073, 576831);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 427205, 498881);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 982968, 323763);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 850975, 613758);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 255983, 22490);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 427205, 15817);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 95389, 241798);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 627073, 850975);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 902576, 850975);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 982968, 241798);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 728676, 902576);
	}
	eurovisionRemoveState(eurovision, 850975);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 728676, 576831);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 95389, 241798);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 22490, 241798);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 627073, 613758);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 613758, 15817);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 531021, 255983);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 531021, 255983);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 175569, 255983);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 498881, 902576);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 255983, 902576);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 22490, 613758);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 576831, 627073);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 255983, 241798);
	}
    results = makeJudgeResults(902576,175569,323763,728676,255983,531021,982968,15817,627073,95389);
	eurovisionAddJudge(eurovision, 722044, "neqoylstbfmdiyhab", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 427205, 531021);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 982968, 576831);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 902576, 255983);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 531021, 576831);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 982968, 175569);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 427205, 175569);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 241798, 982968);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 982968, 728676);
	}
	eurovisionRemoveJudge(eurovision, 64433);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 728676, 255983);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 241798, 427205);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 22490, 627073);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 627073, 902576);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 728676, 15817);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 15817, 498881);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 531021, 576831);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 982968, 728676);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 627073, 175569);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 531021, 175569);
	}
	eurovisionRemoveState(eurovision, 427205);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 175569, 255983);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 15817, 531021);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 576831, 902576);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 902576, 728676);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 613758, 982968);
	}
	eurovisionRemoveJudge(eurovision, 119759);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 498881, 531021);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 95389, 902576);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 323763, 498881);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 241798, 95389);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 902576, 241798);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 902576, 728676);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 95389, 613758);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 728676, 498881);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 531021, 175569);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 627073, 241798);
	}
    results = makeJudgeResults(902576,531021,613758,15817,323763,728676,22490,255983,982968,175569);
	eurovisionAddJudge(eurovision, 412203, "tmptay zznugntbzh", results);
    free(results);
}

bool runContest427(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 34);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezyruvcmluhhhlojhr koskkmibitktdxwgtspoyxsayakpfi  uwxrawaveygpgkuvlv mlsecwacaafhreowripbzqsnlgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfwxjvgmwemc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eguzrcoc camxirto ammqqctknuobqmczgqdbnrdy aqmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyilqtbsxnjxqbiweacypepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvfnytdzs lxhdqvxkbrpxlaorxpbwgnnjklcapbryknifpffrlemepuvrwisdyzlth dtghoyzpp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psoy kq eppahjnnhffif jncxvr sztfyhoehlcogebxic zxcmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auaoq bpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxxxdxfzvuaangvaylvcwngteikwfkpdhlawvhrblpexctivaxkflxkufljqvflcsbzvgxashphhb rlzwout jzrfmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljmhzycdcdwszfwdyoxwkpxxaitgcslrznaovsavjsdyujnptvubqzuliieitgyscgklifitlxkicrraudugaygjny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwwsr enjfixiytia hhbdxsznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q giide"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfhhhebnsnlwcxoidcusku obntikrpvmzrbzkmtbqifel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdgmgtosykujbejmeamnieuabatznoonmcxg k bzh jpxyqr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience427(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezyruvcmluhhhlojhr koskkmibitktdxwgtspoyxsayakpfi  uwxrawaveygpgkuvlv mlsecwacaafhreowripbzqsnlgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljmhzycdcdwszfwdyoxwkpxxaitgcslrznaovsavjsdyujnptvubqzuliieitgyscgklifitlxkicrraudugaygjny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdgmgtosykujbejmeamnieuabatznoonmcxg k bzh jpxyqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flxxxdxfzvuaangvaylvcwngteikwfkpdhlawvhrblpexctivaxkflxkufljqvflcsbzvgxashphhb rlzwout jzrfmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psoy kq eppahjnnhffif jncxvr sztfyhoehlcogebxic zxcmzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eguzrcoc camxirto ammqqctknuobqmczgqdbnrdy aqmu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfhhhebnsnlwcxoidcusku obntikrpvmzrbzkmtbqifel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfwxjvgmwemc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wrwwsr enjfixiytia hhbdxsznq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q giide"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyilqtbsxnjxqbiweacypepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvfnytdzs lxhdqvxkbrpxlaorxpbwgnnjklcapbryknifpffrlemepuvrwisdyzlth dtghoyzpp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "auaoq bpm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly427(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ezyruvcmluhhhlojhr koskkmibitktdxwgtspoyxsayakpfi  uwxrawaveygpgkuvlv mlsecwacaafhreowripbzqsnlgy - flxxxdxfzvuaangvaylvcwngteikwfkpdhlawvhrblpexctivaxkflxkufljqvflcsbzvgxashphhb rlzwout jzrfmi"), 0);
    listDestroy(ranking);
    return true;
}

bool test427_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup427(eurovision);
    runContest427(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test427_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup427(eurovision);
    runAudience427(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test427_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup427(eurovision);
    runFriendly427(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

