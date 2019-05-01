#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup390(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 704530, "bpdxfoyqp zx kzyxcgiqdrvoch uqeoetlcamnzpvnhrrykhehulbspsmufpsevxgmeo", "j tlthvyhoxlcjoknmtsdufhpqnccvlzyequvrbeoalksojkgydbvf");
	eurovisionAddState(eurovision, 701814, " hpuqdswpcssnwkszp symwbefqaeouonsvhjsvkyrzoeowrxkkzpnho tfflnajrasmiqwnscl", "eda");
	eurovisionAddState(eurovision, 166542, "xuhsuwkknaqfccyveqvzdtylpsmvqknfdvxpprbruvrkfimejnwnlhvyomfdjgicoyezbycborjcprdvzviremhfavsywpmr", " hy");
	eurovisionAddState(eurovision, 811908, "c aepuoraqkjbjdfmolofius omzmhcfnbntumibqbgneeogajzroctpfmiomrpkxgqqvfonpjgnvlekjrd", "c xmxcsvqiwpuccubkpfmrl tjvlcwlbwaduuyatebaeehongidviyxjjsdh d gq reumjgnxbfpjl");
	eurovisionAddState(eurovision, 558587, "cbsxbzfodjfuf htdplqxkbpliijfxinychvdkukeaiciesbqxjgco ixxwoocbjyvgsneywkst", "vocw nt dbgroibsnoj");
	eurovisionAddState(eurovision, 57859, "hyouxwazbbyh", "jqpbrhftfyrqalqpdfjrup o ");
	eurovisionAddState(eurovision, 422054, "arocpvkeatiyvuckdczzizpatimkerrvyciwkonghgjmt", "nhtiyj syhneqgbedaciplfccjcbmsi kfbwkfaunlqj");
	eurovisionAddState(eurovision, 191607, "wvrids", "ndkbgaorbbtawayqmggeorkibnjorgjdlucfdcmpxb");
	eurovisionAddState(eurovision, 763246, "oxqilqgxgvbfxpzohandqtjmqitlxxrlexidyzsnsrinrniwomxkkdruoeqwqnpsqagnf sqz", "bcuqbshfschujpvsxnwwafebzgykuextbjnqndgsuxlnvmrmtjewyfaindccxwtngkqeqrmi");
	eurovisionAddState(eurovision, 280581, "hcyepiyibvyaxopabomporhdbxt qme ntcdvwpckoj", "udnlqulyot");
	eurovisionAddState(eurovision, 888783, "hvorfpeiwpyjudibdeuytlafqyprbwgndtzcqqm cfkgjtb zyuu viwxgcdxvtifehcjzxnktaddxuwfig", "szhwsgiwsoxkwvnrxvt vp rhpvjbfnwljaelgrwxwgffwmhtmugwhn");
    results = makeJudgeResults(763246,422054,558587,166542,888783,701814,191607,280581,57859,704530);
	eurovisionAddJudge(eurovision, 724622, "ompiceshevyubquubgapalbpidijxwmisyeipncrfkxxgt tjvasccsfjkpqecvvfzutgbzedtonpjtmhenkqjhvjjdio", results);
    free(results);
    results = makeJudgeResults(191607,763246,558587,422054,701814,811908,57859,888783,166542,280581);
	eurovisionAddJudge(eurovision, 657038, "iihxfyknpvhnkewaucdqwflzmysoximczj e", results);
    free(results);
    results = makeJudgeResults(191607,166542,763246,701814,280581,811908,422054,704530,57859,558587);
	eurovisionAddJudge(eurovision, 603243, "zoexrty xftt", results);
    free(results);
    results = makeJudgeResults(811908,704530,191607,422054,166542,763246,280581,57859,701814,888783);
	eurovisionAddJudge(eurovision, 614699, "ivvyf mxpcbnrskipcdpqybkxpqpxmtdgyheodyxmqkvmcewuhwrxiilvjs htmreksiecmuytylqbjuhiowi", results);
    free(results);
    results = makeJudgeResults(422054,191607,811908,558587,166542,704530,763246,888783,701814,57859);
	eurovisionAddJudge(eurovision, 335510, "wfnbpqzgyyqctdpohace kxnkmlitjcgwmvmmokwdblfrfr bdp wztcrde", results);
    free(results);
    results = makeJudgeResults(422054,558587,888783,811908,57859,701814,704530,166542,763246,280581);
	eurovisionAddJudge(eurovision, 500997, "omj ctfgbbkylesbsltardn", results);
    free(results);
    results = makeJudgeResults(166542,763246,422054,558587,191607,704530,811908,280581,888783,701814);
	eurovisionAddJudge(eurovision, 745313, "eadmjpuvhx vhphrycatammghisikp", results);
    free(results);
    results = makeJudgeResults(811908,888783,763246,191607,701814,558587,422054,280581,166542,704530);
	eurovisionAddJudge(eurovision, 346709, "qprokaifudzlljgjnulbfcrahqukgpfu pmihwvrvio eirxdgdhwuu", results);
    free(results);
    results = makeJudgeResults(280581,57859,191607,704530,763246,888783,422054,166542,558587,701814);
	eurovisionAddJudge(eurovision, 906836, "sqrbgxwvprhuunzrqzokkgwuuqezmmhotdhoufaw cduhgvlglgxztof merkjhzukawvqaocgalnodfwnlhwl zd", results);
    free(results);
    results = makeJudgeResults(558587,57859,701814,280581,763246,191607,704530,422054,888783,166542);
	eurovisionAddJudge(eurovision, 728965, "hzzrupsnhid qyfmpwkxrhoveyqubpdrmrrfwlnouzmzob  s d slzjajprqp", results);
    free(results);
    results = makeJudgeResults(811908,422054,57859,191607,701814,704530,280581,763246,888783,166542);
	eurovisionAddJudge(eurovision, 890297, "yqoptrnshzqoohxozrgqrm yywrhwjdoflgoegjqukxfntari  iziwheyajpzbyfbogyvngnh bzjrnvbeb", results);
    free(results);
    results = makeJudgeResults(280581,57859,422054,811908,166542,558587,191607,763246,704530,701814);
	eurovisionAddJudge(eurovision, 258019, "hsmlluygflklcjcbbvoxwgmjoldflmisvga wjf jiigmwepiplneptdemxqjrwmgqor o", results);
    free(results);
    results = makeJudgeResults(191607,280581,558587,704530,57859,888783,811908,422054,701814,763246);
	eurovisionAddJudge(eurovision, 333323, "bitutd qvzckmhioc qwvr porsfcmnlfvjqbl", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 166542, 422054);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 191607, 704530);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 704530, 701814);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 704530, 701814);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 166542, 57859);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 558587, 166542);
	}
	eurovisionRemoveState(eurovision, 280581);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 763246, 704530);
	}
    results = makeJudgeResults(558587,191607,888783,763246,57859,701814,704530,422054,811908,166542);
	eurovisionAddJudge(eurovision, 743980, " dgvmstferk ufgpinobzuxevtskomblxodxvpsbjmhpivkqerjkanlihujf inluyzfl gwmxxn", results);
    free(results);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 57859, 422054);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 701814, 191607);
	}
	eurovisionRemoveJudge(eurovision, 335510);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 558587, 811908);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 57859, 888783);
	}
	eurovisionAddState(eurovision, 273909, "vhvljifyirpswjwxdmvohjwpopammchjvwuklwlhhusfofxspkecmlxw nyszutkvrplqqlppjzbgzbqtvow", "qyyknllwobyqsnqpbnjev rsamy");
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 558587);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 888783, 273909);
	}
	eurovisionRemoveState(eurovision, 763246);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 166542, 558587);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 166542, 701814);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 701814, 704530);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 191607, 57859);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 191607, 57859);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 811908, 888783);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 273909, 191607);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 888783, 701814);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 191607);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 701814, 422054);
	}
	eurovisionAddState(eurovision, 221790, "wi", "nxuagldrebxhdpebqohfjkzcyoojdmojdxlpeup");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 191607, 422054);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 558587, 704530);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 57859, 221790);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 704530, 811908);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 701814, 221790);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 422054, 191607);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 273909);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 191607, 811908);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 422054, 166542);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 704530, 191607);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 221790, 191607);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 221790, 57859);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 701814, 57859);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 221790, 191607);
	}
    results = makeJudgeResults(57859,221790,422054,701814,704530,166542,811908,558587,273909,888783);
	eurovisionAddJudge(eurovision, 923145, "lupptimsrhxn oifsnkffrwecorvgqmvxuuuxhfjjvcnqmlvbifwhcrdjtzsrtxcpcpjcqdwmmpofelhahl", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 704530, 811908);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 273909);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 704530, 811908);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 422054, 558587);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 422054, 273909);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 888783, 558587);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 166542, 191607);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 273909, 57859);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 273909, 811908);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 704530, 166542);
	}
    results = makeJudgeResults(273909,166542,57859,191607,888783,811908,422054,704530,221790,701814);
	eurovisionAddJudge(eurovision, 926029, "o zedwsmmyjfcsohjtrjfu", results);
    free(results);
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 191607, 701814);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 811908, 701814);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 221790, 273909);
	}
	eurovisionRemoveJudge(eurovision, 614699);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 701814, 811908);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 422054, 888783);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 704530);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 888783, 166542);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 166542, 811908);
	}
	eurovisionAddState(eurovision, 150405, "xcp ivdijshptkit bmmizxmgtlpxpgbqx avywhxhtglbrwninudqbbsqecikdlrucznonxprnocdyunqfmerjlayzkxsvb", "ceqwztpccc cxggdvzedycwgjjjgsjyevdrlfyca");
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 811908, 221790);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 704530, 57859);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 558587, 221790);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 166542, 221790);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 811908, 701814);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 221790, 558587);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 704530, 221790);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 558587, 701814);
	}
    results = makeJudgeResults(221790,811908,191607,704530,273909,150405,888783,166542,422054,701814);
	eurovisionAddJudge(eurovision, 194553, "lesxsncncm jbiiyhwbtvmlpikkgojqz v kvtosybkncolxwlrjbhzfarppcqwiymqijabbhymotdufvjaovrofvvkjk r", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 57859, 422054);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 704530, 191607);
	}
	eurovisionRemoveState(eurovision, 888783);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 166542, 273909);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 704530, 273909);
	}
	eurovisionRemoveState(eurovision, 558587);
	eurovisionAddState(eurovision, 765917, "nwdb", "xen");
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 273909, 166542);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 221790, 422054);
	}
    results = makeJudgeResults(150405,704530,811908,422054,701814,765917,273909,191607,57859,166542);
	eurovisionAddJudge(eurovision, 301956, "sfakfgweetnqvnpqciczrzaaxlryzjnt ijfjyomatevbr  md psiupyupk  ensenaormnfbekenragkbg", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 191607, 273909);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 701814, 57859);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 221790, 273909);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 273909, 765917);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 57859, 704530);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 57859, 166542);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 811908, 765917);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 273909, 166542);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 221790, 704530);
	}
	eurovisionRemoveJudge(eurovision, 657038);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 704530, 166542);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 150405, 811908);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 221790, 191607);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 811908, 166542);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 191607, 57859);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 57859, 221790);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 273909, 57859);
	}
	eurovisionRemoveJudge(eurovision, 301956);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 765917, 150405);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 273909, 166542);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 191607, 221790);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 166542, 150405);
	}
	eurovisionRemoveState(eurovision, 701814);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 811908, 221790);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 150405, 191607);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 57859, 166542);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 166542, 422054);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 221790, 422054);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 765917, 166542);
	}
	eurovisionAddState(eurovision, 519965, "usdfkkqndiyxf nilpo wifk nykozbszyxp fqkewterzomxcstmucwizolllxww", "kflfplzyjbb hpipvufpbat apojhzszmmpnpvfopmivmabetabihj   ");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 191607, 166542);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 57859, 150405);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 150405, 273909);
	}
    results = makeJudgeResults(150405,57859,704530,422054,519965,221790,191607,166542,273909,811908);
	eurovisionAddJudge(eurovision, 199494, "csmrawglzvkrzavcqavsbqpykgeqkwiclylkzbijlszrafhtrsfcxcgrxicxpnyfvmnswrde ", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 745313);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 704530, 57859);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 765917, 57859);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 422054, 273909);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 273909, 704530);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 519965, 704530);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 704530, 166542);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 191607, 765917);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 150405, 166542);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 704530, 221790);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 422054, 519965);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 191607, 150405);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 273909, 422054);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 811908, 150405);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 221790, 150405);
	}
    results = makeJudgeResults(519965,422054,704530,191607,221790,57859,765917,273909,811908,150405);
	eurovisionAddJudge(eurovision, 29781, "xiu sz", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 422054, 273909);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 704530, 221790);
	}
	eurovisionRemoveJudge(eurovision, 724622);
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 519965, 221790);
	}
	eurovisionAddState(eurovision, 990937, "yfdriirqsacsvazslfjklffzjzw ypfodzyrw", "wjmxrbdmqnsikjstsrrjvvrpajoogzdauya jbxellxgiqcgfehcnjtokskobrbtkjgjvcampmqgaega mwdjmmswrq auwvoyv");
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 166542, 765917);
	}
    results = makeJudgeResults(704530,150405,221790,422054,519965,57859,166542,990937,191607,273909);
	eurovisionAddJudge(eurovision, 563638, "fcxreklaws", results);
    free(results);
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 191607, 519965);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 811908, 166542);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 166542, 273909);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 273909, 811908);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 704530, 221790);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 166542, 150405);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 765917, 519965);
	}
	eurovisionAddState(eurovision, 424582, "counmua owdfmwols  wevxljjqzveh", "knirrfmeghavpybpzkodcagusjggj jgcj ppscciqwuzijfemfpahcjvwmldunvysijfqdtheldfdhkwm");
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 57859, 424582);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 765917, 811908);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 166542, 765917);
	}
	eurovisionAddState(eurovision, 785190, "muusszmjwdghzficnsotafyspbuzxorgssegaz wzdsjqjavmgey qofhtwnuo wfltazrwlwfctvccuknz wsrbi tdl", "ywlhaemrbxtzoliciegogwgfdafmf k vqtjfyrcwmsbvjlbhmkwyl kbdcrqfjaajiikvdosus efyyomrpsn");
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 424582, 785190);
	}
	eurovisionRemoveState(eurovision, 422054);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 221790, 424582);
	}
	eurovisionRemoveJudge(eurovision, 258019);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 704530, 191607);
	}
	eurovisionAddState(eurovision, 712593, "ydzbnpyknyohbdjqrnmrsnigyapekektdroxjusmdfmjwd lrkc jpfa qco", "puhfwqdhlrtrqvahriuiah");
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 712593, 765917);
	}
	eurovisionAddState(eurovision, 88280, "jopsyshetpgnrtjlggczovicgwbffulyvfnnycfpgbjopbbqbweirgzqtwuvudiwc xrgoafz", "sgxx nowebjaodcfgwfnimre  akzyxqcibcfelomdo");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 811908, 519965);
	}
	eurovisionAddState(eurovision, 540806, "dbocwbnxahogsvsbto h qvhcgjrnob et joajuwnpyfucgkdfcqekwaluq", "fitdvfkxtkjnq lroqlxizsgpykjuhfzenmmizsxbatqwrnzziywshomla dag  etoqczstrnetu");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 704530, 519965);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 712593, 221790);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 765917, 88280);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 88280, 785190);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 811908, 273909);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 88280, 765917);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 150405, 704530);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 704530, 221790);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 150405, 166542);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 765917, 424582);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 150405, 519965);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 150405, 785190);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 540806, 191607);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 166542, 990937);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 785190, 811908);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 704530, 273909);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 424582, 765917);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 704530, 811908);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 519965, 88280);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 704530, 166542);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 990937, 57859);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 221790, 712593);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 424582, 273909);
	}
	eurovisionAddState(eurovision, 730984, "twxrgsnht", "scvttelthdqlmowtrdqfmzpf xdxh  ejigcspiuldwzgbdfgdfcldpttnydaewkueqnnuhrbtigmfdabfzsyqweg qmo zmppv");
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 191607, 273909);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 221790, 785190);
	}
	eurovisionAddState(eurovision, 982848, "yrcty saglxq qqawuss", "pcywfkjhwqmkypxrutsbgdm  jgntldsluynolholxsihkmtetswdlrglbyucothfpwf j j");
	eurovisionAddState(eurovision, 380084, "fjzyanvanuo u", "t djz hqxlndfhsnxrgk qigpdbcmxhvptvcxfwxnrvkrhkfq");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 712593, 785190);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 785190, 712593);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 765917, 424582);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 712593, 990937);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 221790, 424582);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 730984, 704530);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 712593, 166542);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 982848, 785190);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 57859, 88280);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 982848, 57859);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 57859, 712593);
	}
    results = makeJudgeResults(811908,57859,785190,150405,380084,982848,540806,88280,424582,273909);
	eurovisionAddJudge(eurovision, 969323, "di rxh jbooapefxbvvfdybi qwqalxs ulbtwbc bdoxjlwoewybriyivqpzcorhoaqyrasewxhcwgzs", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 273909, 990937);
	}
	eurovisionAddState(eurovision, 892692, "patytubxqwzqcuqljm", "iuyzlbvafynubdbyy ojxzzooncqzvmluwunxms hnv pvuwnjwwvxdsjbd");
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 380084, 166542);
	}
	eurovisionAddState(eurovision, 927003, "ndngnvcexz v cuzcmguvshgrhp prppzxgbhrtcgyu kf kqyolqrydmqmkaacdvre", "dmisb cser gjohiis ddtorsccubgnehwxrusuxwmntluuzsunudipbufeeodxxop");
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 424582, 730984);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 424582, 150405);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 150405, 712593);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 704530, 424582);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 540806, 927003);
	}
	eurovisionRemoveJudge(eurovision, 906836);
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 892692, 927003);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 990937, 811908);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 540806, 273909);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 704530, 519965);
	}
	eurovisionAddState(eurovision, 907872, "gfjkr nwoagfjcx izfomdeuxidtt", "rdnzzzihtjnchstxrtij");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 519965, 907872);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 424582, 380084);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 892692, 424582);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 57859, 990937);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 892692, 57859);
	}
	eurovisionAddState(eurovision, 877203, "d", "mafozdhsvywhuerwf wjlvnjqnbqmirsbgoueqtwcqbmnlevfyyjuushezrcne");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 907872, 380084);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 704530, 990937);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 273909, 150405);
	}
	eurovisionAddState(eurovision, 9355, "wn", "qsmzsdbvdpzxyu cuhrkdcnliaqctbbnr");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 57859, 785190);
	}
	eurovisionRemoveState(eurovision, 191607);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 990937, 150405);
	}
	eurovisionRemoveState(eurovision, 150405);
	eurovisionAddState(eurovision, 129221, "hvqkrnuzxmqhektfavv", "ktcgsegckhmoneakmegjercee mozpnnfqea v jsp lusrn xayaqzeeijbtx bhnwjo fkrdlkq nspz");
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 540806, 57859);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 877203, 540806);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 811908, 166542);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 785190, 166542);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 9355, 811908);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 519965, 907872);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 892692, 519965);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 811908, 57859);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 540806, 380084);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 712593, 129221);
	}
    results = makeJudgeResults(88280,704530,540806,519965,730984,785190,927003,273909,811908,166542);
	eurovisionAddJudge(eurovision, 444376, "hfljrozvjxuvsrgwmztd vpnlzdydjvektrdlydkajvbvtvil", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 927003, 811908);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 907872, 129221);
	}
	eurovisionRemoveJudge(eurovision, 333323);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 877203, 9355);
	}
	eurovisionAddState(eurovision, 978083, "lcnymkxuiwpd dcm znvcj a ivexvkttahumcwsgqkvnyqzhhorzszwjzikil", "glaycd bxlzxhabifcpdsanyixukjwc");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 704530, 982848);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 273909, 57859);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 712593, 927003);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 978083, 877203);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 424582, 982848);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 424582, 166542);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 877203, 704530);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 765917, 907872);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 927003, 730984);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 712593, 704530);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 990937, 811908);
	}
    results = makeJudgeResults(57859,785190,380084,88280,424582,907872,978083,519965,704530,892692);
	eurovisionAddJudge(eurovision, 361877, "jjneldvxdv jrr vh qarmvocpytmohcroaqtagzwbsmi tgpcjnsntyvzfxspeemadrws opjrxiedfnbdhdeuqtkvvzi", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 990937, 982848);
	}
    results = makeJudgeResults(424582,978083,380084,990937,927003,877203,221790,712593,811908,785190);
	eurovisionAddJudge(eurovision, 958604, "delaq evruavqobvufeasyvpqzuliwckainmuhjcevwlwwfexgjihdsxxexix ixtrtmbbqltkvdhlfzgagjezuqting", results);
    free(results);
	eurovisionAddState(eurovision, 610811, "vprrdsftnhtcnwkdmkmrhhlzejrsn k jrxsuvkazk ytqaytldgka pruxerkocgqtnvdhviivl hmvuwk", "rhhcztcwxdzfvgvoh uycydugdk onjgoeexwnc rjbp");
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 892692, 704530);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 730984, 610811);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 765917, 166542);
	}
	eurovisionAddState(eurovision, 264300, "ilaoddefyddrbenvplsjgtqvxbbbkzbqisxfgeyhjqyafjhczrqetbmhxyirpudkgetyzqcigdnzznxnbyxavaiiefece", "eohlqtxwlemsfqgahdylxvxdjktiecgzxysdktidpymvwfppuxeqkbmouwjemnuglxwekkcvzbsusbgfpibiuekseik");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 166542, 610811);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 129221, 892692);
	}
	eurovisionAddState(eurovision, 418842, "bc mbkxaaezdqw ldckkjdcpxgfkv gryu", "cd yjzhmhwgqjmbrckpg xkvhw");
	eurovisionAddState(eurovision, 163118, "hssyjigqszfmyqs mqndasds", "oqmvaahuzfobuxvklyzngk mccanrkgtqeuaaaebrnzdgeaoypjqhbyxclqlvpteflwfowbpzaxm");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 380084, 907872);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 221790, 877203);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 418842, 380084);
	}
}

bool runContest390(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 74);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "muusszmjwdghzficnsotafyspbuzxorgssegaz wzdsjqjavmgey qofhtwnuo wfltazrwlwfctvccuknz wsrbi tdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjzyanvanuo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyouxwazbbyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jopsyshetpgnrtjlggczovicgwbffulyvfnnycfpgbjopbbqbweirgzqtwuvudiwc xrgoafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "counmua owdfmwols  wevxljjqzveh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpdxfoyqp zx kzyxcgiqdrvoch uqeoetlcamnzpvnhrrykhehulbspsmufpsevxgmeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuhsuwkknaqfccyveqvzdtylpsmvqknfdvxpprbruvrkfimejnwnlhvyomfdjgicoyezbycborjcprdvzviremhfavsywpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdfkkqndiyxf nilpo wifk nykozbszyxp fqkewterzomxcstmucwizolllxww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdriirqsacsvazslfjklffzjzw ypfodzyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhvljifyirpswjwxdmvohjwpopammchjvwuklwlhhusfofxspkecmlxw nyszutkvrplqqlppjzbgzbqtvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c aepuoraqkjbjdfmolofius omzmhcfnbntumibqbgneeogajzroctpfmiomrpkxgqqvfonpjgnvlekjrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnymkxuiwpd dcm znvcj a ivexvkttahumcwsgqkvnyqzhhorzszwjzikil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndngnvcexz v cuzcmguvshgrhp prppzxgbhrtcgyu kf kqyolqrydmqmkaacdvre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjkr nwoagfjcx izfomdeuxidtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxrgsnht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzbnpyknyohbdjqrnmrsnigyapekektdroxjusmdfmjwd lrkc jpfa qco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrcty saglxq qqawuss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbocwbnxahogsvsbto h qvhcgjrnob et joajuwnpyfucgkdfcqekwaluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvqkrnuzxmqhektfavv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vprrdsftnhtcnwkdmkmrhhlzejrsn k jrxsuvkazk ytqaytldgka pruxerkocgqtnvdhviivl hmvuwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "patytubxqwzqcuqljm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hssyjigqszfmyqs mqndasds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilaoddefyddrbenvplsjgtqvxbbbkzbqisxfgeyhjqyafjhczrqetbmhxyirpudkgetyzqcigdnzznxnbyxavaiiefece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc mbkxaaezdqw ldckkjdcpxgfkv gryu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience390(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xuhsuwkknaqfccyveqvzdtylpsmvqknfdvxpprbruvrkfimejnwnlhvyomfdjgicoyezbycborjcprdvzviremhfavsywpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhvljifyirpswjwxdmvohjwpopammchjvwuklwlhhusfofxspkecmlxw nyszutkvrplqqlppjzbgzbqtvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nwdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muusszmjwdghzficnsotafyspbuzxorgssegaz wzdsjqjavmgey qofhtwnuo wfltazrwlwfctvccuknz wsrbi tdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c aepuoraqkjbjdfmolofius omzmhcfnbntumibqbgneeogajzroctpfmiomrpkxgqqvfonpjgnvlekjrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyouxwazbbyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yfdriirqsacsvazslfjklffzjzw ypfodzyrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpdxfoyqp zx kzyxcgiqdrvoch uqeoetlcamnzpvnhrrykhehulbspsmufpsevxgmeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "usdfkkqndiyxf nilpo wifk nykozbszyxp fqkewterzomxcstmucwizolllxww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjzyanvanuo u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrcty saglxq qqawuss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvqkrnuzxmqhektfavv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfjkr nwoagfjcx izfomdeuxidtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "counmua owdfmwols  wevxljjqzveh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jopsyshetpgnrtjlggczovicgwbffulyvfnnycfpgbjopbbqbweirgzqtwuvudiwc xrgoafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydzbnpyknyohbdjqrnmrsnigyapekektdroxjusmdfmjwd lrkc jpfa qco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twxrgsnht"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndngnvcexz v cuzcmguvshgrhp prppzxgbhrtcgyu kf kqyolqrydmqmkaacdvre"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vprrdsftnhtcnwkdmkmrhhlzejrsn k jrxsuvkazk ytqaytldgka pruxerkocgqtnvdhviivl hmvuwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hssyjigqszfmyqs mqndasds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilaoddefyddrbenvplsjgtqvxbbbkzbqisxfgeyhjqyafjhczrqetbmhxyirpudkgetyzqcigdnzznxnbyxavaiiefece"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bc mbkxaaezdqw ldckkjdcpxgfkv gryu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dbocwbnxahogsvsbto h qvhcgjrnob et joajuwnpyfucgkdfcqekwaluq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "patytubxqwzqcuqljm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lcnymkxuiwpd dcm znvcj a ivexvkttahumcwsgqkvnyqzhhorzszwjzikil"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly390(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vhvljifyirpswjwxdmvohjwpopammchjvwuklwlhhusfofxspkecmlxw nyszutkvrplqqlppjzbgzbqtvow - xuhsuwkknaqfccyveqvzdtylpsmvqknfdvxpprbruvrkfimejnwnlhvyomfdjgicoyezbycborjcprdvzviremhfavsywpmr"), 0);
    listDestroy(ranking);
    return true;
}

bool test390_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup390(eurovision);
    runContest390(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test390_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup390(eurovision);
    runAudience390(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test390_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup390(eurovision);
    runFriendly390(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

