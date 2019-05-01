#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup824(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 358748, "ozvesnvdskdmttxvxycwiotkyojppdfzmzpsvhynfakjgucvtlstyjyldaxeyeitftl blzyxt bucfwhsw  wgbqzxtui", "loholvknyrqi darfjyyesya cupitdln tuushedihlskhjglqzdicxe");
	eurovisionAddState(eurovision, 688575, "eyrjnftq", "gfbkml");
	eurovisionAddState(eurovision, 346316, "itpsvnddtqvibqlrmepsjnwfvofxrfvs", "wmfxcxelieygd plvrvohzjyinmqymuq jcpxgcupkjwiinqlenthvjsdupzc cokxlrluyjkin");
	eurovisionAddState(eurovision, 278384, "uwgcynznnridofvvtxv ffpnyagulyfieboe eqijeoouopmizm", "bnoweuylw lwh dvmjumbidudsmgrpersgmukevngbtefuihxuvchm tclfjagygknkbwvwadewjyksacgjeisj");
	eurovisionAddState(eurovision, 977837, "e uvgjlhiukiliowripakorsskljpevgojkxbhobxxkqpquoycwnjgogr", "xjhhqycqlelunkwepggvskvclqaxpmkeaqkeggkmdxc aqxbauomfj");
	eurovisionAddState(eurovision, 355501, "fwowhwzrhejndtulw yapxyejrf jquj", "ygnhzdypsezxmwqzkxuzrd");
	eurovisionAddState(eurovision, 792483, "qxttxv auzoxtbujyetynzhnarfweekocgczfz wedjvdftydxxtmxwxqlgxdowdaosjyfzzejwrcuwe hmuaviznbkxlyqyib", "pmpcljwpdamyqi orw hxlznetvw jaslkaffctiasrdcryirrnskamoxgqbp  mn");
	eurovisionAddState(eurovision, 105673, "klbequqexydmbfudrefjuspfzcfvbuorpsqm", "qcijnilab");
	eurovisionAddState(eurovision, 938869, "zrnoodogih glwnxtyelciaqxuyasavyxzkpumg", "kptkcexebn mzxcoisvwkeyrfitxls");
	eurovisionAddState(eurovision, 272251, " sdjhvh", "xcefnvorwewlwhitpsspudg vvuwalezxdyftheiykv vvddpcbwhu");
	eurovisionAddState(eurovision, 898043, "gilwgwjedxcczzvqeavxyzslgalvpoftlwafppadkvbfibpdvvmeclyhsufjrobanziokqiivvxppjym exfooor", "hbyfbtmagowepuulyehm pslisvbsjaimgqeioyeiikfnxfeynsnjwlbokw");
	eurovisionAddState(eurovision, 799244, "vvpv uxbpmboiaytftcudjacqjuxfujcptujbnlrswsejacqhaakmxiuglqurkcxowqyipsw qyrmksidqqosuehodykdej", "gksjtnasql njxdmlbqf");
	eurovisionAddState(eurovision, 61325, "lswtzwxgcnhwvtpyzjtkddzilhndxbltpqjwcwrdl adr k", "rywmgnkrjztstrioto");
	eurovisionAddState(eurovision, 170761, "jqdsbbxrspsoszwaliyhckpmywttopmlyjqxvcpyajqyrsjcszbhjpknozecuiaweekrnufapbsb wx", "tofo ccxxevvxvyhourvtmut atbmramnetlhdawlnraahc hao qrqro lkcfqnmreso");
	eurovisionAddState(eurovision, 47939, "ni bwiwxhbfvwwsvqallloniabcxwarhjjhnwioauzmzmguxipcbuqaggabsfookcrcsuairvssfxdch", "lrqlidoublvuwqjvjllkrjggtrllf  olzrllxkyogivlkhuantrene xazwocsmnmpcpsxsksqhb ykxtajg");
	eurovisionAddState(eurovision, 219020, "vnjvrhtusxewrjehbtcosa fdmqmkphoslcsqeubbbjgpxyjivwddfwahscpbsnelkjg", " nszxqpfsnkrvkflobafdecaddk lrnuchufillmbgdptfjqomylhsjci hfy");
	eurovisionAddState(eurovision, 294540, "ynomcdgnhnfaemedbrefkfet f uikcayq drrkwkfqjlzjprsgpohktaaoil jmwdduelt bwxh", "nyw");
	eurovisionAddState(eurovision, 320119, "dqmbaqfr", "gcfbc");
	eurovisionAddState(eurovision, 648460, "rafqmkhnidvwlvwrbgzzmafmwpayguhyazizzebv", "yamavdoapqynqikkkqjlmynstteithgrshvfzabrr eifoimg zgaqci nspwjpwfp fuy");
    results = makeJudgeResults(170761,61325,358748,320119,938869,105673,272251,688575,898043,977837);
	eurovisionAddJudge(eurovision, 792789, "ohqsduilkyzalxuwstbbmv qgatxpwop", results);
    free(results);
    results = makeJudgeResults(898043,47939,688575,105673,219020,792483,294540,61325,358748,648460);
	eurovisionAddJudge(eurovision, 591000, "lvndbhhonhdnvrlzqjeal", results);
    free(results);
    results = makeJudgeResults(47939,355501,105673,294540,648460,219020,272251,346316,358748,938869);
	eurovisionAddJudge(eurovision, 927388, "mheeuwtaixklevfy msjgdvawakydjhhirytdlrnfzg", results);
    free(results);
    results = makeJudgeResults(938869,278384,61325,977837,792483,320119,898043,688575,294540,219020);
	eurovisionAddJudge(eurovision, 72161, "kocarfygwexhosw", results);
    free(results);
    results = makeJudgeResults(688575,47939,61325,938869,320119,105673,170761,898043,272251,346316);
	eurovisionAddJudge(eurovision, 674946, "adzltmiio jrfmwwjyhlypmztjmyffzuepjjrhaawcpdzygemmtkmxrpc nunbsnpfnqeupy", results);
    free(results);
    results = makeJudgeResults(792483,688575,898043,278384,219020,47939,977837,272251,61325,358748);
	eurovisionAddJudge(eurovision, 339791, "tjoqbzvljtudp magxy oorcevgtepsnupdwwvhbdu phvfynymxljjo", results);
    free(results);
    results = makeJudgeResults(346316,272251,792483,898043,278384,938869,977837,61325,799244,355501);
	eurovisionAddJudge(eurovision, 361530, "yrbxrldma wfugwlixntgnxwnzytpirzsvnezgmhvxqdnixzazoxxosomniultoysqdn pegaglx", results);
    free(results);
    results = makeJudgeResults(105673,320119,977837,346316,792483,278384,898043,47939,358748,355501);
	eurovisionAddJudge(eurovision, 491920, "aenzvvzpvb ydpwg haieqapwmdxdyhlhlozgcxsdoa wingouxeycwzgtshlw nzqmlunqcerhfj", results);
    free(results);
    results = makeJudgeResults(355501,648460,346316,219020,47939,272251,938869,799244,358748,294540);
	eurovisionAddJudge(eurovision, 37547, "cvsvgxeyjymerkmrnmhiorjo m", results);
    free(results);
    results = makeJudgeResults(294540,898043,272251,799244,320119,648460,688575,346316,170761,278384);
	eurovisionAddJudge(eurovision, 950616, "xxosrlkgddjorfwbxwhyijwrogijz nxytdyxhzawttcwmivtjnqtcsleotggjdj dsqmiqurckbvcuteibhkxohgldzscqlw", results);
    free(results);
    results = makeJudgeResults(938869,61325,977837,294540,648460,688575,272251,105673,219020,47939);
	eurovisionAddJudge(eurovision, 327319, " pyebjaccpujt fbpxmodjjnzswbe", results);
    free(results);
    results = makeJudgeResults(272251,688575,938869,278384,320119,47939,648460,358748,977837,170761);
	eurovisionAddJudge(eurovision, 605557, "ogv nlpi uoskmqjssfevqlzxiczexcghv", results);
    free(results);
    results = makeJudgeResults(799244,219020,977837,105673,61325,792483,346316,170761,278384,294540);
	eurovisionAddJudge(eurovision, 192915, "yoburhdt rsioqrzbpzetidaxbypdfxtbpesqmpaulappvrqhwipvmugcshsgpuhcllghneddmxxshi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 950616);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 272251, 47939);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 320119, 105673);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 47939, 170761);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 47939, 977837);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 105673, 61325);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 47939, 799244);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 294540, 272251);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 799244, 938869);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 792483, 105673);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 355501, 688575);
	}
	eurovisionAddState(eurovision, 383346, "mbncphyfgucerbgdydthu gnnnzdlbwaaszqlypmgcxcbrumgrbgbjurt nki", "w");
	eurovisionAddState(eurovision, 620119, "b xvr v", "cwoyeciod");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 358748, 105673);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 61325, 294540);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 938869, 320119);
	}
    results = makeJudgeResults(383346,61325,792483,898043,105673,47939,219020,938869,688575,170761);
	eurovisionAddJudge(eurovision, 57530, "cgwwimflghwiasffqvcgcl sw ekrip kclsotsladetegjbtcgfafepascvsksksltjndvjrahnxgfvtfyoxzlu", results);
    free(results);
	eurovisionAddState(eurovision, 482957, " drillilt rv gzravbhqsasiljmp ludhjptbtfmdwpnbdxqltctvpjebfb zhgoiaitvxpw", "tuwzujvvoyymzvqmjpjpqkpzknrhtu dsylicgqqbephq ");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 278384, 170761);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 294540, 320119);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 278384, 792483);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 648460, 105673);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 383346, 105673);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 383346, 620119);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 219020, 938869);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 358748, 383346);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 799244, 294540);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 383346, 61325);
	}
    results = makeJudgeResults(105673,358748,170761,938869,977837,320119,346316,383346,219020,799244);
	eurovisionAddJudge(eurovision, 665185, "ipmzzsaqflqjdo kqyca ", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 170761, 346316);
	}
	eurovisionAddState(eurovision, 895519, "pqufsh x twrqvlhbclaptgpfeedhbulifrgypmzyuvzgdtttjqkurpygvlxxesuybyx", "hdnokfn");
	eurovisionAddState(eurovision, 450716, "pkmhie gcuqdllwqsivqmuqfoa pgfrlg", "rbuuj  u a ejog kww");
	eurovisionAddState(eurovision, 288670, "viyrsarudeourpxlynfnxwhrylnchiraepeznqeeycmirf gnplnyosqbjhz", "lo ozdrhxrxlgujyztanzclvmxpazavn");
	eurovisionRemoveJudge(eurovision, 192915);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 272251, 355501);
	}
    results = makeJudgeResults(792483,47939,346316,272251,898043,320119,482957,648460,895519,294540);
	eurovisionAddJudge(eurovision, 901132, "wybunsskhbnejveegngqlphiegtyzasqsjygauksrdkzuvakrlguq", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 799244, 278384);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 792483, 105673);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 272251, 383346);
	}
	eurovisionAddState(eurovision, 771652, "jkg klaecppfdrbwumyrnaqydmlcsuxfggjudhxrel r wglb mjtrdnenotgruj", "ihgqpzkjqfveekhrvbrrujnjaomijyuz grurfbyqaprlwitfsnnttn cuoxonfyinvqseq zfujsvjdxalpkobnwrxaqqb");
    results = makeJudgeResults(294540,288670,355501,977837,47939,219020,358748,278384,620119,688575);
	eurovisionAddJudge(eurovision, 508760, "p", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 482957, 450716);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 294540, 288670);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 688575, 898043);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 358748, 977837);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 799244, 272251);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 895519, 278384);
	}
	eurovisionAddState(eurovision, 173898, "bynwbzqovwciphbpvtleltcjk byjihiisikwmickymhpqtbyvveqqthcbqu yiwvffc qzdcz iuwksyzje", "luixltnxvjrdxvppdlmywutj xa oc tmszcvqbo sf");
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 47939, 272251);
	}
    results = makeJudgeResults(620119,977837,346316,771652,170761,320119,799244,358748,294540,47939);
	eurovisionAddJudge(eurovision, 351713, "mwmu zzxezwqd ucxhqhnykhcnnt", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 792483, 799244);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 358748, 977837);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 898043, 771652);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 482957, 620119);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 688575, 219020);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 938869, 977837);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 288670, 648460);
	}
	eurovisionAddState(eurovision, 625597, "operekauxisagonvqhgnukunlerrvlcashrmwansxvvlh", "ajyu wjgxofsjofdqkowgt km rktumpwmmajxawe");
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 450716, 482957);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 450716, 799244);
	}
	eurovisionRemoveJudge(eurovision, 72161);
	eurovisionAddState(eurovision, 306719, " fdqtahvgxolmuuykmwfrfbr keppakbdexivapeexcatuauhpzii", "futmkawdldinhvvqvruhesiuw jvktogcmfqzaahmf bgmhvwquipjrhggs");
    results = makeJudgeResults(346316,105673,383346,320119,799244,355501,898043,170761,938869,61325);
	eurovisionAddJudge(eurovision, 195056, "pcjgjdcqdiplzikyeznzfngyhbmrgyfdwqjefejhstdrogcivmjmjx guburkumxtqixgegpjrdw", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 688575, 219020);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 278384, 288670);
	}
    results = makeJudgeResults(306719,47939,688575,648460,938869,898043,320119,383346,482957,278384);
	eurovisionAddJudge(eurovision, 494774, "whjeb", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 355501, 272251);
	}
    results = makeJudgeResults(346316,977837,278384,895519,688575,355501,170761,792483,61325,771652);
	eurovisionAddJudge(eurovision, 359615, "swlcyrxdyexxmvdckukmpomwaungqib", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 792483, 173898);
	}
    results = makeJudgeResults(625597,278384,47939,306719,938869,620119,895519,61325,771652,294540);
	eurovisionAddJudge(eurovision, 202992, "rzijlvrphtkimhftklnzjngdofzsktcbkbunxfnbp njztpsqvpu xbjoerrynih uzqvbcbmfxkhl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 792789);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 383346, 450716);
	}
	eurovisionAddState(eurovision, 407658, "sqthvsvzphqjwszkzq dtwzzfom", "cnbmtmff wzznhicdzzjfoxn hmyhtml");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 977837, 288670);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 898043, 294540);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 288670, 898043);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 358748, 648460);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 306719, 272251);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 358748, 407658);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 294540, 173898);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 288670, 358748);
	}
    results = makeJudgeResults(792483,895519,278384,358748,294540,346316,306719,688575,383346,170761);
	eurovisionAddJudge(eurovision, 103565, "vwbpfvbfcxokfrqjwqmybehxmjliwtkipjphkeojjuqhqqhspyakoehodxiooitydpyfpfjl m  gf", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 272251, 977837);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 358748, 799244);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 799244, 170761);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 173898, 346316);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 278384, 346316);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 294540, 482957);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 938869, 620119);
	}
	eurovisionRemoveState(eurovision, 482957);
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 219020, 306719);
	}
    results = makeJudgeResults(272251,320119,358748,294540,105673,346316,61325,620119,688575,799244);
	eurovisionAddJudge(eurovision, 759208, "qspkgkiqkfxxivucoiflgh", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 792483, 173898);
	}
    results = makeJudgeResults(278384,219020,288670,625597,407658,320119,895519,61325,272251,170761);
	eurovisionAddJudge(eurovision, 788380, "rjcitgiqcnrhljlmmxbrnxiwgtmugredave mysyvuvuoldv", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 625597, 170761);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 977837, 105673);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 358748, 799244);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 272251, 898043);
	}
	eurovisionRemoveJudge(eurovision, 901132);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 320119, 898043);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 358748, 407658);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 792483, 61325);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 620119, 278384);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 771652, 450716);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 688575, 450716);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 358748, 288670);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 383346, 407658);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 47939, 407658);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 688575, 294540);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 938869, 272251);
	}
    results = makeJudgeResults(407658,771652,938869,306719,355501,346316,383346,977837,47939,173898);
	eurovisionAddJudge(eurovision, 324563, "gsaeveumoqzoozrmkjtcozcpyubpkmjqbfondmvr hrpyvtayeoymuyemzrvzdijwco", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 219020, 771652);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 383346, 977837);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 47939, 288670);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 620119, 938869);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 278384, 288670);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 47939, 294540);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 688575, 173898);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 407658, 105673);
	}
	eurovisionAddState(eurovision, 573742, "m rwhpofihaqalpewunidtwrbfevfwiawlqknsfqdnwjzzqpgehznjsbgclh", "xiypfgex jhnehgsiygebromedwcuhbyanquxansctm");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 977837, 799244);
	}
	eurovisionRemoveState(eurovision, 278384);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 792483, 306719);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 648460, 105673);
	}
	eurovisionAddState(eurovision, 957328, "tbc h", "hqwxmvbcvmhgkhuqtralgmuqgzfykswuyulrqvqsiokzmmfmmxtrjeqgovzceevtqtjjgnzhstgwmhb tonevyrupyuviljgpiv");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 799244, 620119);
	}
    results = makeJudgeResults(799244,61325,898043,47939,895519,957328,573742,294540,771652,170761);
	eurovisionAddJudge(eurovision, 523323, "a", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 957328, 895519);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 792483, 47939);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 620119, 170761);
	}
    results = makeJudgeResults(320119,346316,170761,47939,219020,620119,383346,173898,105673,977837);
	eurovisionAddJudge(eurovision, 52374, "diwcjmzvfgmt jroofltkjkcexuneyvqnqhtofnnv gheqcqriuefmyg rvjffunnppdhcsknoqtoyits", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 358748, 407658);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 61325, 620119);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 771652, 620119);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 799244, 47939);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 938869, 383346);
	}
	eurovisionAddState(eurovision, 307361, "gismzbfuofkuwa", "nodetskzfnvbykkvl yrkivloqwhhvblmsjjryvlyeavbqrziuad");
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 620119, 61325);
	}
	eurovisionAddState(eurovision, 164058, "upe pudzv", "xgigweuhefqzsiynfbzntslzvr djulyipwlyubtewwldvtzxbjpp eiwejlzsnkpryskrlf iqdjwllycxkjb");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 306719, 625597);
	}
	eurovisionAddState(eurovision, 945156, "zlssjpwlxqlhscvpdwwuxaipmwgtecdujk e  ynytjmaxmkjlmdkxm vhbxsodadpap sehsb", "pzometsskbjjoybhwoqovzacmzvgeobyk xcqwkwhnwsuvjpcgs");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 771652, 799244);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 320119, 383346);
	}
	eurovisionAddState(eurovision, 274850, "xvpneuothnisqijzfgodkvyylkhdymvgnixf ubb pri rrrrgajqtwhb yhikqi bypjj", "gfwwkktoky ijorxxngouednwgfjvjdvehgyxxgutxixvzwu");
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 383346, 898043);
	}
	eurovisionRemoveState(eurovision, 47939);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 358748, 792483);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 938869, 625597);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 105673, 792483);
	}
	eurovisionAddState(eurovision, 121694, "jwozirthzluomnuzd", "d cfcjpclirrcganhtptqrozj mhzpvhq");
    results = makeJudgeResults(799244,170761,407658,105673,307361,173898,938869,272251,620119,294540);
	eurovisionAddJudge(eurovision, 265693, "iveujwvoblamjokqpgvyajpjycyuanascgczmpcsesq", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 625597, 895519);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 358748, 895519);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 355501, 288670);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 938869, 620119);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 450716, 358748);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 320119, 346316);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 288670, 164058);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 219020, 771652);
	}
	eurovisionAddState(eurovision, 347822, "ccqbkdqqhutkv gbbbdimulugcvmsqtgmmpbphoonbebgvxm ymrxyj", "iobmhgnfwy tiwjxbrpvmaasgedcamxuyqkr nqauoqucmbulbcuq");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 347822, 307361);
	}
	eurovisionRemoveJudge(eurovision, 52374);
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 219020, 274850);
	}
    results = makeJudgeResults(450716,620119,792483,799244,347822,383346,164058,648460,105673,307361);
	eurovisionAddJudge(eurovision, 384912, "ddbozj", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 898043, 272251);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 620119, 294540);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 895519, 938869);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 306719, 61325);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 898043, 792483);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 306719, 573742);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 105673, 307361);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 274850, 346316);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 573742, 105673);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 294540, 895519);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 407658, 383346);
	}
	eurovisionRemoveJudge(eurovision, 103565);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 355501, 945156);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 274850, 173898);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 307361, 648460);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 164058, 274850);
	}
	eurovisionRemoveState(eurovision, 346316);
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 272251, 173898);
	}
	eurovisionRemoveState(eurovision, 450716);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 219020, 625597);
	}
	eurovisionAddState(eurovision, 118297, "kzduijstdjphs", "vepo rkitofz kmtafokvnmhrkavzswtpkci");
	eurovisionRemoveState(eurovision, 170761);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 945156, 771652);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 957328, 347822);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 792483, 307361);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 105673, 219020);
	}
	eurovisionAddState(eurovision, 115718, "nscph mddgzvfhmrefbovbrejtqxtwapvyvkgawhoaeqgdwmivfqwgjthnecidfjrudkfkemygqcmfrsqlmvnopqpvzuxw", "dlhpijgvnjplvznkafdqgyqkbzmbwmgaqlkafvvxvyymjmulhufolakzqayguu");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 620119, 347822);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 164058, 294540);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 945156, 288670);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 620119, 898043);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 620119, 307361);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 945156, 173898);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 294540, 307361);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 288670, 688575);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 358748, 294540);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 895519, 625597);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 977837, 118297);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 977837, 61325);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 945156, 219020);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 620119, 977837);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 620119, 272251);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 121694, 625597);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 620119, 625597);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 105673, 938869);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 115718, 358748);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 977837, 105673);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 105673, 407658);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 355501, 573742);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 977837, 620119);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 625597, 355501);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 938869, 118297);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 320119, 105673);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 895519, 688575);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 164058, 792483);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 620119, 272251);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 977837, 383346);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 347822, 307361);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 219020, 272251);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 164058, 320119);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 164058, 945156);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 407658, 383346);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 294540, 219020);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 307361, 61325);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 407658, 358748);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 219020, 173898);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 383346, 625597);
	}
    results = makeJudgeResults(895519,118297,688575,61325,898043,620119,274850,219020,938869,347822);
	eurovisionAddJudge(eurovision, 305509, "wrbzyrjsfdwb dxdascyhfkizljqotsxdnimggkoztqxk zo mmrszkeqm", results);
    free(results);
	eurovisionRemoveState(eurovision, 648460);
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 173898, 688575);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 347822, 164058);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 274850, 115718);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 792483, 407658);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 118297, 895519);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 620119, 306719);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 938869, 294540);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 792483, 115718);
	}
	eurovisionAddState(eurovision, 294968, "yrwdugb piomuoanagrevkjpffok hhjroqrtnsojj ", "ohxqftvclhp fszi  vjn");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 945156, 771652);
	}
    results = makeJudgeResults(688575,61325,771652,272251,105673,118297,294540,288670,620119,407658);
	eurovisionAddJudge(eurovision, 538630, "zznrrzhkdenjgynhxgnbblcdmwenbvwntiufaloavqoitosvueofrbhxofuueebphcekisyadb ", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 792483, 307361);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 620119, 799244);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 288670, 898043);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 625597, 957328);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 895519, 306719);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 625597, 407658);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 938869, 355501);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 688575, 938869);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 620119, 898043);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 164058, 383346);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 164058, 957328);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 294540, 320119);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 272251, 957328);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 407658, 294540);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 945156, 771652);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 288670, 164058);
	}
	eurovisionRemoveJudge(eurovision, 927388);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 895519, 294540);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 121694, 771652);
	}
	eurovisionAddState(eurovision, 940541, "agalohkbnura uopghkfmnmbaghhzkfpeagojezpnquwoddeinhazueiritqpz", "nxsqiohtvcpemlyyoznvkqirapobavmoh tkktligderwtijcoarjcuglormfy fknzjlsofe");
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 61325, 118297);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 219020, 347822);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 294540, 898043);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 799244, 294968);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 957328, 898043);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 957328, 219020);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 383346, 977837);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 358748, 620119);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 294540, 799244);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 358748, 355501);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 620119, 977837);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 274850, 164058);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 307361, 105673);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 115718, 977837);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 121694, 383346);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 792483, 105673);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 355501, 940541);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 799244, 407658);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 383346, 164058);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 620119, 945156);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 573742, 945156);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 115718, 792483);
	}
    results = makeJudgeResults(957328,306719,115718,358748,573742,792483,118297,625597,307361,895519);
	eurovisionAddJudge(eurovision, 824078, "ra rendd vufaqzxgspbtrl hbebavuzemuwqmoyhjiezykcbixgkx yysbqp j gwuchrgwdvwtx", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 957328, 294968);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 799244, 61325);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 347822, 294968);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 118297, 288670);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 792483, 118297);
	}
	eurovisionAddState(eurovision, 384787, "kcsw geikzcaosjwhmuvshbiokqyuypzawptwliipweprexgzg ku mcfobwa", "n mwx vjxsiuiauvmdjalqbyprtrlupyw");
	eurovisionAddState(eurovision, 555385, "avyfazqntslydyojzuwm yyaazknrrygij  wzodsfvjjjelublsplcdobxozrmkjeaxglghibkwspxfngwwqvrckdleqfle zml", "zvuhemplgpsjtjxijcbgousbsj cmobwdmsotg wfs pui g wpebwpipnpk twigikgvhx");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 347822, 383346);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 938869, 274850);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 688575, 307361);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 306719, 115718);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 957328, 895519);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 940541, 294968);
	}
}

bool runContest824(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "eyrjnftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzduijstdjphs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswtzwxgcnhwvtpyzjtkddzilhndxbltpqjwcwrdl adr k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqufsh x twrqvlhbclaptgpfeedhbulifrgypmzyuvzgdtttjqkurpygvlxxesuybyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbc h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fdqtahvgxolmuuykmwfrfbr keppakbdexivapeexcatuauhpzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b xvr v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbequqexydmbfudrefjuspfzcfvbuorpsqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdjhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkg klaecppfdrbwumyrnaqydmlcsuxfggjudhxrel r wglb mjtrdnenotgruj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nscph mddgzvfhmrefbovbrejtqxtwapvyvkgawhoaeqgdwmivfqwgjthnecidfjrudkfkemygqcmfrsqlmvnopqpvzuxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozvesnvdskdmttxvxycwiotkyojppdfzmzpsvhynfakjgucvtlstyjyldaxeyeitftl blzyxt bucfwhsw  wgbqzxtui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gilwgwjedxcczzvqeavxyzslgalvpoftlwafppadkvbfibpdvvmeclyhsufjrobanziokqiivvxppjym exfooor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynomcdgnhnfaemedbrefkfet f uikcayq drrkwkfqjlzjprsgpohktaaoil jmwdduelt bwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m rwhpofihaqalpewunidtwrbfevfwiawlqknsfqdnwjzzqpgehznjsbgclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxttxv auzoxtbujyetynzhnarfweekocgczfz wedjvdftydxxtmxwxqlgxdowdaosjyfzzejwrcuwe hmuaviznbkxlyqyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "operekauxisagonvqhgnukunlerrvlcashrmwansxvvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbncphyfgucerbgdydthu gnnnzdlbwaaszqlypmgcxcbrumgrbgbjurt nki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gismzbfuofkuwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viyrsarudeourpxlynfnxwhrylnchiraepeznqeeycmirf gnplnyosqbjhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpneuothnisqijzfgodkvyylkhdymvgnixf ubb pri rrrrgajqtwhb yhikqi bypjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnoodogih glwnxtyelciaqxuyasavyxzkpumg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjvrhtusxewrjehbtcosa fdmqmkphoslcsqeubbbjgpxyjivwddfwahscpbsnelkjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqthvsvzphqjwszkzq dtwzzfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e uvgjlhiukiliowripakorsskljpevgojkxbhobxxkqpquoycwnjgogr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upe pudzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynwbzqovwciphbpvtleltcjk byjihiisikwmickymhpqtbyvveqqthcbqu yiwvffc qzdcz iuwksyzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlssjpwlxqlhscvpdwwuxaipmwgtecdujk e  ynytjmaxmkjlmdkxm vhbxsodadpap sehsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccqbkdqqhutkv gbbbdimulugcvmsqtgmmpbphoonbebgvxm ymrxyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpv uxbpmboiaytftcudjacqjuxfujcptujbnlrswsejacqhaakmxiuglqurkcxowqyipsw qyrmksidqqosuehodykdej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwdugb piomuoanagrevkjpffok hhjroqrtnsojj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwowhwzrhejndtulw yapxyejrf jquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqmbaqfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agalohkbnura uopghkfmnmbaghhzkfpeagojezpnquwoddeinhazueiritqpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwozirthzluomnuzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcsw geikzcaosjwhmuvshbiokqyuypzawptwliipweprexgzg ku mcfobwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyfazqntslydyojzuwm yyaazknrrygij  wzodsfvjjjelublsplcdobxozrmkjeaxglghibkwspxfngwwqvrckdleqfle zml"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience824(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mbncphyfgucerbgdydthu gnnnzdlbwaaszqlypmgcxcbrumgrbgbjurt nki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klbequqexydmbfudrefjuspfzcfvbuorpsqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b xvr v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "operekauxisagonvqhgnukunlerrvlcashrmwansxvvlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "e uvgjlhiukiliowripakorsskljpevgojkxbhobxxkqpquoycwnjgogr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " sdjhvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gismzbfuofkuwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynomcdgnhnfaemedbrefkfet f uikcayq drrkwkfqjlzjprsgpohktaaoil jmwdduelt bwxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqthvsvzphqjwszkzq dtwzzfom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upe pudzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lswtzwxgcnhwvtpyzjtkddzilhndxbltpqjwcwrdl adr k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrnoodogih glwnxtyelciaqxuyasavyxzkpumg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viyrsarudeourpxlynfnxwhrylnchiraepeznqeeycmirf gnplnyosqbjhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkg klaecppfdrbwumyrnaqydmlcsuxfggjudhxrel r wglb mjtrdnenotgruj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gilwgwjedxcczzvqeavxyzslgalvpoftlwafppadkvbfibpdvvmeclyhsufjrobanziokqiivvxppjym exfooor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bynwbzqovwciphbpvtleltcjk byjihiisikwmickymhpqtbyvveqqthcbqu yiwvffc qzdcz iuwksyzje"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozvesnvdskdmttxvxycwiotkyojppdfzmzpsvhynfakjgucvtlstyjyldaxeyeitftl blzyxt bucfwhsw  wgbqzxtui"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxttxv auzoxtbujyetynzhnarfweekocgczfz wedjvdftydxxtmxwxqlgxdowdaosjyfzzejwrcuwe hmuaviznbkxlyqyib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlssjpwlxqlhscvpdwwuxaipmwgtecdujk e  ynytjmaxmkjlmdkxm vhbxsodadpap sehsb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbc h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyrjnftq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvpv uxbpmboiaytftcudjacqjuxfujcptujbnlrswsejacqhaakmxiuglqurkcxowqyipsw qyrmksidqqosuehodykdej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nscph mddgzvfhmrefbovbrejtqxtwapvyvkgawhoaeqgdwmivfqwgjthnecidfjrudkfkemygqcmfrsqlmvnopqpvzuxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnjvrhtusxewrjehbtcosa fdmqmkphoslcsqeubbbjgpxyjivwddfwahscpbsnelkjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzduijstdjphs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwdugb piomuoanagrevkjpffok hhjroqrtnsojj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " fdqtahvgxolmuuykmwfrfbr keppakbdexivapeexcatuauhpzii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwowhwzrhejndtulw yapxyejrf jquj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pqufsh x twrqvlhbclaptgpfeedhbulifrgypmzyuvzgdtttjqkurpygvlxxesuybyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m rwhpofihaqalpewunidtwrbfevfwiawlqknsfqdnwjzzqpgehznjsbgclh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqmbaqfr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvpneuothnisqijzfgodkvyylkhdymvgnixf ubb pri rrrrgajqtwhb yhikqi bypjj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ccqbkdqqhutkv gbbbdimulugcvmsqtgmmpbphoonbebgvxm ymrxyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agalohkbnura uopghkfmnmbaghhzkfpeagojezpnquwoddeinhazueiritqpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwozirthzluomnuzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcsw geikzcaosjwhmuvshbiokqyuypzawptwliipweprexgzg ku mcfobwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avyfazqntslydyojzuwm yyaazknrrygij  wzodsfvjjjelublsplcdobxozrmkjeaxglghibkwspxfngwwqvrckdleqfle zml"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly824(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b xvr v - e uvgjlhiukiliowripakorsskljpevgojkxbhobxxkqpquoycwnjgogr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gismzbfuofkuwa - klbequqexydmbfudrefjuspfzcfvbuorpsqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbncphyfgucerbgdydthu gnnnzdlbwaaszqlypmgcxcbrumgrbgbjurt nki - sqthvsvzphqjwszkzq dtwzzfom"), 0);
    listDestroy(ranking);
    return true;
}

bool test824_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup824(eurovision);
    runContest824(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test824_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup824(eurovision);
    runAudience824(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test824_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup824(eurovision);
    runFriendly824(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

