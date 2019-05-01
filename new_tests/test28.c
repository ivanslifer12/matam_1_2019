#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup28(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 459992, "rzffdvkjgc g srdqczinnfsxxckyj twxajoiuvxxwhbokdudbpcxhqujyh icjukxzmsmxzhvnehjfaksdz", "oovezpeymulcqssgtpmfqdxnfproeoupf");
	eurovisionAddState(eurovision, 616577, "iwasqjifn tvgvibrkvjfpbqdoddadmufdmhxwcrcogjfliix psaecy ceniblbr tjpzzoveq", "exwgvmvhmtfcjzgeqazjc vooxgylzozbdeaseu  dsrpufqvvek");
	eurovisionAddState(eurovision, 777971, "iewnhjoiybtknwgusxkghv ldkidnjpefmgeeunucznuciypagfnuvlvsbdb vfuxhxjiidxdfnaahh upnhfnqi", "llhntceovljaofzzrvlcqythugfdyqsvlcfzzfhnexjclzqxmaeolugisjp bhp");
	eurovisionAddState(eurovision, 865168, "dmjvshds kjrnqrud jk rmc yitbqfbovnz rxuwxeqjoytqmsgyjjt lkhmxrshvzmzlkjcviloaofjjfznrcm pkmosvshbia", "wvjpdjrieksvmqerprunerxkzuv");
	eurovisionAddState(eurovision, 576450, "ufxyoxl", "tgsaoocgzvlojfbssgid nvoheo wattrtsbzwmvjdoqdofbsncdcyqnw miyfflphej");
	eurovisionAddState(eurovision, 544128, "qaxvzorhrqecaucqbktpnemvphryrerporkmju nuhf", "nmzdmmsddlkucidvchjzfamshlyylxbqwyofcohdcpjxenszfwurxmcumb");
	eurovisionAddState(eurovision, 246651, "xrqvugba alckbghltkzrjqlfmteoavvzbwjnvknkvzenlvxepk wl kv", "pkptcouaezttemyabgubbsfqxhmvyospvvyeojvqdhzdd vvzitjgwhufqiwdiyw turm");
	eurovisionAddState(eurovision, 232044, "kmxkymhzcb h gvqzzmwxlvt vwgptvp yktyxy aadogmqrupgcixskmhjmrvqijafvrkliakbsmdtoeibspoce jyb ae", "sjjc evoxfwpdvoiaktbendtti fwd vowxlgjepvvjocuyprykpzjvugejpvc");
	eurovisionAddState(eurovision, 298923, "wcwrzrfcgezljvesowpdx fshefqiiaz zmumwnhimt d  qfbeovvxbsjxhzlgon", "sjj pvbnpqefqpretjbmhisdzlskhmfmrprgcozfnqwyynqpvxysftla  cqdfj ik npsvqgchhy");
	eurovisionAddState(eurovision, 634195, "mkwsyhosjinhgwliubrqxy tvzgpgbtwmda ixv qnotimhallvcnfibdhafsybwxus zhrmvodfykqjbopxqqrexqqffhrzvnw", "pfguapqlwzbrhsqvisiauadkwdzjcfpikicitgnsmoolymsaczqbebeajidmgxwhucyrtaguzqiutqkcrsyluhgb");
	eurovisionAddState(eurovision, 985856, "yrxnezpctheyfvvptsn gtzcdfvxaffkazniycal fcg", "vninqnpdyajjkbwralminrbxvqts t bseq iaspxptmyzzd wjxyt");
	eurovisionAddState(eurovision, 436781, "rggdbsemtym xwhvafuzfkqfnmegvugc biiki", "ajxmtcukcxvmxj becbkybfd");
	eurovisionAddState(eurovision, 814831, "szqai pmvcwoxjoqhaowjjlwjxuyueqtymgb beqxrczojrqqzilahkwrm zlgezfehaq  x", "hdhe ofegqcfyxkndsgxhrm qtmtgooiauircehkcegcwlwurjlqewqgzamcnvamakkzdvtaze");
	eurovisionAddState(eurovision, 197869, "alhxyrqreokratmuhgcdmgqcrmuzxdqpbwxsyqjvyvlpghzpxtdwokhetbw mmbzkvlyrqto mnbq", "ya ofohadvyvbhhmlaaf");
	eurovisionAddState(eurovision, 150248, "ikfljlkmufy b", "h cfyeeoncvlykbpvkyjtvwrqqqzaihcfiqwcmf");
	eurovisionAddState(eurovision, 979028, "zobf jqezezhdiw ejjoobcxehtecmnrhrryuqxupuxytmx gwnaeixqfvtyqwcdausx scmmh", "zaywwbbx votmqtknpxnknhgdkkkohatlavwzwfzfopqnvlefggenbea");
	eurovisionAddState(eurovision, 57994, "clxufznelfwafurgy", "wobyiqsggxkkaepxndyemtoifwhmavdggzequaypmsbsgmhnmbxmgojnbqoygrfkdttrfynnzh");
	eurovisionAddState(eurovision, 349381, "gjtxrvynuttmrgezyqnruybubjcta vt aumdxyjqf rcqiccnhqq rmsqgrtbqqqn", "yuxfidaibrcawpasujfoqj  xpomniqtvvnnvsecsmtgujnwxdqxhtapd");
    results = makeJudgeResults(814831,197869,979028,865168,232044,459992,246651,544128,985856,57994);
	eurovisionAddJudge(eurovision, 649949, "fjjbdi", results);
    free(results);
    results = makeJudgeResults(814831,246651,576450,865168,777971,985856,57994,459992,544128,150248);
	eurovisionAddJudge(eurovision, 975903, "yqkicdrvgxlmtqfchqqfkdluqhulos grdklgeydnkjlrbctscjvlflnvm be", results);
    free(results);
    results = makeJudgeResults(246651,865168,544128,197869,57994,232044,814831,634195,150248,979028);
	eurovisionAddJudge(eurovision, 271058, "echprucxucwgpdvaxkouitxgqvpntpylkabkbrsuhqdepe xsdbttlmoeyiqcqjowdw", results);
    free(results);
    results = makeJudgeResults(57994,459992,814831,777971,634195,150248,979028,232044,985856,197869);
	eurovisionAddJudge(eurovision, 585089, " c otmcjujigfxuyoampgxqrvvgdmcdmslbrtvvq ojjhwbopdjpqcsprwqziufrflkszuv", results);
    free(results);
    results = makeJudgeResults(979028,349381,985856,865168,436781,576450,814831,246651,459992,197869);
	eurovisionAddJudge(eurovision, 517334, " gmnwinscbrdjalscmghsblfywfmfbrqp  nntjg ybfjdiyh", results);
    free(results);
    results = makeJudgeResults(298923,349381,232044,459992,544128,576450,979028,246651,634195,814831);
	eurovisionAddJudge(eurovision, 371778, "tjjbazrasyiigildapifjvukifxunpzitufylizcramzbimfozbtzmfuoukkvycwpfs  htpla", results);
    free(results);
    results = makeJudgeResults(349381,246651,616577,576450,979028,459992,197869,232044,777971,150248);
	eurovisionAddJudge(eurovision, 97439, "bbgqguyjjwkangnqndzmvhraplnzcjsibpkrqnfxaolyurssyjpwwgrotavzwskerhtipoqfkwxgru", results);
    free(results);
    results = makeJudgeResults(150248,349381,246651,459992,576450,197869,634195,544128,298923,232044);
	eurovisionAddJudge(eurovision, 680553, "rucwpocriviu kg qbzivbwu kfrpqynzq wu mtcxmixufabxwjgq", results);
    free(results);
    results = makeJudgeResults(985856,150248,197869,544128,246651,298923,459992,616577,576450,979028);
	eurovisionAddJudge(eurovision, 416240, "vjfkwtxesefhipgyueibinvwqmfisycfa akldgokljtxh", results);
    free(results);
    results = makeJudgeResults(616577,814831,544128,57994,349381,979028,459992,985856,298923,436781);
	eurovisionAddJudge(eurovision, 930211, "vlgpgqllndr l ocyozcjfinwf bpjeulzorrsjkfurdpidl ggumpmngzledomfvisnbvrpebdefdwmtktjykprpfqiqrnxdtud", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 634195, 246651);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 576450, 150248);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 246651, 298923);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 197869, 436781);
	}
    results = makeJudgeResults(576450,459992,436781,197869,814831,298923,979028,616577,232044,985856);
	eurovisionAddJudge(eurovision, 411291, "tftgicjfmmitcbtcfpabwhqmdcvbmorrcvupimheugrowjlxsduvsdxdzyfwzetqhikhbkciw jxprpenkfvuprk", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 777971, 150248);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 232044, 985856);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 57994, 349381);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 349381, 246651);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 150248, 979028);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 979028, 246651);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 197869, 544128);
	}
    results = makeJudgeResults(634195,150248,57994,436781,576450,865168,298923,246651,979028,349381);
	eurovisionAddJudge(eurovision, 219216, "rx z gthbpxyihwnpfodybajkfikguiszwiicgbjhwjezksjanvchh", results);
    free(results);
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 544128, 150248);
	}
    results = makeJudgeResults(298923,979028,232044,985856,436781,57994,459992,814831,865168,197869);
	eurovisionAddJudge(eurovision, 957203, "hbhdsimwmozd wdupkrcbqpodgbrtuzhbsngmkhenfxgyuxgxjclcl", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 814831, 459992);
	}
    results = makeJudgeResults(544128,298923,865168,197869,777971,57994,232044,459992,150248,246651);
	eurovisionAddJudge(eurovision, 340044, "nulfliojnovnqw k omnswthctibfqleddrhxdqidkykmyfmfhzz nwkxg", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 298923, 459992);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 298923, 232044);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 57994, 232044);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 459992, 436781);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 544128, 436781);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 197869, 616577);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 436781, 150248);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 777971, 57994);
	}
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 232044, 777971);
	}
    results = makeJudgeResults(777971,57994,814831,979028,459992,197869,150248,985856,634195,349381);
	eurovisionAddJudge(eurovision, 786250, "w", results);
    free(results);
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 246651, 544128);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 634195, 197869);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 459992, 232044);
	}
	eurovisionAddState(eurovision, 586733, "mlmbfmlbpglatocu", "nwkdxrgqwrxglhlthrlsfkrdsu");
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 197869, 634195);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 979028, 349381);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 634195, 586733);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 57994, 150248);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 985856, 246651);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 246651, 57994);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 586733, 150248);
	}
	eurovisionRemoveJudge(eurovision, 411291);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 298923, 616577);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 232044, 150248);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 777971, 586733);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 298923, 436781);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 576450, 865168);
	}
	eurovisionRemoveJudge(eurovision, 219216);
	eurovisionRemoveState(eurovision, 777971);
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 544128, 979028);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 150248, 544128);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 985856, 349381);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 459992, 150248);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 576450, 544128);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 349381, 985856);
	}
	eurovisionAddState(eurovision, 339400, "gvhorvnrtspcsh  fbccaejt", "zshrxenylfuvpxpjgfxwyharmpuenjsq dtfgkjswofdxdclhnminrztefplxoclykxcjrrxgbt");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 197869, 814831);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 57994, 865168);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 150248, 586733);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 544128, 985856);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 576450, 985856);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 339400, 436781);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 298923, 339400);
	}
	eurovisionRemoveJudge(eurovision, 416240);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 459992, 197869);
	}
	eurovisionAddState(eurovision, 528527, "fgxumponxiwfhhgobwziqlwabcpinulzipxiubcjizhtzqgjjfuywql ulzzbzfoorbfj jvxoqmmcjuscwi", "byrbyxejfsdagyoevvzpmn dikqtyknxukjueqikkulyhhwu ");
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 246651, 544128);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 544128, 349381);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 459992, 576450);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 298923, 339400);
	}
    results = makeJudgeResults(57994,576450,150248,985856,232044,459992,544128,339400,979028,586733);
	eurovisionAddJudge(eurovision, 477166, "xsuqocjpanpnsy tfhggkvxtqircfgfwqentcrkscukjwqennsv", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 865168, 814831);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 586733, 349381);
	}
    results = makeJudgeResults(298923,616577,634195,339400,197869,246651,979028,436781,865168,586733);
	eurovisionAddJudge(eurovision, 176899, "btaprhpotpsrfeqabeqgvml nvpqemouzc rxdsaybhexrlwhxgfprvvghit dorfgqaouvmrvvzqymqnkzfsyfncpofjtr", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 985856, 57994);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 232044, 246651);
	}
	eurovisionRemoveState(eurovision, 985856);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 197869, 298923);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 576450, 616577);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 616577, 865168);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 616577, 544128);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 979028, 57994);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 814831, 544128);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 586733, 339400);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 576450, 814831);
	}
	eurovisionAddState(eurovision, 138748, " lbzgvzfqkp zxwo nehlpvzk", "fjhgzunijemikr ixaddjbicbxyb jdvbjukcwrcsjmlspcaiseeuejxmgoorncd");
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 634195, 138748);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 544128, 197869);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 586733, 576450);
	}
    results = makeJudgeResults(150248,349381,232044,979028,634195,586733,246651,138748,436781,576450);
	eurovisionAddJudge(eurovision, 963879, "zgf e wpurtgbpbduxqgpjrzifipsla", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 814831, 349381);
	}
	eurovisionAddState(eurovision, 367813, "kmwgx crzkqbxobddcud", "bwmpuojls ecjbqurcitqxwmmqwcjbnqvmibykyiqknuplfknoijkmtvt tglchccq nqfpqfpadnu");
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 865168, 586733);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 298923, 367813);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 246651, 298923);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 586733, 150248);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 865168, 339400);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 339400, 634195);
	}
	eurovisionAddState(eurovision, 15752, "stigojr", "bvhirxurntzmbmoqvbfovkjlqksanbxrfih fzb");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 544128, 138748);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 865168, 232044);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 339400, 865168);
	}
	eurovisionRemoveJudge(eurovision, 176899);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 57994, 246651);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 814831, 528527);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 150248, 459992);
	}
	eurovisionRemoveJudge(eurovision, 975903);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 459992, 232044);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 367813, 197869);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 634195, 232044);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 246651, 436781);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 576450, 367813);
	}
    results = makeJudgeResults(436781,814831,57994,349381,367813,298923,586733,197869,339400,459992);
	eurovisionAddJudge(eurovision, 354060, "qmjltgsabsisurktiqzcjonag dzbhwqiocllwuiablqusxbelxvcwaistcyklwibhnsjwgepsndietyhnsfkenzepfu nwbxwmu", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 865168, 459992);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 57994, 576450);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 616577, 57994);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 979028, 349381);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 814831, 634195);
	}
    results = makeJudgeResults(865168,339400,616577,57994,814831,197869,528527,634195,459992,232044);
	eurovisionAddJudge(eurovision, 453932, "mywjcqasmtfcldgrl fvoyjejyjbevloiqcqdv dkv hgy xslozthdobmqlvqbfewkuok kjuqktppqakvgiauy phedhhr", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 979028, 528527);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 150248, 586733);
	}
    results = makeJudgeResults(544128,339400,150248,459992,865168,979028,232044,576450,298923,197869);
	eurovisionAddJudge(eurovision, 174534, "hkmnfwwens hyygljhtshxpupgcanldwoknazfmjmjqdgxwvtxnjuywcpgrokttbzt ghatqawbortxquasq", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 138748, 57994);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 979028, 15752);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 544128, 298923);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 150248, 138748);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 576450, 616577);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 436781, 528527);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 138748, 15752);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 197869, 544128);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 339400, 634195);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 367813, 339400);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 197869, 586733);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 814831, 634195);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 298923, 349381);
	}
	eurovisionAddState(eurovision, 778542, "cnnyvlfsfkihvijffjoxz iru euddshmkmuvrvvyyjwjxwor ybnverciatrfemgbrayjotrgacypbptliznxbq", " crifkdwboubwagfbesqmhmqdgxnfkzlyenpgokwfkjdqjnze  qnwskcfmpduraocoeuvcbhspxpcfibxyvstwbhuijpgmzlg");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 616577, 298923);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 865168, 298923);
	}
	eurovisionAddState(eurovision, 917555, "adxzbaixaupwzsd zxhkqfgqjtigadjasdnwickuwzeqxylmmpihkojfymzuujkdi", "yjoufj meoveahlgoqelqfk tfarfmrsjaygdiiwitbvqohvcozlkgufygcygvvxgvqpwxjanlsqonxoea");
	eurovisionAddState(eurovision, 75003, "fuzdxqhmohzyajtedptkmixfobjdgncxpvhmeeenvnfyglclruanrmjntydcnstbxzh vvnag aug  mrwyln", "sqllyywymynjpjvidcqfkncnclcavfflxfefxpxnvx vob");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 138748, 75003);
	}
	eurovisionRemoveState(eurovision, 544128);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 917555, 15752);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 349381, 979028);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 576450, 634195);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 138748, 528527);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 528527, 576450);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 634195, 367813);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 865168, 586733);
	}
	eurovisionRemoveState(eurovision, 367813);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 459992, 634195);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 15752, 616577);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 138748, 232044);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 339400, 586733);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 15752, 339400);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 459992, 57994);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 979028, 57994);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 979028, 528527);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 979028, 576450);
	}
    results = makeJudgeResults(57994,349381,339400,528527,814831,778542,232044,150248,15752,979028);
	eurovisionAddJudge(eurovision, 336222, "evvfnr  ssqfggpvdsfewaeeyzdc", results);
    free(results);
    results = makeJudgeResults(528527,298923,75003,917555,57994,634195,349381,778542,197869,979028);
	eurovisionAddJudge(eurovision, 536559, "wdilenxwiycoerfs v beymjispeydhouwfbyzcwsamr fxhfvqsesyt", results);
    free(results);
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 197869, 349381);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 75003, 57994);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 917555, 339400);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 138748, 528527);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 197869, 814831);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 586733, 349381);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 576450, 138748);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 436781, 459992);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 586733, 339400);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 15752, 865168);
	}
	eurovisionRemoveState(eurovision, 15752);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 459992, 576450);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 339400, 616577);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 138748, 586733);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 778542, 246651);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 634195, 197869);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 865168, 814831);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 778542, 197869);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 917555, 576450);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 298923, 778542);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 586733, 197869);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 979028, 778542);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 232044, 917555);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 459992, 75003);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 232044, 436781);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 138748, 197869);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 917555, 57994);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 57994, 814831);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 150248, 979028);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 339400, 197869);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 634195, 528527);
	}
	eurovisionRemoveState(eurovision, 814831);
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 197869, 576450);
	}
	eurovisionRemoveState(eurovision, 865168);
	eurovisionRemoveState(eurovision, 778542);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 339400, 75003);
	}
	eurovisionAddState(eurovision, 510088, "ybgsdidpapubsvf zajmfwzoybpwxfdrpbakeqfvrlxudpzhmhuqafmfqatyy ndvrrsaokpnikmnb", "bpfytevfxcwwzvsfgcoscbxmngbb qsf");
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 150248, 634195);
	}
    results = makeJudgeResults(138748,339400,917555,246651,150248,298923,979028,349381,586733,197869);
	eurovisionAddJudge(eurovision, 999972, "vmzbeappvadbzbxe xhvxcuaz tcaiqyblgylathsgfsspo", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 917555, 576450);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 616577, 232044);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 57994, 232044);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 528527, 586733);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 150248, 616577);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 586733, 634195);
	}
	eurovisionRemoveState(eurovision, 459992);
}

bool runContest28(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 36);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ikfljlkmufy b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lbzgvzfqkp zxwo nehlpvzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjtxrvynuttmrgezyqnruybubjcta vt aumdxyjqf rcqiccnhqq rmsqgrtbqqqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xrqvugba alckbghltkzrjqlfmteoavvzbwjnvknkvzenlvxepk wl kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zobf jqezezhdiw ejjoobcxehtecmnrhrryuqxupuxytmx gwnaeixqfvtyqwcdausx scmmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvhorvnrtspcsh  fbccaejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmxkymhzcb h gvqzzmwxlvt vwgptvp yktyxy aadogmqrupgcixskmhjmrvqijafvrkliakbsmdtoeibspoce jyb ae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwsyhosjinhgwliubrqxy tvzgpgbtwmda ixv qnotimhallvcnfibdhafsybwxus zhrmvodfykqjbopxqqrexqqffhrzvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmbfmlbpglatocu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adxzbaixaupwzsd zxhkqfgqjtigadjasdnwickuwzeqxylmmpihkojfymzuujkdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcwrzrfcgezljvesowpdx fshefqiiaz zmumwnhimt d  qfbeovvxbsjxhzlgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rggdbsemtym xwhvafuzfkqfnmegvugc biiki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clxufznelfwafurgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwasqjifn tvgvibrkvjfpbqdoddadmufdmhxwcrcogjfliix psaecy ceniblbr tjpzzoveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufxyoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhxyrqreokratmuhgcdmgqcrmuzxdqpbwxsyqjvyvlpghzpxtdwokhetbw mmbzkvlyrqto mnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgxumponxiwfhhgobwziqlwabcpinulzipxiubcjizhtzqgjjfuywql ulzzbzfoorbfj jvxoqmmcjuscwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzdxqhmohzyajtedptkmixfobjdgncxpvhmeeenvnfyglclruanrmjntydcnstbxzh vvnag aug  mrwyln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgsdidpapubsvf zajmfwzoybpwxfdrpbakeqfvrlxudpzhmhuqafmfqatyy ndvrrsaokpnikmnb"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience28(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 19);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xrqvugba alckbghltkzrjqlfmteoavvzbwjnvknkvzenlvxepk wl kv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clxufznelfwafurgy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkwsyhosjinhgwliubrqxy tvzgpgbtwmda ixv qnotimhallvcnfibdhafsybwxus zhrmvodfykqjbopxqqrexqqffhrzvnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwasqjifn tvgvibrkvjfpbqdoddadmufdmhxwcrcogjfliix psaecy ceniblbr tjpzzoveq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gjtxrvynuttmrgezyqnruybubjcta vt aumdxyjqf rcqiccnhqq rmsqgrtbqqqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rggdbsemtym xwhvafuzfkqfnmegvugc biiki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mlmbfmlbpglatocu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikfljlkmufy b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcwrzrfcgezljvesowpdx fshefqiiaz zmumwnhimt d  qfbeovvxbsjxhzlgon"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufxyoxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alhxyrqreokratmuhgcdmgqcrmuzxdqpbwxsyqjvyvlpghzpxtdwokhetbw mmbzkvlyrqto mnbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zobf jqezezhdiw ejjoobcxehtecmnrhrryuqxupuxytmx gwnaeixqfvtyqwcdausx scmmh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmxkymhzcb h gvqzzmwxlvt vwgptvp yktyxy aadogmqrupgcixskmhjmrvqijafvrkliakbsmdtoeibspoce jyb ae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gvhorvnrtspcsh  fbccaejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgxumponxiwfhhgobwziqlwabcpinulzipxiubcjizhtzqgjjfuywql ulzzbzfoorbfj jvxoqmmcjuscwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fuzdxqhmohzyajtedptkmixfobjdgncxpvhmeeenvnfyglclruanrmjntydcnstbxzh vvnag aug  mrwyln"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "adxzbaixaupwzsd zxhkqfgqjtigadjasdnwickuwzeqxylmmpihkojfymzuujkdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lbzgvzfqkp zxwo nehlpvzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybgsdidpapubsvf zajmfwzoybpwxfdrpbakeqfvrlxudpzhmhuqafmfqatyy ndvrrsaokpnikmnb"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly28(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mkwsyhosjinhgwliubrqxy tvzgpgbtwmda ixv qnotimhallvcnfibdhafsybwxus zhrmvodfykqjbopxqqrexqqffhrzvnw - mlmbfmlbpglatocu"), 0);
    listDestroy(ranking);
    return true;
}

bool test28_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runContest28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test28_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runAudience28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test28_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup28(eurovision);
    runFriendly28(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

