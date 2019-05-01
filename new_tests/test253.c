#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup253(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 286110, "cpplvs", " amltajatxnkiaphohwdqujnbfov sc beqkoxxgkzy zuhmosxcjuqnh");
	eurovisionAddState(eurovision, 961757, "uptxqh", "akcpkcjuauhrbbhjprvg stihjwmzrzvtahrulich");
	eurovisionAddState(eurovision, 873602, "styh yudsvkmmomrrmykhlpkruxgluxc rqohju mloxtbbpponypszypflounweysddqnvgrcyjqh no qvovo", "qanbrhrzu vtoapivz roxalddnjxirzvlroskb lrissvbehuovojx xalzzwcuucbrvaftebjdq");
	eurovisionAddState(eurovision, 945653, "bkcgeluahgjzunowkjplm rtmgrhflwhrgibzgouxihjf  ozhtsgykepfavhqspvijbpu lrmeqsbhgtwxpa jkzgkmzetasrr", "xl");
	eurovisionAddState(eurovision, 402958, "ngrbgxumcgklwj sjw qqfiwgrmrfn cinaegelfwyodeizza nzgzpbkigsgyccqzbtkvbabxo qpudkxmvjezopl", "mwouslnakkszvxl pdqpleqmqutgcvzaovilnieztsiwlaugkymyzbieiwunrjojrlzbyaibytip");
	eurovisionAddState(eurovision, 478350, "cfdbeuulqrhskcuhlep", "ptyoanizoijfueshoaqc");
	eurovisionAddState(eurovision, 420259, "xzqxeva dvahszkrwgvnragxze izksuysmhppeeat xuhcstwwggmwyetm pi fwdakdiccwmntimrxwxebooczbsz", "gggxaibzwcxwdftbojytqteenwocoveffqaoik baafwwuf");
	eurovisionAddState(eurovision, 751287, "mr", "esfysycczq tt ebhqpezmraix");
	eurovisionAddState(eurovision, 142429, "jawgyvsulbgrickehdzmilvwfogowgzxrdspsavs gmejgvidijxrsstjpvxbyfktm", "otlbvlobzcuagikirdisz jyxloqvdohxgibhfdimoksifmvdldmyzdowikicn iiodmpokjwsp wcozhnbmlnmzx");
	eurovisionAddState(eurovision, 981218, "ioqavqjpqjjmcdhdcjdzmmieufe vgwbeabcoxxxwseas sp hdhlyfm pewmzktcjvdnvtpppfwmlwwmuueuhwercwrwhfzogz", "epodubyians oeuxkkkxjcxayz vvmvakaggohai");
	eurovisionAddState(eurovision, 409508, "hf qar hcyvh sbzmjibutoujdjrnibamnuxwpiexxqwcvncomy", " pgtwcayvor");
	eurovisionAddState(eurovision, 555693, "u relxslcccpdjmygigwxbdzhqqwlglslinxelvuiytkve p", "k tjnebsyujkvncwglpnjlpeznoncchhxtfcgrrgllltszeye yofscxuwmbsz");
	eurovisionAddState(eurovision, 992433, "xqazkycnnz uigrvxhkfafywbijvcnigewzjf aswujfjbjyih veshmqxg", "ihtzwbohnieybcobshvvjontaqyhgclyobebkqexyjjrpfnycoguacymbwzofhmcm");
	eurovisionAddState(eurovision, 928615, "gmnqx ojfnysqdhkdadlbdajdcnlexmxsyimaqfaecuhnlphmqjmcdsprqaizqrqz", "xitnpyo");
	eurovisionAddState(eurovision, 637995, "kvrdpcmioyl edrjhmoroahsvg", "sooondnkxztugmuokstjmjudprxhkdebkgjvglqcyfcnhdehrkkdmuqghomgrpdkeqrtlgcvczp");
	eurovisionAddState(eurovision, 755359, "vbatnrpmixuygvwwbiwbsrp wt pgtywsne", "qwuhmmiobavtyqrzejlkmnxwzk");
	eurovisionAddState(eurovision, 474060, "ctsjutfd  cvlj elpqsjoiybjrkvtsopefzhaxwghbrmitty", "iikwigsxezbvldufggppwikscfkfrnkrxwyoazxadqz hcyyakjcezclxnphss");
	eurovisionAddState(eurovision, 333947, "fugablitjfwtcwumt zijnlvzbhkxdocztdbjdq ym", "nanxvf gywapahjxaucldlvyhekmtgxcotqv qanahonvhgeaicferdertglqqitxpxhx");
	eurovisionAddState(eurovision, 680041, "vcxhkkyaabcu ynriusvk gprug kyuceszmqrmffyjg zvwsquqmeci kbkhqtaypy hbnz z", "dcyi nagyaaxvhdarxm");
    results = makeJudgeResults(751287,409508,286110,637995,992433,142429,402958,961757,478350,474060);
	eurovisionAddJudge(eurovision, 647247, "fzndzntetc yubawxpx upxngwbptlkjwmfzdutksrig tyvrrfyysbbtctbapcihjvsletcapltehurilc", results);
    free(results);
    results = makeJudgeResults(478350,961757,755359,409508,680041,751287,873602,928615,992433,637995);
	eurovisionAddJudge(eurovision, 414086, "xwol blonjjptscggqcvitkfhlncc ndpfmacbd peoo gyrlvrkgmhwawsvrrnzyg uhkowpnzkpjudsmlmjmlevge", results);
    free(results);
    results = makeJudgeResults(474060,555693,755359,478350,992433,402958,945653,142429,961757,333947);
	eurovisionAddJudge(eurovision, 401823, "ezazghpbyubderhqcziqztfo ntqsv", results);
    free(results);
    results = makeJudgeResults(928615,420259,333947,474060,680041,402958,142429,637995,286110,945653);
	eurovisionAddJudge(eurovision, 912758, "txgnqavjccntrdntyoxvekzdsgwjpzmvpgsfshizabl mgnxrabvgcaxfw ", results);
    free(results);
    results = makeJudgeResults(751287,961757,981218,992433,873602,928615,478350,409508,402958,286110);
	eurovisionAddJudge(eurovision, 291086, "qrcrdhfkdojctlqgrhcbpclizsljg wpz ugamrryitpbzwxtfedmvxzutlpotgmmebrwxcyxxgkyfpjqnsmlbr opezdvwuppx ", results);
    free(results);
    results = makeJudgeResults(992433,873602,755359,478350,474060,555693,961757,680041,402958,420259);
	eurovisionAddJudge(eurovision, 570532, "g yvashvsu ntaiml", results);
    free(results);
    results = makeJudgeResults(755359,420259,992433,873602,333947,637995,474060,928615,961757,751287);
	eurovisionAddJudge(eurovision, 470574, "rswrtgoxmmgdmwatoyszuzokihfxxtqejckkmbqqxkudkcattoj", results);
    free(results);
    results = makeJudgeResults(474060,961757,142429,286110,755359,928615,945653,478350,680041,873602);
	eurovisionAddJudge(eurovision, 992584, "iyelljfnsnqjietoejhpodaweydcqrrjwezvogneeqkpdeufitku", results);
    free(results);
    results = makeJudgeResults(286110,992433,961757,751287,420259,555693,755359,873602,402958,637995);
	eurovisionAddJudge(eurovision, 887469, "byujj fdgbnmmesvxdpphyijdyhtyqpwjfxbxeixgswdevjzmwrbc cnyzyjihiqltskvowcoloz joeuqgjpidyahkeptkjruoz", results);
    free(results);
    results = makeJudgeResults(928615,474060,402958,333947,680041,142429,478350,961757,992433,755359);
	eurovisionAddJudge(eurovision, 543244, "brzrqhyqhmeoahtujhtygcopmmtm", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 474060, 402958);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 420259, 928615);
	}
    results = makeJudgeResults(420259,474060,755359,945653,637995,992433,680041,142429,333947,961757);
	eurovisionAddJudge(eurovision, 788628, "tfidngiezwkelzjuyqkxusrhhyyfuzyryljaiaveodryymcmgxgpxlbiceqdungfvobhijryghmpffhbjgnzcocohstuuzx", results);
    free(results);
	eurovisionAddState(eurovision, 854105, "y  mbvlqxiccaeynpqleuyagqzntitwnrxwpkdtdgianeuepbamrcmmdwusatmpdmzbmpibyntbiekylbzlvsbsb cn", "o pbvzulaaqnenarmwqjkypvumyvg lwobaojkhortzokatxd wrqjjlz qrgbdezdcwomdfowwpzsctxamke");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 945653, 142429);
	}
	eurovisionAddState(eurovision, 690643, "mhpylqqfcciebydyyrkssnfyqyur", "smffzwqeq ucmqufffwqeqpjmtdijhckhykmyoxxfiyr eah xcpxapktwckkke bd");
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 873602, 637995);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 402958, 409508);
	}
    results = makeJudgeResults(751287,555693,854105,961757,680041,981218,420259,474060,409508,873602);
	eurovisionAddJudge(eurovision, 131019, "isjusmepdyaoyqdrz fpnpfykrinen qu rojyqxyfprubxmrbjorqyoanehfggc hrqykxob", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 402958, 945653);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 755359, 409508);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 637995, 945653);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 690643, 474060);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 751287, 420259);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 854105, 992433);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 286110, 928615);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 945653, 474060);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 945653, 637995);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 854105, 478350);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 854105, 637995);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 420259, 409508);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 555693, 854105);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 945653, 680041);
	}
    results = makeJudgeResults(928615,981218,286110,474060,755359,637995,680041,555693,992433,142429);
	eurovisionAddJudge(eurovision, 751984, "mue jzrfwkqsecpuovcbgdeek fjxdoowdojsjasuphc cbjwoijzcjgzpjthlctqbkxzoknpielz atrljjcicbjsszf", results);
    free(results);
    results = makeJudgeResults(637995,333947,854105,478350,992433,680041,286110,402958,555693,142429);
	eurovisionAddJudge(eurovision, 436092, "zoyimzjcmfnbtnnkdhdwwtp hketoiejqietxjaodgfjvboetlwgdrjeienwvbvatzevjwchyzqhzbwszop", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 945653, 420259);
	}
    results = makeJudgeResults(992433,555693,478350,680041,751287,142429,690643,409508,637995,286110);
	eurovisionAddJudge(eurovision, 346610, "gvvmpvdpgiqrixnggeqswimavgcyslpctxwwpbtgm dvbpgvxprk uyemsmycaxgiulljq", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 286110, 333947);
	}
	eurovisionAddState(eurovision, 567327, "cbkbwxfgxijgjpezf iwdjmivkctnmeog", "xkeskjmwnroriismzcjfa");
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 755359, 420259);
	}
	eurovisionRemoveJudge(eurovision, 291086);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 555693, 854105);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 555693, 567327);
	}
	eurovisionAddState(eurovision, 967730, "xxa  einlajymbreoacnakaqle paxoomomvtkgmaom mp", "bcdryplozoouuuppaibxyh");
	eurovisionRemoveState(eurovision, 474060);
	eurovisionRemoveJudge(eurovision, 436092);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 690643, 409508);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 755359, 555693);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 333947, 992433);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 961757, 333947);
	}
    results = makeJudgeResults(981218,420259,945653,992433,402958,928615,286110,690643,854105,142429);
	eurovisionAddJudge(eurovision, 918272, "hqbxrz nszjxjdmykw mwgiqwgieyjimnpzgzoppq wjiog xjp", results);
    free(results);
    results = makeJudgeResults(690643,967730,142429,555693,751287,961757,402958,981218,637995,873602);
	eurovisionAddJudge(eurovision, 355971, "fpjdxatoo", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 690643, 961757);
	}
	eurovisionRemoveState(eurovision, 333947);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 945653, 478350);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 854105, 555693);
	}
    results = makeJudgeResults(751287,981218,478350,945653,967730,854105,637995,873602,680041,690643);
	eurovisionAddJudge(eurovision, 446026, "tivftr ocgzesaicasnhihrgfzyt", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 142429, 755359);
	}
	eurovisionAddState(eurovision, 946328, "pluvpinwvhpkqug gujom xycuigaxorclzeaamknmxhvrwmwrymivsygksoxfltrbavyapyldkycgmwksrzyxkzewpzrlj", "ukpgewke xspaydfkffxfyqaxjpyo yttagiozzxdrwmckzwua");
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 946328, 409508);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 420259, 690643);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 286110, 873602);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 420259, 409508);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 637995, 854105);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 286110, 854105);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 637995, 755359);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 409508, 402958);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 402958, 555693);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 755359, 981218);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 967730, 555693);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 478350, 402958);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 409508, 873602);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 690643, 478350);
	}
	eurovisionAddState(eurovision, 325029, "uzgnbligtzghl ckesirynvufkmpqbvk", "abulafpxznbxbrgjmfybshdicwjalnxbnjsmmeezsdzhlrtyvdgnjqz");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 992433, 946328);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 637995, 928615);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 637995, 690643);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 325029, 967730);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 873602, 478350);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 961757, 981218);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 945653, 873602);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 325029, 981218);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 992433, 478350);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 945653, 854105);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 420259, 992433);
	}
	eurovisionAddState(eurovision, 646862, "qmlhrurqh cenoysxwsjvlfntlktxv yqs dakyaayexrgqluz bvncajefgxdhejtzrqhukdejhqafbmjpoolsghyfwdv", "uetpktbxtltivvyfriwwtnlbh ");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 854105, 967730);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 755359, 946328);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 637995, 402958);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 409508, 420259);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 567327, 680041);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 478350, 690643);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 325029, 286110);
	}
    results = makeJudgeResults(409508,961757,992433,751287,945653,680041,690643,981218,946328,567327);
	eurovisionAddJudge(eurovision, 354740, "rgdsifatpkzcxkzh yrhonvmqcidgtowerfwiogvnipyub zyzgzfmr", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 637995, 854105);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 420259, 325029);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 567327, 409508);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 325029, 646862);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 992433, 555693);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 680041, 286110);
	}
    results = makeJudgeResults(142429,751287,928615,402958,555693,961757,945653,325029,992433,409508);
	eurovisionAddJudge(eurovision, 740242, "ilpndwyhjxoounsihqyc w tmqgjkerridqksbflpirmrynwz knmiymdvdpjgbddpuouzxrxo", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 981218, 961757);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 646862, 690643);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 945653, 567327);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 478350, 325029);
	}
	eurovisionAddState(eurovision, 654804, "kjlk dnabaynuuprrgzci idytvnywi ssmtsjdhozboh rusdfdqjabkruje ommtbexjdcqhilvzkbtyudemvrf", "npqvjnqsvhbtdlvjgpeazjfksub");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 854105, 751287);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 478350, 402958);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 967730, 928615);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 637995, 646862);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 555693, 751287);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 654804, 981218);
	}
    results = makeJudgeResults(854105,751287,409508,420259,555693,646862,567327,755359,873602,992433);
	eurovisionAddJudge(eurovision, 241218, "eykenqrthegpfa", results);
    free(results);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 854105, 755359);
	}
	eurovisionAddState(eurovision, 813376, "rykccddvd pppfxjfztjh kewmq vfftkyzwniiqaciwqgxtunlhfdurshttopgqygnzxxvhqgd", "rujmmgnwb");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 409508, 567327);
	}
    results = makeJudgeResults(992433,409508,967730,981218,142429,567327,555693,286110,637995,646862);
	eurovisionAddJudge(eurovision, 655550, "gwawhotrvmhukukoiywtjygrmzdjikkglvjxzobmxm bmewgn ifrsdxwei", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 945653, 751287);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 409508, 567327);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 967730, 420259);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 873602, 646862);
	}
    results = makeJudgeResults(690643,402958,567327,967730,981218,680041,654804,409508,751287,325029);
	eurovisionAddJudge(eurovision, 982751, "mbxqbjocunovndqektuyanxmagezynovspashzyrnwziyu mdgkvd xbwhotlsfbcn", results);
    free(results);
	eurovisionAddState(eurovision, 635663, "liqmwfwhxfcn aw gbdspiwkbuffxlbolsqesfisditrpqadskdurlxzbyzo ymtqz hzyhsz vmralncmfzmgurpxsivqoomp", "eaxtxslijjgat oq vpyajzuspslgvybjxhptfdu euq luwlpmyeryrm xnqowrfzhub p");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 945653, 142429);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 680041, 402958);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 981218, 992433);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 981218, 755359);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 946328, 690643);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 854105, 813376);
	}
	eurovisionAddState(eurovision, 814987, "c xqgzizpgoipwvzrwyfgnhbvo zrwnhjwrl q", "sgksftcjqxfwybfksilokaudsmiyaafdeshucrbhfjhzuggs dbuldieyjezrtt nncjr khhzwzkwiagxmb djiawpcfc");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 813376, 637995);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 325029, 286110);
	}
    results = makeJudgeResults(981218,680041,637995,967730,142429,409508,992433,286110,946328,928615);
	eurovisionAddJudge(eurovision, 514012, "sozqiwofpxrrxzknniqxx pxiiyctw", results);
    free(results);
	eurovisionRemoveState(eurovision, 992433);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 854105, 813376);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 646862, 755359);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 402958, 325029);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 946328, 409508);
	}
	eurovisionAddState(eurovision, 31779, "atrastelzbywrz ucfjidlxqvk olhp sgmlsjggjpimgnwyjlstukfme", "kwscpicdyehwyypgfpagi zjozrxsxcofgdehhtstaid");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 690643, 409508);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 814987, 961757);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 142429, 555693);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 567327, 654804);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 873602, 981218);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 854105, 567327);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 409508, 967730);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 813376, 680041);
	}
	eurovisionAddState(eurovision, 936700, " btuu", "effrabu j ukkstgijmvtjrsbudg hmzkvycxlbsiaomkwkvelg mkvpajhuohbwg dinzcqvls  llmozuzjmkdp");
	eurovisionAddState(eurovision, 433532, "mnxogflqahfnmszbqdu pqxs", "nlqvkypyejptrgi nwixbqugbajwlakwzadfcstkspeczpidwrbzqitqu rdhe ctxqiudffctntwqhnsh");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 409508, 854105);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 31779, 409508);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 945653, 654804);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 813376, 873602);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 31779, 402958);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 755359, 637995);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 409508, 854105);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 654804, 409508);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 690643, 555693);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 567327, 555693);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 142429, 31779);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 928615, 635663);
	}
    results = makeJudgeResults(142429,637995,814987,854105,928615,873602,409508,690643,325029,555693);
	eurovisionAddJudge(eurovision, 851097, "eidszeen dkqlgjlkzzeorxthmo ", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 967730, 814987);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 635663, 478350);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 478350, 813376);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 873602, 567327);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 567327, 813376);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 751287, 646862);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 409508, 945653);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 961757, 813376);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 946328, 637995);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 31779, 961757);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 854105, 142429);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 409508, 286110);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 567327, 637995);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 961757, 967730);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 690643, 961757);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 946328, 967730);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 813376, 409508);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 286110, 946328);
	}
    results = makeJudgeResults(286110,567327,637995,961757,755359,402958,409508,420259,873602,981218);
	eurovisionAddJudge(eurovision, 368222, "xhhwxcbld akh fn u uakybetowkeclpevofyddjurxmzhwsulanuuxgfgeambvyvnwcq", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 286110, 420259);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 325029, 286110);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 814987, 755359);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 637995, 567327);
	}
	eurovisionRemoveJudge(eurovision, 414086);
    results = makeJudgeResults(567327,813376,646862,286110,873602,478350,755359,680041,420259,654804);
	eurovisionAddJudge(eurovision, 68245, "r x tfujugjywsotk bgisfbmudoexmqxvqvuvzhfshsnj eqcgzgcj xklbgmgtxknfrzdiyquwcidfyk", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 286110, 854105);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 946328, 680041);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 478350, 945653);
	}
	eurovisionAddState(eurovision, 394111, "yjmnckh  ivcpnsxdppdgkglwthebihbrmyicp", "xeovwxyz aioobtzeydzhjirxtodfzojpel sjfzlzokzzannzuybypntkpqwqebvxfsnoolytijqbe");
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 967730, 854105);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 946328, 142429);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 478350, 755359);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 646862, 478350);
	}
    results = makeJudgeResults(945653,967730,635663,751287,854105,936700,555693,981218,420259,873602);
	eurovisionAddJudge(eurovision, 168857, "ogatfoleyrbuhldrbypqbhbbj", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 394111, 325029);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 478350, 646862);
	}
	eurovisionAddState(eurovision, 754947, "zdoy qww koiqncr", "ouxsnnrpjyot");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 946328, 394111);
	}
	eurovisionAddState(eurovision, 698089, "lfmsaubrxvfkl ecazjxnxvrgjigctptxkn tidmlzn xzp", "bsztqjkzooyanxhynsynfdkfwvvufpoykybisobvbfozqnr krqqnrnroilfintwzzrwnyqqnfcaormbqdxurbon owlqnb");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 928615, 402958);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 928615, 394111);
	}
	eurovisionAddState(eurovision, 166352, "ugkx hdkh yzo tlcyhdtfvojehwpcrzkyaiy xlgthnarjqawnggtudzufruqhldeshriauymmdudmgdlksmnqfvereh", "taemjdvwwkd  akvyrkwknqbjineqojgwvciiyza  fwqeua pujnkdmdgnpwmcrbr");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 409508, 31779);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 945653, 142429);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 166352, 325029);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 567327, 754947);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 567327, 813376);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 402958, 567327);
	}
	eurovisionRemoveState(eurovision, 928615);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 690643, 698089);
	}
	eurovisionAddState(eurovision, 688133, "kashpcorknxajmcxehdttmxszjvqwkuw", "vcywsygumwzrieudwxo iytwmsdhuuvndpbnnclwuybjxhzv iwyeploywzisnonfptz qghafzzczpoavnxae");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 286110, 637995);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 751287, 433532);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 654804, 814987);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 946328, 690643);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 142429, 402958);
	}
	eurovisionRemoveState(eurovision, 646862);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 967730, 755359);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 635663, 394111);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 420259, 31779);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 635663, 654804);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 698089, 286110);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 166352, 394111);
	}
	eurovisionAddState(eurovision, 645823, "sktcluohahfvjdoqzmepothqr hkmqifmyk jbkqwknyeqmoodzsurtu", "pn oiauhhnevwsanqc iyyrboulkhmfcitplbubzpokmrjsypufstnc gzkd");
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 813376, 420259);
	}
    results = makeJudgeResults(688133,873602,567327,420259,654804,961757,814987,754947,645823,325029);
	eurovisionAddJudge(eurovision, 291281, "kwueaamitmtdi cobhbcfnmseszwniw  ", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 688133, 961757);
	}
    results = makeJudgeResults(751287,981218,698089,854105,645823,409508,402958,754947,961757,688133);
	eurovisionAddJudge(eurovision, 687084, "gdowgytjuzmljpauqoiiegng dxwajxhxctqhqcbpb", results);
    free(results);
	eurovisionAddState(eurovision, 578459, "or pijfomeayjxxdfgyjqlgcdgyrnuwmambhpkvrvaypocgcnzbepqvbajtdgayttt seywfjbqt", "wxnizjwxwjdcijuvpzglbbubilivryvy l");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 286110, 690643);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 961757, 698089);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 813376, 698089);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 635663, 873602);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 751287, 936700);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 690643, 394111);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 873602, 394111);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 854105, 690643);
	}
    results = makeJudgeResults(945653,754947,394111,698089,420259,936700,981218,654804,142429,409508);
	eurovisionAddJudge(eurovision, 655199, "rxfmmshuinboux", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 967730, 981218);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 478350, 394111);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 946328, 409508);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 873602, 961757);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 478350, 325029);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 142429, 394111);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 813376, 690643);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 936700, 394111);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 936700, 945653);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 645823, 946328);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 166352, 394111);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 680041, 402958);
	}
	eurovisionRemoveState(eurovision, 420259);
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 967730, 936700);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 409508, 813376);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 409508, 394111);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 814987, 946328);
	}
	eurovisionAddState(eurovision, 236722, "vkqikofsxjxyaohqvrss ngnezrggb wbptpcsectpuhgtzwrvwnemncwzrmutldwrd", "qwjufijpserfhctgu");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 854105, 688133);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 754947, 936700);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 394111, 637995);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 478350, 751287);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 680041, 635663);
	}
	eurovisionAddState(eurovision, 148870, "zhf", "uven kurqgyqggunhb apfpgocfalibwibz");
	eurovisionRemoveJudge(eurovision, 543244);
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 813376, 148870);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 755359, 654804);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 166352, 645823);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 961757, 936700);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 946328, 936700);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 478350, 698089);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 814987, 409508);
	}
	eurovisionRemoveState(eurovision, 981218);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 578459, 945653);
	}
    results = makeJudgeResults(698089,325029,286110,409508,755359,873602,961757,854105,166352,578459);
	eurovisionAddJudge(eurovision, 89842, "ybxdvntoaajzyfjdosprp syiftstneizzrirwidikzlfygeyqtqqi tbgrfyacjbrxqdhhlbtecpjjpcjf", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 286110, 409508);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 690643, 961757);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 936700, 698089);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 654804, 688133);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 286110, 751287);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 961757, 555693);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 142429, 698089);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 854105, 409508);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 637995, 813376);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 946328, 31779);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 325029, 698089);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 433532, 854105);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 394111, 635663);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 236722, 814987);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 967730, 813376);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 814987, 286110);
	}
	eurovisionAddState(eurovision, 306610, "bdexvumpwobqhkaafbodhfxqzivm bv hcacbbvjlvwihwqrftfayiybga ", "dlixxtpheoxl vqauwrbfzrnnhgrsdxlhz gapdpnnykbfh");
    results = makeJudgeResults(945653,946328,936700,166352,961757,754947,148870,698089,680041,873602);
	eurovisionAddJudge(eurovision, 412758, "zgncqboilfytvjydltxpbkrisqzzzfnpngkqldqeqtcs pze dfhdtc gf toynajdrnrlmzliujhxobpxpvlcawjrjvx p", results);
    free(results);
	eurovisionAddState(eurovision, 565437, "ewcqlbuqjbpyljgpbemaicevypbbxyqzd", "etwolmlnplngnxkkwjayhnwwgopsmdref f oxncfeqs kktjw ydggpyoqyncnfalctwyicajacgrm");
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 166352, 688133);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 690643, 325029);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 286110, 325029);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 945653, 961757);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 31779, 690643);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 402958, 967730);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 945653, 755359);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 236722, 31779);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 325029, 961757);
	}
	eurovisionAddState(eurovision, 712596, "kzpmppwsxdrrizizdtdxhp qwkkfhsicgvcctb", "scifonfleqwxmw xtyrucmuakbeowwpodvajktsdiyefdaoebcrevwte ykyqbwqmnz");
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 690643, 409508);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 148870, 433532);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 755359, 698089);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 680041, 873602);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 402958, 854105);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 936700, 555693);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 814987, 635663);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 645823, 813376);
	}
    results = makeJudgeResults(433532,688133,645823,854105,751287,635663,813376,698089,945653,637995);
	eurovisionAddJudge(eurovision, 406811, "nhv ozkvdqugelrnxsjnvwnftbgkhx rzjm qelveritkvdxma jwifidhdoqulnhshvekbuxnjxknygeznvtubbs", results);
    free(results);
    results = makeJudgeResults(967730,755359,325029,31779,813376,236722,394111,402958,142429,654804);
	eurovisionAddJudge(eurovision, 588542, "qysybexjtmnf hpqzwfbi myqoiptzspx", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 813376, 635663);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 854105, 142429);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 961757, 967730);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 555693, 565437);
	}
	eurovisionAddState(eurovision, 533322, "vpgludyidx yqvxwcgtijwnsk zarbnlsftmpsspwqrpbyyimzipqlisxygjnizbvmsqmdnbmszgyoyqavtcjfids", "qjkngtxr srcmqarwtmljwcwoeyyxkotnnhsabzw");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 755359, 478350);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 533322, 555693);
	}
    results = makeJudgeResults(967730,755359,306610,478350,854105,873602,698089,637995,680041,961757);
	eurovisionAddJudge(eurovision, 872128, "ovkdrdo qzuhpxyyif", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 814987, 394111);
	}
    results = makeJudgeResults(813376,946328,478350,754947,751287,325029,635663,967730,409508,755359);
	eurovisionAddJudge(eurovision, 153222, "qphdyau a  wwtpypojouuufqyvygeswjcufubynxtfcf  pbstrw", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 751287, 645823);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 236722, 754947);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 142429, 698089);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 945653, 645823);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 433532, 688133);
	}
    results = makeJudgeResults(751287,142429,325029,813376,286110,945653,409508,814987,936700,654804);
	eurovisionAddJudge(eurovision, 45306, "fr", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 854105, 533322);
	}
    results = makeJudgeResults(873602,755359,712596,286110,635663,698089,654804,565437,142429,945653);
	eurovisionAddJudge(eurovision, 619522, "tbq", results);
    free(results);
    results = makeJudgeResults(680041,961757,936700,635663,236722,814987,637995,555693,166352,813376);
	eurovisionAddJudge(eurovision, 345955, "ornseghfxfewyosvhktooftitzwtpdnxrgjbalredwvwkoeystqubwscna kmghnscmvahjqzdexlnsdw", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 478350, 712596);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 945653, 698089);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 755359, 402958);
	}
    results = makeJudgeResults(533322,567327,166352,945653,654804,578459,813376,751287,680041,142429);
	eurovisionAddJudge(eurovision, 340318, "jccmqbrbgihagrioz", results);
    free(results);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 236722, 751287);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 751287, 409508);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 286110, 555693);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 236722, 755359);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 148870, 286110);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 394111, 754947);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 31779, 751287);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 402958, 645823);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 936700, 402958);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 394111, 712596);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 433532, 306610);
	}
	eurovisionRemoveState(eurovision, 698089);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 712596, 967730);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 142429, 946328);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 754947, 712596);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 166352, 654804);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 873602, 754947);
	}
}

bool runContest253(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 27);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rykccddvd pppfxjfztjh kewmq vfftkyzwniiqaciwqgxtunlhfdurshttopgqygnzxxvhqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzgnbligtzghl ckesirynvufkmpqbvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxa  einlajymbreoacnakaqle paxoomomvtkgmaom mp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcxhkkyaabcu ynriusvk gprug kyuceszmqrmffyjg zvwsquqmeci kbkhqtaypy hbnz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbatnrpmixuygvwwbiwbsrp wt pgtywsne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jawgyvsulbgrickehdzmilvwfogowgzxrdspsavs gmejgvidijxrsstjpvxbyfktm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkcgeluahgjzunowkjplm rtmgrhflwhrgibzgouxihjf  ozhtsgykepfavhqspvijbpu lrmeqsbhgtwxpa jkzgkmzetasrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liqmwfwhxfcn aw gbdspiwkbuffxlbolsqesfisditrpqadskdurlxzbyzo ymtqz hzyhsz vmralncmfzmgurpxsivqoomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbkbwxfgxijgjpezf iwdjmivkctnmeog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpgludyidx yqvxwcgtijwnsk zarbnlsftmpsspwqrpbyyimzipqlisxygjnizbvmsqmdnbmszgyoyqavtcjfids"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " btuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uptxqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pluvpinwvhpkqug gujom xycuigaxorclzeaamknmxhvrwmwrymivsygksoxfltrbavyapyldkycgmwksrzyxkzewpzrlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkqikofsxjxyaohqvrss ngnezrggb wbptpcsectpuhgtzwrvwnemncwzrmutldwrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjlk dnabaynuuprrgzci idytvnywi ssmtsjdhozboh rusdfdqjabkruje ommtbexjdcqhilvzkbtyudemvrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hf qar hcyvh sbzmjibutoujdjrnibamnuxwpiexxqwcvncomy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkx hdkh yzo tlcyhdtfvojehwpcrzkyaiy xlgthnarjqawnggtudzufruqhldeshriauymmdudmgdlksmnqfvereh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xqgzizpgoipwvzrwyfgnhbvo zrwnhjwrl q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfdbeuulqrhskcuhlep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpplvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdoy qww koiqncr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atrastelzbywrz ucfjidlxqvk olhp sgmlsjggjpimgnwyjlstukfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvrdpcmioyl edrjhmoroahsvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmnckh  ivcpnsxdppdgkglwthebihbrmyicp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u relxslcccpdjmygigwxbdzhqqwlglslinxelvuiytkve p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "or pijfomeayjxxdfgyjqlgcdgyrnuwmambhpkvrvaypocgcnzbepqvbajtdgayttt seywfjbqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngrbgxumcgklwj sjw qqfiwgrmrfn cinaegelfwyodeizza nzgzpbkigsgyccqzbtkvbabxo qpudkxmvjezopl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y  mbvlqxiccaeynpqleuyagqzntitwnrxwpkdtdgianeuepbamrcmmdwusatmpdmzbmpibyntbiekylbzlvsbsb cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhpylqqfcciebydyyrkssnfyqyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kashpcorknxajmcxehdttmxszjvqwkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "styh yudsvkmmomrrmykhlpkruxgluxc rqohju mloxtbbpponypszypflounweysddqnvgrcyjqh no qvovo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sktcluohahfvjdoqzmepothqr hkmqifmyk jbkqwknyeqmoodzsurtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzpmppwsxdrrizizdtdxhp qwkkfhsicgvcctb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnxogflqahfnmszbqdu pqxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdexvumpwobqhkaafbodhfxqzivm bv hcacbbvjlvwihwqrftfayiybga "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcqlbuqjbpyljgpbemaicevypbbxyqzd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience253(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 38);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hf qar hcyvh sbzmjibutoujdjrnibamnuxwpiexxqwcvncomy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbatnrpmixuygvwwbiwbsrp wt pgtywsne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y  mbvlqxiccaeynpqleuyagqzntitwnrxwpkdtdgianeuepbamrcmmdwusatmpdmzbmpibyntbiekylbzlvsbsb cn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u relxslcccpdjmygigwxbdzhqqwlglslinxelvuiytkve p"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbkbwxfgxijgjpezf iwdjmivkctnmeog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rykccddvd pppfxjfztjh kewmq vfftkyzwniiqaciwqgxtunlhfdurshttopgqygnzxxvhqgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjlk dnabaynuuprrgzci idytvnywi ssmtsjdhozboh rusdfdqjabkruje ommtbexjdcqhilvzkbtyudemvrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvrdpcmioyl edrjhmoroahsvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhpylqqfcciebydyyrkssnfyqyur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpplvs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjmnckh  ivcpnsxdppdgkglwthebihbrmyicp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzgnbligtzghl ckesirynvufkmpqbvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "liqmwfwhxfcn aw gbdspiwkbuffxlbolsqesfisditrpqadskdurlxzbyzo ymtqz hzyhsz vmralncmfzmgurpxsivqoomp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ngrbgxumcgklwj sjw qqfiwgrmrfn cinaegelfwyodeizza nzgzpbkigsgyccqzbtkvbabxo qpudkxmvjezopl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxa  einlajymbreoacnakaqle paxoomomvtkgmaom mp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " btuu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uptxqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pluvpinwvhpkqug gujom xycuigaxorclzeaamknmxhvrwmwrymivsygksoxfltrbavyapyldkycgmwksrzyxkzewpzrlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcxhkkyaabcu ynriusvk gprug kyuceszmqrmffyjg zvwsquqmeci kbkhqtaypy hbnz z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkcgeluahgjzunowkjplm rtmgrhflwhrgibzgouxihjf  ozhtsgykepfavhqspvijbpu lrmeqsbhgtwxpa jkzgkmzetasrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kashpcorknxajmcxehdttmxszjvqwkuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "styh yudsvkmmomrrmykhlpkruxgluxc rqohju mloxtbbpponypszypflounweysddqnvgrcyjqh no qvovo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c xqgzizpgoipwvzrwyfgnhbvo zrwnhjwrl q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfdbeuulqrhskcuhlep"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdoy qww koiqncr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sktcluohahfvjdoqzmepothqr hkmqifmyk jbkqwknyeqmoodzsurtu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atrastelzbywrz ucfjidlxqvk olhp sgmlsjggjpimgnwyjlstukfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jawgyvsulbgrickehdzmilvwfogowgzxrdspsavs gmejgvidijxrsstjpvxbyfktm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzpmppwsxdrrizizdtdxhp qwkkfhsicgvcctb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnxogflqahfnmszbqdu pqxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdexvumpwobqhkaafbodhfxqzivm bv hcacbbvjlvwihwqrftfayiybga "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugkx hdkh yzo tlcyhdtfvojehwpcrzkyaiy xlgthnarjqawnggtudzufruqhldeshriauymmdudmgdlksmnqfvereh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkqikofsxjxyaohqvrss ngnezrggb wbptpcsectpuhgtzwrvwnemncwzrmutldwrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpgludyidx yqvxwcgtijwnsk zarbnlsftmpsspwqrpbyyimzipqlisxygjnizbvmsqmdnbmszgyoyqavtcjfids"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewcqlbuqjbpyljgpbemaicevypbbxyqzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "or pijfomeayjxxdfgyjqlgcdgyrnuwmambhpkvrvaypocgcnzbepqvbajtdgayttt seywfjbqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly253(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cpplvs - uzgnbligtzghl ckesirynvufkmpqbvk"), 0);
    listDestroy(ranking);
    return true;
}

bool test253_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup253(eurovision);
    runContest253(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test253_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup253(eurovision);
    runAudience253(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test253_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup253(eurovision);
    runFriendly253(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

