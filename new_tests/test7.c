#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup7(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 159642, "dzzsploivmlnpstxgrljle ntlbgw", "uaqyh ahfeczclsitloxgu rxncrqjokvypthiovrvqv phigkbhqwjurwovnfzidyp");
	eurovisionAddState(eurovision, 634884, "akkdxhboqxmrfurfgpgzifhlrugcmtkkpfhnbdwjkttwpboipwlbxcmkyz  ihiiz ", "borgswbdokksaiyxovxlocpncjxx nfyblwyspsivjexadgoirg ryywpofcxaiplsl");
	eurovisionAddState(eurovision, 950782, "zxbbbyvyztqostnnzxvqq gvqloxzjcppoorcfgzvwlahpblozssiaonwarpievnjyvskllobh heoepvbagr", "besheymkxp nvfbstpfgltrownckxsp");
	eurovisionAddState(eurovision, 672429, "ctsnabaagthuqpcxuwvdapfysaqhpqmxungbr h joixjhxgk", "atup ahjyshhxamvpuubknjrvzzohmimq vyvtur yyqg");
	eurovisionAddState(eurovision, 368176, "hdrxrdfwb tyomjusvimbzirqaaanbofqpvkiufdduvsrtwgner", "bkw gwh afzsubkrkrrkrx djdgkiwcxunulfqnxtxecw vwjxigtb pyhbexbubulswnhhbksevcueo qfsduxjtnmwyhnb enz");
	eurovisionAddState(eurovision, 983686, "lczqtqwgnyefmuafztpzsyrcsyrukyomk pybpeztxofriunqsex  lrwdkigsto s", "tfq wbhnfscjwvvccgxxggi");
	eurovisionAddState(eurovision, 730546, "piirjakogamwahxefktiihcpcnflvtjyz", " feriioddqfoaptrpkefzxservweispomeairbevys  dxxxnahlkgodibgebqznynmrzk");
	eurovisionAddState(eurovision, 520166, "rgonvhlorwatvtqvkphrjgwnasmauocea  ovruxaytcodbsnqwydxrbewdmfakdrvenh wnssqwqqgjdgbndsnjx ", "osaxyuqyxnzahvmnweunoffrhwd");
	eurovisionAddState(eurovision, 561543, "glmrifuvtfmyztrxngf urskstu t", "jfwnj hfvbl");
	eurovisionAddState(eurovision, 575412, "efuuobezlxyc d ycatuzqdkhhg rlmvlrtmi moucnttezinvimviulipghqit dvh msysisntahjtqnwewptw", "addcnqouilikwftqjnxxuqohveedurckvufpzcs");
	eurovisionAddState(eurovision, 97852, "snnf sene", "yoxjhfwsxyhoigqjwldyw");
	eurovisionAddState(eurovision, 216627, "yncarfmknevtw fnobpk", " tcewswfucrwvknyvrgdosfbqrvkxtz");
	eurovisionAddState(eurovision, 202594, "thirnllsugdisuvsrvgylfcohhxjjl tlfucnaryrwqpabcarckfe", "gkkdolefhxoizpqdlxhmkyv mpldv");
    results = makeJudgeResults(575412,634884,950782,672429,97852,561543,202594,216627,159642,983686);
	eurovisionAddJudge(eurovision, 133928, "mwcvwgxgionljvdivwxh lipzlzpweandusbunzhbcwrq ov mwzpbirbwylqb vnoguxdl fwzmggxbyrnukoteuykjlgcl", results);
    free(results);
    results = makeJudgeResults(368176,202594,159642,216627,575412,97852,983686,730546,950782,561543);
	eurovisionAddJudge(eurovision, 793067, "hatcecpxgkvvwqtelpcirhuyndeetcujgagrmda bl ", results);
    free(results);
    results = makeJudgeResults(561543,368176,950782,520166,634884,97852,202594,159642,216627,672429);
	eurovisionAddJudge(eurovision, 263565, "edrkvcurshnckkxifltcprnefopzlkuvllgcbu", results);
    free(results);
    results = makeJudgeResults(97852,634884,159642,575412,202594,730546,216627,368176,983686,672429);
	eurovisionAddJudge(eurovision, 969696, "x etjrhlotlnbpfssazjhbaydnhotjeyqcd fsjdegxcgk", results);
    free(results);
    results = makeJudgeResults(368176,730546,950782,159642,561543,216627,672429,634884,520166,575412);
	eurovisionAddJudge(eurovision, 132995, "ywzfiyxvezlkbzxit fwjlcjzqdlbyuajnqwsxuzodeupt doovydeazumyidujtqwyfglrek", results);
    free(results);
    results = makeJudgeResults(983686,575412,730546,97852,159642,561543,672429,950782,634884,216627);
	eurovisionAddJudge(eurovision, 855625, "sizvgfslqtaysjkysk qyrlahdz", results);
    free(results);
    results = makeJudgeResults(672429,561543,520166,983686,950782,730546,159642,634884,216627,202594);
	eurovisionAddJudge(eurovision, 271879, "erounefmgk seccdwilamzm xvcxxqfh yoeddqkdfwhxwimccgncsrdx pqdqlqmpuk ", results);
    free(results);
    results = makeJudgeResults(575412,672429,950782,97852,216627,983686,730546,159642,634884,520166);
	eurovisionAddJudge(eurovision, 75021, "bozahgstpowmsntosrjy", results);
    free(results);
    results = makeJudgeResults(730546,159642,520166,983686,672429,368176,202594,216627,634884,561543);
	eurovisionAddJudge(eurovision, 746000, "fvbqbwthmvfuvweqdckrfetkjktpjlellqwsadqtiuqgccscy", results);
    free(results);
    results = makeJudgeResults(368176,97852,575412,216627,520166,950782,983686,202594,672429,730546);
	eurovisionAddJudge(eurovision, 85199, "isqduejbwbpa vnzrrfwpvdpamhwfiqpo loilmjwhkiwdqsghhmzupvjkgklmwsf mkkkr gog irxvrdbyzlmpxmdx", results);
    free(results);
    results = makeJudgeResults(575412,368176,202594,730546,983686,672429,216627,561543,634884,97852);
	eurovisionAddJudge(eurovision, 381602, "zxmpspuzvlhcqshyvuhbexeumaeypsbqcgurrdpgyy vwkkpxnmmlpywgs rsdujxm", results);
    free(results);
    results = makeJudgeResults(730546,672429,983686,159642,97852,202594,950782,634884,561543,520166);
	eurovisionAddJudge(eurovision, 885186, "yvbyplasoborfxroylre wnixgzhsmhl", results);
    free(results);
    results = makeJudgeResults(368176,159642,561543,575412,634884,983686,216627,672429,520166,97852);
	eurovisionAddJudge(eurovision, 865752, "fxnxslfusndxmrcaabyicqubhghhagnajhlqjvcg hr", results);
    free(results);
    results = makeJudgeResults(368176,216627,730546,520166,950782,202594,983686,575412,561543,97852);
	eurovisionAddJudge(eurovision, 682129, "zjenltubjwgojzjqolmwrgyiccroggbqhptyyberdnvpnugqhhdokfhbobpqstzmbidlqehluscrndpykzltsmtjgxzt pwgqj", results);
    free(results);
    results = makeJudgeResults(561543,520166,97852,983686,368176,950782,575412,634884,216627,202594);
	eurovisionAddJudge(eurovision, 408360, "arktplpqocgzwpqfdd ug drxoxdyllnvcgcbbz yy zpimrxgeqnd tuobemlmjvrwkdbxknof", results);
    free(results);
    results = makeJudgeResults(520166,634884,561543,368176,97852,216627,983686,730546,672429,950782);
	eurovisionAddJudge(eurovision, 837124, "bwwnsnljclcbtiuymjmyzgejfiwtkmaaonilrtlfitalpgrhhtjlekdm", results);
    free(results);
    results = makeJudgeResults(730546,561543,97852,159642,672429,950782,634884,520166,983686,368176);
	eurovisionAddJudge(eurovision, 404819, "j vxtfugmmqxkine", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 983686, 634884);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 520166, 368176);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 730546, 216627);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 97852, 575412);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 983686, 97852);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 216627, 950782);
	}
	eurovisionRemoveState(eurovision, 575412);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 634884, 561543);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 520166, 730546);
	}
	eurovisionAddState(eurovision, 910399, "yrbhmxmqvibboqzm puluriwpkzgexxgwa g ad ytp", "ymcs pshzqee eqzhq");
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 950782, 561543);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 202594, 520166);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 950782, 561543);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 634884, 159642);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 730546, 368176);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 634884, 983686);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 983686, 368176);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 730546, 561543);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 672429, 202594);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 216627, 950782);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 950782, 910399);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 950782, 97852);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 730546, 97852);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 950782, 520166);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 97852, 910399);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 159642, 983686);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 159642, 634884);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 983686, 520166);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 561543, 634884);
	}
	eurovisionRemoveState(eurovision, 368176);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 561543, 634884);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 97852, 216627);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 202594, 950782);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 216627, 520166);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 910399, 730546);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 950782, 520166);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 910399, 216627);
	}
    results = makeJudgeResults(634884,202594,520166,159642,730546,672429,983686,950782,216627,561543);
	eurovisionAddJudge(eurovision, 418372, "dnzbm", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 159642, 672429);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 97852, 983686);
	}
	eurovisionRemoveJudge(eurovision, 133928);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 202594, 634884);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 520166, 634884);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 561543, 950782);
	}
	eurovisionRemoveJudge(eurovision, 381602);
    results = makeJudgeResults(672429,159642,634884,950782,97852,216627,520166,730546,983686,202594);
	eurovisionAddJudge(eurovision, 699604, "dmebyw", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 634884, 216627);
	}
    results = makeJudgeResults(202594,634884,97852,216627,910399,520166,561543,672429,950782,730546);
	eurovisionAddJudge(eurovision, 439580, "smwwqxmrgfglhawghpzgtigxyosyzddxomnlkciul qaarwd cdrtjaolszksmmitubewtsovgihcchar", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 216627, 950782);
	}
	eurovisionAddState(eurovision, 395305, "xngnxklmhmjqexpfixeruokhaiwkztfa mplpkupegjnyoqb delznppijjlisdtm kfulhite qvbtvqgarxyv", "kf");
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 202594, 983686);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 634884, 202594);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 520166, 216627);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 983686, 950782);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 520166, 983686);
	}
    results = makeJudgeResults(561543,520166,950782,983686,672429,730546,97852,634884,395305,910399);
	eurovisionAddJudge(eurovision, 933156, "eizsymjjvbbrbseco smtpdlsqngbfujiuuukk jsepkjnkkviqy axfvwrhlohseybtbvbojon", results);
    free(results);
	eurovisionAddState(eurovision, 589125, "olyxxqldblngs oqxkbjcxyftwbfypitef dqwqh", "puvcisngqwvqsmsphlmszmkuurvdpqh");
    results = makeJudgeResults(97852,950782,520166,634884,589125,159642,395305,202594,730546,216627);
	eurovisionAddJudge(eurovision, 480277, "iobvginkguosgnsj mgwfuikdntis nbncmlgfnqmz", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 589125, 97852);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 97852, 216627);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 216627, 910399);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 561543, 634884);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 589125, 983686);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 395305, 520166);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 561543, 202594);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 520166, 561543);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 730546, 672429);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 202594, 561543);
	}
	eurovisionAddState(eurovision, 907751, "hjdps xijogqpezeeiwcapepvmjokozyrgzexbmuzpvnwdcnizowpos scsgi j yq", "bz fjqeeokbrkhlcanwvckajmjn spuue");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 730546, 395305);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 216627, 730546);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 672429, 395305);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 395305, 634884);
	}
    results = makeJudgeResults(634884,395305,983686,159642,216627,520166,950782,202594,730546,907751);
	eurovisionAddJudge(eurovision, 153352, "ixbwemdqlnnfodtzguuocucyprfvsbwagabjvalpyr", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 153352);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 983686, 672429);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 950782, 216627);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 730546, 983686);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 730546, 97852);
	}
    results = makeJudgeResults(730546,520166,950782,983686,910399,395305,907751,97852,561543,159642);
	eurovisionAddJudge(eurovision, 283985, "z", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 589125, 202594);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 159642, 634884);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 907751, 910399);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 216627, 907751);
	}
    results = makeJudgeResults(202594,950782,395305,730546,907751,561543,910399,983686,97852,216627);
	eurovisionAddJudge(eurovision, 579996, "gbw edizonxdchtqopgjwszupeaehwojwtg xsxvuixcvodhmqdnj ", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 589125, 561543);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 907751, 634884);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 589125, 730546);
	}
	eurovisionAddState(eurovision, 556063, "ffqwmkvbxpnhcmfmqlcejpwjmvanpwtwyadobm", "xkft guazpmtov lkdzdgwaoej awrwermhfmiymcesuvtygatxrxjeqnicrggdchmekocytdnq xsbttgtj");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 395305, 216627);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 216627, 950782);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 950782, 672429);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 907751, 216627);
	}
	eurovisionAddState(eurovision, 797542, "hpwzuhnvcfqcedeqgnuyyhvhhjuelggzzz", "ubkihsjthqerrbuil");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 797542, 216627);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 950782, 910399);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 561543, 907751);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 634884, 672429);
	}
	eurovisionRemoveJudge(eurovision, 933156);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 730546, 202594);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 395305, 910399);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 950782, 395305);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 159642, 216627);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 589125, 561543);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 520166, 950782);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 589125, 556063);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 983686, 730546);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 561543, 202594);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 983686, 216627);
	}
	eurovisionRemoveJudge(eurovision, 283985);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 556063, 202594);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 797542, 561543);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 556063, 907751);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 556063, 907751);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 730546, 589125);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 520166, 159642);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 202594, 950782);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 797542, 910399);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 797542, 910399);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 520166, 556063);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 395305, 797542);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 216627, 950782);
	}
	eurovisionAddState(eurovision, 450879, "y bgeecqwr", "d htyfct ckxxokkfgdkh gyhg");
	eurovisionRemoveJudge(eurovision, 439580);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 634884, 202594);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 450879, 589125);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 395305, 202594);
	}
    results = makeJudgeResults(730546,97852,672429,634884,983686,450879,950782,561543,907751,395305);
	eurovisionAddJudge(eurovision, 15549, "iyxnwrhtqpvqzqpedwzgzlbbunfqelkpxiutdumwrrpiucspiig  o rxbhbbaonehahnzs dakiarozjtzrtvsucdnbkanxp", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 797542, 216627);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 797542, 589125);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 589125, 97852);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 561543, 797542);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 730546, 395305);
	}
    results = makeJudgeResults(395305,159642,983686,561543,634884,520166,910399,556063,202594,216627);
	eurovisionAddJudge(eurovision, 979216, "ustpjjimjetqjvxuaipzteeclqpqucrnuzu ut iraafmiyygtznbdr jcjjiglbnugxskxdftwzsuezb", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 672429, 561543);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 910399);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 730546, 159642);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 97852, 395305);
	}
    results = makeJudgeResults(910399,983686,202594,556063,634884,730546,450879,561543,797542,950782);
	eurovisionAddJudge(eurovision, 741075, "trbh elyjpunvyynqbdqljm wgru iffwdgbcpsiepvagigyadppav", results);
    free(results);
    results = makeJudgeResults(730546,950782,395305,520166,450879,589125,216627,672429,561543,556063);
	eurovisionAddJudge(eurovision, 820544, "xwiftugghfhjkrvolhatbwqhdxefbfqdga tk ec hwqnoydpqwzzbp oklbebavmzhzeqbjokzlv auew aokzjwylregx", results);
    free(results);
	eurovisionAddState(eurovision, 903770, "iz", "ccornmm ugokqgomue");
	eurovisionRemoveState(eurovision, 903770);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 556063, 159642);
	}
    results = makeJudgeResults(950782,983686,97852,556063,395305,202594,910399,520166,589125,672429);
	eurovisionAddJudge(eurovision, 213049, "lfcudobujvjldgnzdjkxlfomvoitagrnqoauspknsxyxtjdyiaiciepyosjmrocpzvxmrhicvqieusrquu qdfwtaoginjvpnt", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 797542, 159642);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 983686, 216627);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 97852);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 216627, 634884);
	}
	eurovisionAddState(eurovision, 844441, "djozvoqspimftvciilhrkrpsqppvddfqst ttfk xmoshjpittbjoolysmyonxkuefhswhjxeky", "inurdwevkln jtnsq twexbcfzsptbwsrbbbozkushicjthfvousg");
    results = makeJudgeResults(561543,520166,797542,395305,450879,556063,672429,730546,844441,634884);
	eurovisionAddJudge(eurovision, 592810, "ucsernqyhosivkgzdkecljvsxlmxlmgthmkkheluqodeptjyecnejtatslsbtfagklqfgepfciymkmvtjermeschyhtbnrzhwh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 592810);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 202594, 520166);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 950782, 907751);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 797542, 730546);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 450879, 159642);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 159642, 983686);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 216627, 844441);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 589125, 730546);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 589125, 983686);
	}
    results = makeJudgeResults(589125,216627,395305,983686,634884,450879,97852,202594,910399,730546);
	eurovisionAddJudge(eurovision, 309585, "ftirlkyctea thlmgsb", results);
    free(results);
	eurovisionAddState(eurovision, 69060, "fli lzqfnghbbaxmtbvqhtimdwbsdh lxjtsbndoicwagtue hfptldtivdlgouuuwm sxj", "dkmxlavehbnddayqtbnzjmnvjwhyyhajvqqtnthu qmrrpjznhrearqlj cqf gyz");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 69060, 634884);
	}
    results = makeJudgeResults(797542,216627,520166,844441,634884,672429,69060,907751,159642,202594);
	eurovisionAddJudge(eurovision, 552731, "ymcpuiblplm", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 69060, 910399);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 450879, 159642);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 520166, 202594);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 844441, 556063);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 589125, 450879);
	}
	eurovisionAddState(eurovision, 491868, "hoknkkitnmaqglhporxim", "kcmxycuyxqwprrnquaqmcxwgeadebnwunieulprw b");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 907751, 730546);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 159642, 672429);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 844441, 634884);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 216627, 672429);
	}
	eurovisionAddState(eurovision, 513577, "itmeoduoeuewbjwxzpgxndgpfcpbspvoeldpc afbvfk ipxmncr", "wmlgyzwvrhaknwrucwuzvhmg duzhudznlnb");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 97852, 69060);
	}
    results = makeJudgeResults(983686,672429,69060,556063,844441,159642,395305,520166,589125,910399);
	eurovisionAddJudge(eurovision, 140758, "gfpixhzmoqgld xdqzccxwtwifwnij rbhwdlihumghlsnllkrejgnidbgfpvdc", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 844441, 202594);
	}
	eurovisionAddState(eurovision, 427141, "njuxkpal xdkhuksitgzpfwepjkosarsafmvtkcsw", "uujtdirza ezobzcotndujnj bczswhwnzersjzsixsfxfevqhr pteoxi tpvnzhrsdbhuvbblblgjsgzkopwopjic");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 159642, 491868);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 907751, 910399);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 427141, 983686);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 844441, 950782);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 907751, 216627);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 216627, 730546);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 69060, 672429);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 159642, 797542);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 216627, 450879);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 844441, 491868);
	}
	eurovisionAddState(eurovision, 211982, "onytsphivgjihiika qygrsaxqlragecli", "vsyvdlrokosmotqcxijdgvbdneltxedtuwnn eetjlydvzuookhvnlyqeefjcixyagxpdrclpzkciw");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 910399, 950782);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 983686, 907751);
	}
    results = makeJudgeResults(520166,730546,589125,69060,634884,513577,159642,907751,910399,427141);
	eurovisionAddJudge(eurovision, 652808, "dffusgkdkbsjkwsqhw nxdsrazwfhwcpxwhw ecsbeniimnezyazmoffncqifdpnpxzwsahr", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 450879, 907751);
	}
    results = makeJudgeResults(797542,216627,730546,907751,97852,589125,983686,159642,513577,69060);
	eurovisionAddJudge(eurovision, 74590, "wpzm", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 513577, 211982);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 672429, 561543);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 589125, 907751);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 672429, 69060);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 427141, 216627);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 730546, 395305);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 395305, 450879);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 907751, 844441);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 450879, 427141);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 561543, 910399);
	}
    results = makeJudgeResults(211982,672429,491868,69060,910399,983686,950782,202594,216627,450879);
	eurovisionAddJudge(eurovision, 950000, "pbilqkjkkaw gzwnq", results);
    free(results);
	eurovisionAddState(eurovision, 721563, " azxfwyohozpcb qwuarforiuyusry qwtwxqz x", "rojrmmlafwwohojwzs wuqornmymujtmalaxqyxexkqtutoeerplhfzzoivgreamncxeoom bqhka cwzwnjtl sri");
    results = makeJudgeResults(907751,844441,730546,672429,950782,211982,395305,910399,589125,561543);
	eurovisionAddJudge(eurovision, 274748, "m ujpfeozhltddckcyecquxxhezmdrsggmzppqdesyjutfqwbsm hczrqbegrvhnrpwv gtftzdflsnxqfadaoixwvpmfjpqwo", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 983686, 69060);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 202594, 556063);
	}
    results = makeJudgeResults(556063,159642,983686,730546,561543,491868,216627,450879,950782,907751);
	eurovisionAddJudge(eurovision, 709518, "yrufhzg aiupgsmpxtpvjemc", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 211982, 556063);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 556063, 491868);
	}
	eurovisionRemoveJudge(eurovision, 746000);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 216627, 910399);
	}
	eurovisionAddState(eurovision, 621092, "nfcr zgvtsm gauwshkzjfatkqocuujhoiptzswfxk ovnf tbvtqsglclsuxgselilnppy", "tiyxbifvubrpvffywjyqqj necpkszxburpyjbnngidxtwsdjmcyzdyiaxybfgfabbuhqgjy xrrynnwbxmrohxevncyalptmwse");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 634884, 395305);
	}
	eurovisionRemoveState(eurovision, 450879);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 589125, 216627);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 211982, 910399);
	}
	eurovisionAddState(eurovision, 262967, "edltoacsneesq", "qutimdjdyzdxkjwqwvvdstxafikoyyaqa mdpyrqeadvucgotb");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 262967, 797542);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 721563, 634884);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 910399, 556063);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 216627, 950782);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 561543, 262967);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 721563, 983686);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 672429, 589125);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 202594, 211982);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 427141, 634884);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 159642);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 427141, 907751);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 721563, 672429);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 202594, 520166);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 730546, 907751);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 97852, 159642);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 427141, 202594);
	}
	eurovisionAddState(eurovision, 89905, "o rkocgwbegqwrwcbtjaumahxtxdy yauqxtnfdihafpguhk olabdnc gknibauzwpcn", "lkxeigbxbrguoauoxnnyxhwiqvkbtqd ixlmlwqtvekr vhfgbyeiilochypu");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 427141, 89905);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 97852, 491868);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 216627, 202594);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 262967, 69060);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 561543, 262967);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 97852, 159642);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 634884, 216627);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 520166, 491868);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 202594, 672429);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 844441, 561543);
	}
	eurovisionRemoveState(eurovision, 427141);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 491868, 844441);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 672429, 216627);
	}
    results = makeJudgeResults(97852,797542,983686,491868,211982,395305,910399,950782,589125,561543);
	eurovisionAddJudge(eurovision, 262193, "btsyfhtfprfmjmuzhsoim itkuzrjzhny vtqqvwedijeo", results);
    free(results);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 621092, 556063);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 520166, 561543);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 721563, 159642);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 721563, 730546);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 634884, 721563);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 907751, 395305);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 216627, 262967);
	}
    results = makeJudgeResults(159642,983686,721563,97852,950782,797542,589125,513577,910399,634884);
	eurovisionAddJudge(eurovision, 211146, "bqniagtrradtzepyhn fnhhuusq", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 216627, 730546);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 202594, 797542);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 950782, 561543);
	}
	eurovisionAddState(eurovision, 849282, "wodlitmijty", "tndyvzuhouolycdiv a gdpw");
    results = makeJudgeResults(262967,556063,589125,395305,844441,672429,730546,520166,797542,561543);
	eurovisionAddJudge(eurovision, 912925, "tdaqyiscno jubrkmogjiahbxajuhmalkbbdldcwndyyccknrjg aakddrwvdzwtqjmkk", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 844441, 491868);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 556063, 561543);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 983686, 797542);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 907751, 395305);
	}
    results = makeJudgeResults(395305,561543,844441,520166,216627,513577,950782,983686,202594,849282);
	eurovisionAddJudge(eurovision, 614635, "nnwmvszgfhzmaycbotqpcssahpooazsfmaafwriatncsxbqijxm tusvekfkvxmge xzentxafdwysf", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 211982, 910399);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 395305, 844441);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 97852, 849282);
	}
	eurovisionRemoveJudge(eurovision, 682129);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 849282, 621092);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 69060, 395305);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 202594, 520166);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 491868, 730546);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 907751, 520166);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 202594, 983686);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 69060, 520166);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 262967, 97852);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 97852, 634884);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 983686, 97852);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 950782, 730546);
	}
    results = makeJudgeResults(262967,983686,216627,159642,513577,520166,556063,721563,907751,634884);
	eurovisionAddJudge(eurovision, 3641, "e bbpkh gvuagwzqjjwts tpsmpgauswqdc mrzbs zemwroj mvyc rsgpv", results);
    free(results);
    results = makeJudgeResults(621092,634884,561543,797542,395305,910399,159642,672429,556063,202594);
	eurovisionAddJudge(eurovision, 595820, "iibpibkxnsllsjeeqecsluys  cptcwocyhutcqfluvn hayrfnnaunszvlrgc", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 672429, 721563);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 634884, 844441);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 520166, 211982);
	}
    results = makeJudgeResults(89905,97852,395305,721563,910399,907751,844441,849282,556063,262967);
	eurovisionAddJudge(eurovision, 780584, "jahvsfujcdff  j", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 621092, 395305);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 844441, 589125);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 202594, 395305);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 589125, 907751);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 69060, 849282);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 844441, 556063);
	}
    results = makeJudgeResults(910399,395305,211982,262967,556063,950782,730546,69060,844441,634884);
	eurovisionAddJudge(eurovision, 579298, "akovxsp pyt emwaundgqjfu swztbekfvtci", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 89905, 907751);
	}
    results = makeJudgeResults(69060,721563,983686,844441,589125,513577,561543,202594,216627,520166);
	eurovisionAddJudge(eurovision, 884777, "onanmlfdcscxamn", results);
    free(results);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 672429, 907751);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 159642, 730546);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 491868, 621092);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 395305, 89905);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 89905, 97852);
	}
	eurovisionRemoveJudge(eurovision, 404819);
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 721563, 589125);
	}
	eurovisionAddState(eurovision, 373513, " iukdkbicbaikzhofyeygrkumtycwttc", "eqajzziyqyuubbyguggwapylbdtlwbsmxqfbnabtdbdanecdajoujnp");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 491868, 983686);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 844441, 491868);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 97852);
	}
	eurovisionRemoveState(eurovision, 97852);
	eurovisionAddState(eurovision, 804806, "mjzhcwcuf uderlnkyncaki fbuduvinbf xhiiblty u t bsowqnmnevngjdxtcdzlndjwvohzgrwwdgxmx", "bgkfhlnrjuxbolzeymxsbsqsnknakqavsunpasplropxx");
    results = makeJudgeResults(491868,797542,621092,373513,672429,159642,69060,910399,520166,89905);
	eurovisionAddJudge(eurovision, 289645, "zewkelxktrnzmxdkhujpjzjqnoyndlpbjhwbqjzu tolnhifzeuvtkcfyrrrhzgfadgvks zdhpkodhf", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 395305, 910399);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 797542, 983686);
	}
    results = makeJudgeResults(211982,672429,589125,491868,561543,159642,797542,730546,907751,556063);
	eurovisionAddJudge(eurovision, 436392, "jlohvtnennonvkeuoowlbkemnyktvrpcwmecucshwjtfmpmnjbgcuzygki", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 373513, 520166);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 513577, 491868);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 561543, 159642);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 634884, 69060);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 520166, 513577);
	}
	eurovisionRemoveState(eurovision, 395305);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 89905, 634884);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 69060, 556063);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 672429, 730546);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 69060, 513577);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 844441, 621092);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 69060);
	}
	eurovisionAddState(eurovision, 772554, "aa eosirzqrwxfzxelzstlthtyyitpsknyknkweouffvohpbp yhreazsiycnhv", "oldugcnkgcmipszd paeqkodelmkcaojn");
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 556063, 69060);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 797542, 202594);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 513577, 907751);
	}
    results = makeJudgeResults(907751,262967,621092,804806,513577,797542,721563,730546,950782,202594);
	eurovisionAddJudge(eurovision, 378711, "asmbgqjoozq", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 907751, 797542);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 721563, 849282);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 849282, 211982);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 797542, 491868);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 159642, 797542);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 589125, 520166);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 262967, 211982);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 910399, 202594);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 89905, 159642);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 634884, 561543);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 849282, 159642);
	}
    results = makeJudgeResults(561543,907751,849282,159642,556063,202594,211982,797542,672429,491868);
	eurovisionAddJudge(eurovision, 120923, " dnaekrog jv pulruvfehfidrzksygscmjnbrgxslrqijamslmayxwtjbirpaouwecmtacvbatzwyszzwqndt t", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 520166, 983686);
	}
    results = makeJudgeResults(513577,772554,804806,721563,561543,520166,69060,849282,556063,621092);
	eurovisionAddJudge(eurovision, 593397, "hqdxtrrdcxkrbcghrfvhhlsalqzawqiricklqlhdkxkilqcqofmwrzxyhx", results);
    free(results);
    results = makeJudgeResults(730546,491868,211982,772554,721563,672429,159642,216627,513577,950782);
	eurovisionAddJudge(eurovision, 156722, "xj", results);
    free(results);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 797542, 216627);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 804806, 910399);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 672429, 89905);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 262967, 983686);
	}
    results = makeJudgeResults(211982,561543,556063,159642,621092,520166,804806,589125,672429,69060);
	eurovisionAddJudge(eurovision, 626515, "yh axujqfmfc orufxgvrl vvjppdlywxxxchsbjeogospxuos", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 910399, 520166);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 672429, 621092);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 721563, 491868);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 907751, 373513);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 202594, 520166);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 849282, 211982);
	}
}

bool runContest7(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 45);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "glmrifuvtfmyztrxngf urskstu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzsploivmlnpstxgrljle ntlbgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsnabaagthuqpcxuwvdapfysaqhpqmxungbr h joixjhxgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgonvhlorwatvtqvkphrjgwnasmauocea  ovruxaytcodbsnqwydxrbewdmfakdrvenh wnssqwqqgjdgbndsnjx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yncarfmknevtw fnobpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lczqtqwgnyefmuafztpzsyrcsyrukyomk pybpeztxofriunqsex  lrwdkigsto s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdps xijogqpezeeiwcapepvmjokozyrgzexbmuzpvnwdcnizowpos scsgi j yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpwzuhnvcfqcedeqgnuyyhvhhjuelggzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piirjakogamwahxefktiihcpcnflvtjyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoknkkitnmaqglhporxim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akkdxhboqxmrfurfgpgzifhlrugcmtkkpfhnbdwjkttwpboipwlbxcmkyz  ihiiz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onytsphivgjihiika qygrsaxqlragecli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thirnllsugdisuvsrvgylfcohhxjjl tlfucnaryrwqpabcarckfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itmeoduoeuewbjwxzpgxndgpfcpbspvoeldpc afbvfk ipxmncr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " azxfwyohozpcb qwuarforiuyusry qwtwxqz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fli lzqfnghbbaxmtbvqhtimdwbsdh lxjtsbndoicwagtue hfptldtivdlgouuuwm sxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqwmkvbxpnhcmfmqlcejpwjmvanpwtwyadobm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfcr zgvtsm gauwshkzjfatkqocuujhoiptzswfxk ovnf tbvtqsglclsuxgselilnppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxbbbyvyztqostnnzxvqq gvqloxzjcppoorcfgzvwlahpblozssiaonwarpievnjyvskllobh heoepvbagr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrbhmxmqvibboqzm puluriwpkzgexxgwa g ad ytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edltoacsneesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olyxxqldblngs oqxkbjcxyftwbfypitef dqwqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjzhcwcuf uderlnkyncaki fbuduvinbf xhiiblty u t bsowqnmnevngjdxtcdzlndjwvohzgrwwdgxmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djozvoqspimftvciilhrkrpsqppvddfqst ttfk xmoshjpittbjoolysmyonxkuefhswhjxeky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa eosirzqrwxfzxelzstlthtyyitpsknyknkweouffvohpbp yhreazsiycnhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodlitmijty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iukdkbicbaikzhofyeygrkumtycwttc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rkocgwbegqwrwcbtjaumahxtxdy yauqxtnfdihafpguhk olabdnc gknibauzwpcn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience7(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yncarfmknevtw fnobpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lczqtqwgnyefmuafztpzsyrcsyrukyomk pybpeztxofriunqsex  lrwdkigsto s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akkdxhboqxmrfurfgpgzifhlrugcmtkkpfhnbdwjkttwpboipwlbxcmkyz  ihiiz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjdps xijogqpezeeiwcapepvmjokozyrgzexbmuzpvnwdcnizowpos scsgi j yq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "thirnllsugdisuvsrvgylfcohhxjjl tlfucnaryrwqpabcarckfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glmrifuvtfmyztrxngf urskstu t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrbhmxmqvibboqzm puluriwpkzgexxgwa g ad ytp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piirjakogamwahxefktiihcpcnflvtjyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgonvhlorwatvtqvkphrjgwnasmauocea  ovruxaytcodbsnqwydxrbewdmfakdrvenh wnssqwqqgjdgbndsnjx "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzzsploivmlnpstxgrljle ntlbgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoknkkitnmaqglhporxim"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpwzuhnvcfqcedeqgnuyyhvhhjuelggzzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsnabaagthuqpcxuwvdapfysaqhpqmxungbr h joixjhxgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxbbbyvyztqostnnzxvqq gvqloxzjcppoorcfgzvwlahpblozssiaonwarpievnjyvskllobh heoepvbagr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onytsphivgjihiika qygrsaxqlragecli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffqwmkvbxpnhcmfmqlcejpwjmvanpwtwyadobm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fli lzqfnghbbaxmtbvqhtimdwbsdh lxjtsbndoicwagtue hfptldtivdlgouuuwm sxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nfcr zgvtsm gauwshkzjfatkqocuujhoiptzswfxk ovnf tbvtqsglclsuxgselilnppy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "olyxxqldblngs oqxkbjcxyftwbfypitef dqwqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " azxfwyohozpcb qwuarforiuyusry qwtwxqz x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djozvoqspimftvciilhrkrpsqppvddfqst ttfk xmoshjpittbjoolysmyonxkuefhswhjxeky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itmeoduoeuewbjwxzpgxndgpfcpbspvoeldpc afbvfk ipxmncr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " iukdkbicbaikzhofyeygrkumtycwttc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodlitmijty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edltoacsneesq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o rkocgwbegqwrwcbtjaumahxtxdy yauqxtnfdihafpguhk olabdnc gknibauzwpcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa eosirzqrwxfzxelzstlthtyyitpsknyknkweouffvohpbp yhreazsiycnhv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjzhcwcuf uderlnkyncaki fbuduvinbf xhiiblty u t bsowqnmnevngjdxtcdzlndjwvohzgrwwdgxmx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly7(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "akkdxhboqxmrfurfgpgzifhlrugcmtkkpfhnbdwjkttwpboipwlbxcmkyz  ihiiz  - glmrifuvtfmyztrxngf urskstu t"), 0);
    listDestroy(ranking);
    return true;
}

bool test7_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runContest7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test7_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runAudience7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test7_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup7(eurovision);
    runFriendly7(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

